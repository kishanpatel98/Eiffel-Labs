note
	description: "Summary description for {SORTED_MAP_CURSOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SORTED_MAP_CURSOR [K, V]

inherit

	ITERATION_CURSOR [TUPLE [K, V]]

create
	make

feature{NONE}
	array: ARRAY[TUPLE [K, V]]
	cursor_pos: INTEGER

feature

	make(a : ARRAY[TUPLE [key: K; value: V]])
		do
			cursor_pos := a.lower
			array := a
		end

feature -- Access

	item: TUPLE[key : K; value : V]
			-- Item at current cursor position.
		do
			Result := array[cursor_pos]
		end

feature -- Status report	

	after: BOOLEAN
			-- Are there no more items to iterate over?
		do
			Result := array.count < cursor_pos
		end

feature -- Cursor movement

	forth
			-- Move to next position.
		do
			cursor_pos := cursor_pos + 1
		end

end
