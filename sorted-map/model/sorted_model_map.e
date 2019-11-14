note
	description: "Summary description for {SORTED_MODEL_MAP}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SORTED_MODEL_MAP [K -> COMPARABLE, V -> ANY]

inherit
	SORTED_MAP_ADT[K, V]

create
	make_empty,
	make_from_array,
	make_from_sorted_map

feature
	model: FUN [K, V]
		do
			Result := implementation
		end

feature{NONE}
	implementation: FUN[K,V]
		attribute
			create Result.make_empty
		end

	make_empty
		do
			implementation.make_empty
		end

	make_from_array (array: ARRAY [TUPLE [key: K; val: V]])
		do
			implementation.make_from_array (array)
		end


	make_from_sorted_map (map: SORTED_MAP_ADT [K, V])
		do
			implementation := map.model
		end

feature
	put (value: V; key: K)
		do
			if not has(key) then
				extend (key, value)
			else
				replace (key, value)
			end
		end

	extend (key: K; value: V)
		local
			pair: PAIR[k, v]
		do
			create pair.make(key, value)
				implementation.extend(pair)
		end

	remove (key: K)
		do
			implementation.subtract ([key, implementation [key]])
		end

	replace (key: K; value: V)
		do
			implementation.override_by ([key, value])
		end

	replace_key (old_key, new_key: K)
	local
		temp_value: V
		pair: PAIR[k, v]
	do
		temp_value := implementation[old_key]
		create pair.make (old_key, temp_value)
		implementation.subtract (pair)
		pair.make (new_key, temp_value)
		implementation.extend (pair)
	end

	wipe_out
		do
			implementation.make_empty
		end

	item alias "[]" (key: K): V assign put
		do
			Result := implementation[key]
		end

	as_array: ARRAY [TUPLE [key: K; value: V]]
		do
			create Result.make_empty
			across sorted_keys as key
			loop
				Result.force ([key.item, model[key.item]], key.cursor_index)
			end
		end

	sorted_keys: ARRAY [K]
		local
			key_array: ARRAY[K]
			U: UTIL[K]
		do
			create key_array.make_empty
			key_array := implementation.domain.as_array
			key_array := u.merge_sort (key_array)
			Result := key_array
		end

	values: ARRAY [V]
		local
			array: ARRAY[K]
		do
			create Result.make_empty
			across sorted_keys as key
				loop
					Result.force(implementation[key.item], key.cursor_index)
				end
		end

	has (key: K): BOOLEAN
		do
			Result := implementation.domain.has (key)
		end

	has_value(value: V): BOOLEAN
		do
			Result := implementation.range.has (value)
		end

	element (key: K): detachable TUPLE [key: K; value:V]
		do
			if has(key) then
				Result := [key, implementation[key]]
			else
				Result := VOID
			end
		end

	count: INTEGER
		do
			Result := implementation.count
		end

	is_empty: BOOLEAN
		do
			Result := implementation.count = 0
		end

	min: TUPLE [key: K; value: V]
		do
			Result := as_array[1]
		end

	max: TUPLE [key: K; value: V]
		do
			Result := as_array[implementation.count]
		end

end
