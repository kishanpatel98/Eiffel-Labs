note
	description: "[
		{SORTED_LINEAR} is a concrete implementation of {SORTED_ADT}
		that handles most of its logic itself. It uses an {ARRAY} as
		its underlying data structure.
	]"
	author: "Joshua Phillip"
	date: "$Date$"
	revision: "$Revision$"

class
	SORTED_LINEAR[K -> COMPARABLE, V -> ANY]

inherit
	SORTED_ADT[K,V]

create
	make_empty, make_from_array, make_from_sorted_array

feature{NONE}

	linear: ARRAY[KV_PAIR[K,V]]
			-- array used for implementation
		attribute
			create Result.make_empty
		end

feature{SORTED_LINEAR_MAP} -- constructors

	make_from_array(array: ARRAY[TUPLE[K,V]])
			-- creates linear from an unsorted `array'
		do
			linear := (create {UTIL[KV_PAIR[K,V]]}).mergesort(to_pair_array(array))
		end


	make_from_sorted_array(array: ARRAY[TUPLE[K,V]])
			-- creates linear from a sorted `array'
		do
			linear := to_pair_array(array)
		end

feature -- commands

	extend(a_item: TUPLE[key: K; value: V])
			-- extends linear to include `a_item'
		local
			l_pair: KV_PAIR[K, V]
			l_array: ARRAY[KV_PAIR[K,V]]
		do
--			linear := (create{UTIL[KV_PAIR[K,V]]}).merge (linear, <<a_item>>)
			l_pair := a_item
			create l_array.make_empty
			l_array.force (l_pair, 1)
			linear := (create{UTIL[KV_PAIR[K,V]]}).merge (linear, l_array)
		end

	remove(a_key: K)
			-- removes `a_item' from linear
		do
			linear := (create{UTIL[KV_PAIR[K,V]]}).remove (linear, find_element_index(a_key))
		end

	wipe_out
			-- removes all elements from linear
		do
			linear.make_empty
		end

	extend_from_array(other: ARRAY[TUPLE[K,V]])
			--merges `other' with `Current' linear
		local
			util: UTIL[KV_PAIR[K,V]]
		do
			linear := util.mergesort (util.concatenate (linear, to_pair_array(other)))
		end

feature -- queries

--	item alias "[]" (a_key: K): V
--			-- returns the value associated with `a_key'
--		do
--			check attached element (a_key) as el then
--				Result := el.value
--			end
--		end

	element(a_key: K): detachable KV_PAIR[K,V]
			-- returns pair with associated `a_key' from linear
		local
			i: INTEGER
		do
			i := find_element_index(a_key)
			if i > 0 then
				Result := linear[i]
			end
		end

	as_array: ARRAY[KV_PAIR[K,V]]
			-- array representation of linear
		do
			Result := linear
		end

	min: detachable KV_PAIR[K,V]
			-- returns minimum element of linear
		do
			if not is_empty  then
				Result := linear[linear.lower]
			end
		end

	max: detachable KV_PAIR[K,V]
			-- returns maximum element of linear
		do
			if not is_empty  then
				Result := linear[linear.upper]
			end
		end

	is_empty: BOOLEAN
			-- returns whether linear is empty
		do
			result := count = 0
		end

feature{NONE} -- private helper methods

	find_element_index(a_key: K): INTEGER
			-- returns the index position of `a_key'
		do
			Result := binary_search (linear, linear.lower, linear.upper, a_key)
		end

	binary_search (array: ARRAY [KV_PAIR[K,V]]; low, high: INTEGER; k: K): INTEGER
			-- helper method to find a key inside a list, returns -1 if key does not exist
		local
			mid: INTEGER
		do
			result := -1
			if high >= low then
				mid := low + (high - low) // 2
				if array [mid].key ~ k then
					Result := mid
				elseif array [mid].key > k then
					Result := binary_search (array, low, mid - 1, k)
				else
					Result := binary_search (array, mid + 1, high, k)
				end
			end
		ensure
			missing_item_returns_negative: (Result < 0) implies not has (k)
			correct_location: (Result >= 0) implies array[Result].key ~ k
		end


end
