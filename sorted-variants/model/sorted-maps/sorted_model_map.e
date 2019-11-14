note
	description: "[
		{SORTED_MODEL_MAP} is a concrete but inefficient implementation
		of {SORTED_MAP} used primarily for testing purposes.
	]"
	author: "Joshua Phillip"
	date: "$Date$"
	revision: "$Revision$"

class
	SORTED_MODEL_MAP [K -> COMPARABLE, V -> ANY]

inherit
	SORTED_MAP_ADT[K,V]

create
	make_empty, make_from_array, make_from_sorted_map

feature -- model
	model: FUN [K, V]
			-- abstraction function
		do
			Result := implementation
		end

feature{NONE} -- attributes
	implementation: FUN[K,V]
			-- inefficient but abstract implementation of sorted map
		attribute
			create Result.make_empty
		end

	instance: like Current
		attribute
			create Result.make_empty
		end

feature{NONE} -- constructors

	make_empty
			-- creates a sorted map without any elements
		do
			implementation.make_empty
		end

	make_from_array (array: ARRAY [TUPLE [key: K; val: V]])
			-- creates a sorted map with the elements of the `array'
		do
			implementation.make_from_array (array)
		end

	make_from_sorted_map (map: SORTED_MAP_ADT [K, V])
			-- creates a sorted map from `other'
		do
			make_from_array(map.as_array)
		end

feature -- commands

	put (val: V; key: K) --(key: K; val: V)
			-- puts an element of `key' and `value' into map
			-- behaves like `extend' if `key' does not exist
			-- otherwise behaves like `update'
			-- NOTE: This method follows the convention of `val'/`key'
		do
			implementation.override_by ([key, val])
		end

	extend (key: K; val: V)
			-- inserts an element of `key' and `value' into map
		do
			implementation.extend ([key, val])
		end

	remove (key: K)
			-- removes an element whose value is `key' from the map
		do
			implementation.subtract ([key, implementation [key]])
		end

	prune (val: V; i: INTEGER)
			-- removes `i'th occurrence of `val' from the map
			-- demanding version
		do
			implementation.domain_subtract_by (occurrences (val)[i])
		end

	prune_all (val: V)
			-- removes all occurences of `val' from the map
			-- does nothing if element does not exist
		do
			implementation.range_subtract_by (val)
		end

	replace (key: K; val: V)
			-- replaces `value' for a given `key'
		do
			implementation.override_by ([key, val])
		end

	replace_key (old_key, new_key: K)
			-- replaces `old_key' with `new_key' for an element
		local
			l_val: V
		do
			l_val := implementation [old_key]
			remove (old_key)
			extend (new_key, l_val)
		end

	wipe_out
			--makes an existing map empty
		do
			implementation.make_empty
		end

	merge (other: SORTED_MAP_ADT[K,V])
			-- merges `Current' map with `other' map
		do
			implementation.union (create {FUN[K,V]}.make_from_array(other.as_array))
		end

feature -- queries

	item alias "[]" (key: K): V assign put
			--returns the value associated with `key'
		do
			Result := implementation [key]
		end

	as_array: ARRAY [TUPLE [key: K; value: V]]
			-- returns an array of tuples sorted by key
		do
			create Result.make_empty
			across
				sorted_keys as l_c
			loop
				Result.force (l_c.item, model [l_c.item], l_c.cursor_index)
			end
		end

	sorted_keys: ARRAY [K]
			-- returns a sorted array of keys
		do
			Result := (create {UTIL[K]}).mergesort (implementation.domain.as_array)
		end

	values: ARRAY [V]
			--returns an array of values sorted by key
		do
			create Result.make_empty
			across
				sorted_keys as l_c
			loop
				Result.force (implementation[l_c.item], l_c.cursor_index)
			end
		end

	has (key: K): BOOLEAN
			-- returns whether `key' exists in the map
		do
			Result := implementation.domain.has (key)
		end

	has_value(val: V): BOOLEAN
			-- returns whether `val' exists in the map
		do
			Result := implementation.range.has (val)
		end

	element (key: K): detachable TUPLE [key: K; val:V]
			-- returns an element of the map (i.e. a tuple [`key', value])
			-- associated with `key'
		do
			if has (key) then
				Result := [key, implementation [key]]
			end
		end

	count: INTEGER
			--returns number of elements in the map
		do
			Result := implementation.count
		end

	is_empty: BOOLEAN
			-- returns whether the map is empty
		do
			Result := implementation.count = 0
		end

	min: TUPLE [key: K; val: V]
			--returns the pairing with the smallest key in the map
		do
			Result := as_array [1]
		end

	max: TUPLE [key: K; val: V]
			--returns the element with the largest key in the map
		do
			Result := as_array [implementation.count]
		end

	occurrences (val: V): ARRAY [K]
			-- returns a sorted array of keys who have `val' as their value
			-- may return an empty array
		do
			Result := (create{UTIL[K]}).mergesort(((implementation @> val).domain).twin)
		end

end
