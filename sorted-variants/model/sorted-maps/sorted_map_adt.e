note
	description: "[
		{SORTED_MAP} is the parent of all the variants of the map.
		It outlines the core features of the map while the children,
		handle implementation with different performance trade-offs.
		It also handles the primary contracting responsibilities.
		For users unsure what to use, it is recomended to use the
		RBT variant when lots of insertion and remove operations
		are needed and the LINEAR variant when lots of query type
		operations are needed, especially printing the entire list or
		finding the min/max.
		
		Model:
			model: FUN [K, V]
			sorted_keys: ARRAY [K]
		Queries:
			as_array: ARRAY [TUPLE [K, V]]
			count: INTEGER_32
			element (key: K): detachable TUPLE [K, V]
			has (key: K): BOOLEAN
			has_value (val: V): BOOLEAN
			is_empty: BOOLEAN
			item alias "[]" (key: K): V
			max: TUPLE [K, V]
			min: TUPLE [K, V]		
			new_cursor: SORTED_MAP_CURSOR [K, V]
			occurrences (val: V): ARRAY [K]
			sub_map (lower, upper: K): [like Current] SORTED_MAP_ADT [K, V]
			values: ARRAY [V]
		Commands:
			extend (key: K; val: V)
			remove (key: K)
			merge (other: SORTED_MAP_ADT [K, V])
			prune (val: V; i: INTEGER_32)
			prune_all (val: V)
			prune_tolerant (val: V; i: INTEGER_32)
			put (val: V; key: K)
			replace (key: K; val: V)
			replace_key (old_key, new_key: K)
			wipe_out, etc.
	]"
	author: "JP, JSO, JW"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	SORTED_MAP_ADT [K -> COMPARABLE, V -> ANY]

inherit

	ITERABLE [TUPLE [K, V]]
		redefine
			is_equal,
			out
		end

feature -- model

	model: FUN [K, V]
			-- abstraction function
		deferred
		end

feature {NONE} -- attributes

	instance: like Current
			-- result is an object with type like `Current'
			-- needed for sub_map
		deferred
		end

feature {NONE} -- constructors

	make_from_array (array: ARRAY [TUPLE [key: K; val: V]])
			-- creates a sorted map with the elements of the `array'
		require
			all_keys_unique:
				across	array.lower |..| array.upper as i all
				across	array.lower |..| array.upper as j all
				  array[i.item].key ~ array[j.item].key
				  implies
				  i.item = j.item
				end
				end
				-- ∀i, j ∈ a.lower..a.upper: a[i].key ~ a[j] ⇒ i = j
				-- where `a' is `array'
		deferred
		end

	make_from_sorted_map (other: SORTED_MAP_ADT [K, V])
			-- creates a sorted map from `other'
		deferred
		end

feature -- commands

	put (val: V; key: K)
			-- puts an entry of `key' and `value' into map
			-- behaves like `extend' if `key' does not exist
			-- otherwise behaves like `update'
			-- NOTE: This command follows the convention of `val'/`key'
		deferred
		ensure
			inserted: model ~ ((old model.deep_twin) @<+ [key, val])
		end

	extend (key: K; val: V)
			-- inserts an entry of `key' and `value' into map
		require
			is_new_key: not has (key)
		deferred
		ensure
			extended: model ~ ((old model.deep_twin) + [key, val])
		end

	remove (key: K)
			-- removes an entry with `key' from the map
		require
			key_exists: has (key)
		deferred
		ensure
			removed: model ~ ((old model.deep_twin) - [key, old model [key]])
		end

	prune_tolerant (val: V; i: INTEGER)
			-- removes `i'th occurrence of `val' from the map
			-- does nothing if `i'th occurrence does not exist
		do
			if 1 <= i and then i <= occurrences (val).count then
				prune (val, i)
			end
		ensure
			pruned:
				-- To Do
				-- Hint: Use query `occurrences' and {FUN[K, V]}.domain_subtracted_by
				-- with infix @<<

				old occurrences (val).count >= i implies model ~ (old model.deep_twin @<< (((old occurrences (val)).deep_twin) [i]))
			not_pruned: not (old occurrences (val).count >= i) implies model ~ (old model.deep_twin)
		end

	prune (val: V; i: INTEGER)
			-- removes `i'th occurrence of `val' from the map
			-- demanding version
		require
			ith_exists: 1 <= i and then i <= occurrences (val).count
		deferred
		ensure
			pruned: model ~ (old model.deep_twin @<< (((old occurrences (val)).deep_twin) [i]))
		end

	prune_all (val: V)
			-- removes all occurences of `val' from the map
			-- does nothing if element does not exist
		deferred
		ensure
			pruned_all: model ~ (old model.deep_twin @>> (val))
		end

	replace (key: K; val: V)
			-- replaces `value' for a given `key'
		require
			key_exists: has (key)
		deferred
		ensure
			model_updated: model ~ (old model.deep_twin @<+ [key, val])
		end

	replace_key (old_key, new_key: K)
			-- replaces `old_key' with `new_key' for an element
		require
			old_key_exists: has (old_key)
			new_key_unique: not has (new_key)
		deferred
		ensure
			updated: model ~ ((old model.deep_twin) + [new_key, model [new_key]] - [old_key, model [new_key]])
		end

	wipe_out
			--makes an existing map empty
		deferred
		ensure
			empty: is_empty
		end

	merge (other: SORTED_MAP_ADT [K, V])
			-- merges `Current' map with `other' map
		require
			distinct_keys:
			-- To Do
			-- Hint: Consider the intersection operator |/\| in the SET class in Mathmodels.
			model.domain /~ model.domain |/\| (other.model.domain)
		deferred
		ensure
			merged:
			-- To Do
			-- Hint: Consider the union operator |\/| in the SET class in Mathmodels.
			model ~ (old model.deep_twin) |\/| (other.model)
		end

feature -- queries

	item alias "[]" (key: K): V assign put
			--returns the value associated with `key'
		require
			key_exists: has (key)
		deferred
		ensure
			result_correct: Result = model [key]
			model_unchanged: model ~ old model.deep_twin
		end

	as_array: ARRAY [TUPLE [key: K; value: V]]
			-- returns an array of tuples sorted by key
		deferred
		ensure
			array_matches_model: create {FUN [K, V]}.make_from_array (Result) ~ model
			keys_sorted: across 1 |..| (model.count - 1) as i all Result [i.item].key < Result [i.item + 1].key end
			model_unchanged: model ~ old model.deep_twin
		end

	sorted_keys: ARRAY [K]
			-- returns a sorted array of keys
		deferred
		ensure
			same_counts:
				Result.count = model.count
			array_matches_domain:
				create {SET [K]}.make_from_array (Result) ~ model.domain
			sorted:
				across 1 |..| (model.count - 1) as i all Result [i.item] < Result [i.item + 1] end
			model_unchanged:
				model ~ old model.deep_twin
		end

	values: ARRAY [V]
			--returns an array of values sorted by key
		deferred
		ensure
			values_match: across 1 |..| count as i all as_array [i.item].value ~ Result [i.item] end
			model_unchanged: model ~ old model.deep_twin
		end

	has (key: K): BOOLEAN
			-- returns whether `key' exists in the map
		deferred
		ensure
			correct_result: Result = model.domain.has (key)
			model_unchanged: model ~ old model.deep_twin
		end

	has_value (val: V): BOOLEAN
			-- returns whether `val' exists in the map
		deferred
		ensure
			correct_result: Result = model.range.has (val)
			model_unchanged: model ~ old model.deep_twin
		end

	element (key: K): detachable TUPLE [key: K; val: V]
			-- returns an element of the map (i.e. a tuple [`key', value])
			-- associated with `key'
		deferred
		ensure
			correct_result: attached Result implies model.has ([key, model [key]])
			model_unchanged: model ~ old model.deep_twin
		end

	count: INTEGER
			--returns number of elements in the map
		deferred
		ensure
			result_correct: Result = model.count
			model_unchanged: model ~ old model.deep_twin
		end

	is_empty: BOOLEAN
			-- returns whether the map is empty
		deferred
		ensure
			empty_matches_model: Result = model.is_empty
			model_unchanged: model ~ old model.deep_twin
		end

	min: TUPLE [key: K; val: V]
			--returns the pairing with the smallest key in the map
		require
			model_has_elements: not is_empty
		deferred
		ensure
			correct_key: Result.key ~ sorted_keys [1]
			correct_val: Result.val ~ model [Result.key]
			model_unchanged: model ~ old model.deep_twin
		end

	max: TUPLE [key: K; val: V]
			--returns the element with the largest key in the map
		require
			model_has_elements: not is_empty
		deferred
		ensure
			correct_key: Result.key ~ sorted_keys [model.count]
			correct_val: Result.val ~ model [Result.key]
			model_unchanged: model ~ old model.deep_twin
		end

	occurrences (val: V): ARRAY [K]
			-- returns a sorted array of keys that have `val' as their value
			-- may return an empty array
		deferred
		ensure
			array_matches_range: create {SET [K]}.make_from_array (Result) ~ (model @> val).domain
			count_correct: Result.count ~ (create {SET [K]}.make_from_array (Result)).count
				--			sorted2: (create {UTIL[K]}).strictly_increasing(Result)
			sorted: across 1 |..| (Result.count - 1) as i all Result [i.item] < Result [i.item + 1] end
			model_unchanged: model ~ old model.deep_twin
		end

	sub_map (lower, upper: K): like Current
			-- returns a submap who's keys range from `lower', inclusive, to `upper', exclusive
			-- may return nothing if no elements between `lower' and `upper'
		require
			lower_less_than_upper: lower < upper
		do
			Result := instance.deep_twin
			across
				Current as cursor
			loop
				if lower <= cursor.item.key and then cursor.item.key < upper then
					Result.extend (cursor.item.key, Current [cursor.item.key])
				end
			end
		ensure
			excluded_not_in_range: across (model.domain |\ Result.model.domain) as excluded all not (lower <= excluded.item and then excluded.item < upper) end
			included_in_range: across (Result.model.domain) as included all lower <= included.item and then included.item < upper end
			model_unchanged: model ~ old model.deep_twin
		end

feature --iteration

	new_cursor: SORTED_MAP_CURSOR [K, V]
			-- Fresh cursor associated with current structure
		do
			create Result.make (as_array)
		end

feature --output

	out: STRING
			-- New string containing terse printable representation
			-- of current object
		do
			create Result.make_empty
			across
				Current as cursor
			loop
				Result.append ("(" + cursor.item.key.out + "," + cursor.item.value.out + ")")
			end
		end

feature {SORTED_MAP_ADT} -- is_equal

	is_equal (other: like current): BOOLEAN
			-- Is `other' attached to an object considered
			-- equal to current object?
		do
			Result := model ~ other.model
		end

invariant
		--	keys_strictly_increasing:
		--			-- ensures that keys are sorted in order

		--		(create {UTIL[K]}).strictly_increasing(sorted_keys)

	keys_strictly_increasing: across 1 |..| (model.count - 1) as i all sorted_keys [i.item] < sorted_keys [i.item + 1] end
	consistent_count: sorted_keys.count = model.count

		-- ∀k ∈ sorted_keys: k ∈ model.domain
	across sorted_keys as k all model.domain.has (k.item) end
	single_item_min_eq_max: (model.count = 1) implies (min ~ max)
	valid_min_max: (model.count > 1) implies (min.key < max.key)

end
