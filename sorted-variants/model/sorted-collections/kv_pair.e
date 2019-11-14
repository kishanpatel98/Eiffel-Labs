	note
	description: "[
		{KV_PAIR} is a comparable item that can be used to convert 
		a regular data structure into sorted one.
	]"
	author: "JP, JSO"
	date: "May 16th, 2018"
	revision: "1"

class
	KV_PAIR [K -> COMPARABLE, V -> ANY]

inherit
	COMPARABLE
		redefine is_equal end

create
	make_from_tuple

convert
    make_from_tuple ({TUPLE[K, V]}),
    as_tuple: {TUPLE[K,V]}

feature -- parameters

	item: TUPLE[key: K; val: V] assign set_item
			-- returns the current pair as a tuple

feature{NONE} -- constuctors

	make_from_tuple(a_item: TUPLE[K, V])
			-- creates a pair from `a_item'
		do
			item := a_item
		end

feature -- queries

	key: K
			-- returns the key of the pair
		do
			Result := item.key
		end

	value: V
			-- returns the value of the pair
		do
			Result := item.val
		end

	as_tuple: TUPLE [K, V]
			-- converts a pair to a tuple
		do
			Result := [key, value]
		end

	is_less alias "<" (other: like Current): BOOLEAN
		do
			Result := key < other.key
		end

	is_equal (other: like Current): BOOLEAN
		do
			Result := key ~ other.key and then value ~ other.value
		end

	set_item (a_item: TUPLE[key: K;val: V])
				-- sets `Current' item to `a_item'
		do
			item := a_item
		end

end
