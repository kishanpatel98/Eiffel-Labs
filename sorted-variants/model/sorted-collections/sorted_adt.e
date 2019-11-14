note
	description: "[
		{SORTED_ADT} is the parent of all the sorted ADT variants.
		It handles most of the contracting but none of the logic
		associated with the {SORTED_ADT} classes.
	]"
	author: "JSP, JSO"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	SORTED_ADT[K -> COMPARABLE, V-> ANY]


inherit
	ITERABLE[KV_PAIR[K,V]]
		redefine out end

feature -- model

	model: SEQ[attached like element]
			-- abstraction function
		do
			create Result.make_from_array (as_array)
		end

feature{SORTED_MAP_DESIGN} -- consructors

	make_empty
			-- creates a tree with no elements
		do
			default_create
		end

	make_from_array(array: ARRAY[TUPLE[K,V]])
			-- creates a sorted tree from an unsorted `array'
		deferred
		end

	make_from_sorted_array(array: ARRAY[TUPLE[K,V]])
			-- creates a sorted tree from a sorted `array'
		deferred
		end

feature -- commands

	extend(a_item: TUPLE[key: K; value: V])
			-- adds `a_item' to ADT
		require
			key_unique: not has(a_item.key)
		deferred
		ensure
			inserted: model ~ (old model.deep_twin).inserted (create {like model.item}.make_from_tuple(a_item), find_index(a_item.key))
		end

	remove(a_key: K)
			-- removes TUPLE with `a_key' from ADT
		require
			key_exists: has (a_key)
		deferred
		ensure
			removed: model ~ (old model.deep_twin).removed(old find_index(a_key))
		end

	wipe_out
			-- clears ADT
		deferred
		ensure
			empty: model.is_empty
		end

	extend_from_array(other: ARRAY[TUPLE[key: K; value: V]])
			-- merges `other' with `Current'
		require
			distinct_keys:
				across other as l_c all
					not has(l_c.item.key)
				end
		deferred
		ensure
			sorted: across 1 |..| (as_array.count - 1) as i all
					as_array[i.item] <= as_array[i.item + 1]
				end
			contains_all_elements: model.as_function.range ~
				((old model.deep_twin) |++| create{like model}.make_from_array(to_pair_array(other))).as_function.range
		end

feature -- queries

	item alias "[]" (a_key: K): V
			-- returns the value associate with `a_key'
		require
			key_exists: has (a_key)
		do
			check attached element(a_key) as el then
				Result := el.value
			end
		ensure
			result_correct: Result ~ model [find_index(a_key)].value
			model_unchanged: model ~ old model.deep_twin
		end

	as_array: ARRAY[KV_PAIR[K,V]]
			-- array representation of ADT
		deferred
		ensure
			array_matches_model: create {like model}.make_from_array(Result) ~ model
			model_unchanged: model ~ old model.deep_twin
		end

	element(a_key: K): detachable KV_PAIR[K,V]
			-- returns element with associated `a_item' from ADT
		deferred
		ensure
			attached Result implies model.has (model[find_index(a_key)])
			model_unchanged: model ~ old model.deep_twin
		end

	min: detachable KV_PAIR[K,V]
			-- returns minimum element in ADT
		deferred
		ensure
			model_unchanged: model ~ old model.deep_twin
			correct_min: Result ~ model.first
		end

	max: detachable KV_PAIR[K,V]
			-- returns maximum element in ADT
		deferred
		ensure
			model_unchanged: model ~ old model.deep_twin
			correct_max: Result ~ model.last
		end

	count: INTEGER
			-- returns number of elements in ADT
		do
			Result := as_array.count
		ensure
			result_correct: Result = model.count
			model_unchanged: model ~ old model.deep_twin
		end

	is_empty: BOOLEAN
			-- returns whether ADT is empty
		deferred
		ensure
			empty_matches_model: Result = model.is_empty
			model_unchanged: model ~ old model.deep_twin
		end

	has(a_key: K): BOOLEAN
			-- returns whether `a_key' exists
		do
			Result := attached element(a_key)
		ensure
			 correct_result: 
			 	Result = (across as_array as cursor some
                                          cursor.item.key ~ a_key
                                         end)
			model_unchanged: model ~ old model.deep_twin
		end


feature{NONE} -- private helper queries

	find_index(a_key: K): INTEGER
			-- returns index of `a_key'
		require
			key_exists: has (a_key)
		local
			i: INTEGER
		do
			i := as_array.lower
			across Current as l_c loop
				if l_c.item.key ~ a_key then
					Result := i
				end
				i := i + 1
			end
		ensure
			index_matches_element: model[Result] ~ element (a_key)
		end

	to_pair_array(array: ARRAY[TUPLE[K,V]]): ARRAY[like model.item]
			-- converts `array' of tuple to `array' of pairs
		do
			Create Result.make_empty
			across array as l_c loop
				Result.force (create {like model.item}.make_from_tuple(l_c.item), l_c.cursor_index)
			end
		end

feature -- output

	out: STRING
			-- New string containing terse printable representation
			-- of current object
		do
			Create Result.make_empty
			across as_array as l_n loop
				Result.append ("(" + l_n.item.out + ")")
				if l_n.cursor_index < as_array.count then
					Result.append(",")
				end
			end
		end

feature -- iteration

	new_cursor: ITERATION_CURSOR[like model.item]
			-- Fresh cursor associated with current structure
		do
			Result := as_array.new_cursor
		end

invariant

	sorted:
		across 1 |..| (model.count - 1) as i
		all
			model[i.item].key < model[i.item + 1].key
		end

	as_array_equals_model:
		across 1 |..| model.count as i
		all
			as_array[i.item] ~ model[i.item]
		end

	consistent_count:
		as_array.count = model.count

	single_item_min_eq_max:
		(model.count = 1) implies (min ~ max)

	valid_min_max:
		(model.count > 1 and then attached min as a_min and then attached max as a_max)
			implies (a_min.key < a_max.key)



end
