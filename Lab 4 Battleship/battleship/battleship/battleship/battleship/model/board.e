note
	description: "Summary description for {BOARD}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BOARD

inherit
	ANY
		redefine
			out
		end

create
	make_empty,
	make_easy,
	make_medium,
	make_hard,
	make_advanced

feature -- random generators

	rand_gen: RANDOM_GENERATOR
			-- random generator for normal mode
			-- it's important to keep this as an attribute
		attribute
			create result.make_random
		end

	debug_gen: RANDOM_GENERATOR
			-- deterministic generator for debug mode
			-- it's important to keep this as an attribute
		attribute
			create result.make_debug
		end

feature -- attributes

	board: ARRAY2[SHIP_ALPHABET]

	row_indices : ARRAY[CHARACTER]
		once
			Result := <<'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'>>
		end

	occupied_v: CHARACTER
		once
			Result := 'v'
		end

	occupied_h: CHARACTER
		once
			Result := 'h'
		end
	empty_c: CHARACTER
		once
			Result := '_'
		end
	miss: CHARACTER
		once
			Result := 'O'
		end

feature -- creation

	make_empty
			--makes an empty board
		do
			--create board.make_filled (create {SHIP_ALPHABET}.make ('_'), 12, 12)
			create board.make_filled (create {SHIP_ALPHABET}.make (' '), 0, 0)
		end

	make_easy
		do
			create board.make_filled (create {SHIP_ALPHABET}.make ('_'), 4, 4)
		end

	make_medium
		do
			create board.make_filled (create {SHIP_ALPHABET}.make ('_'), 6, 6)
		end

	make_hard
		do
			create board.make_filled (create {SHIP_ALPHABET}.make ('_'), 8, 8)
		end

	make_advanced
		do
			create board.make_filled (create {SHIP_ALPHABET}.make ('_'), 12, 12)
		end

feature -- utilities

	item (row: INTEGER; col: INTEGER): SHIP_ALPHABET
			-- Entry at row 'row' and column 'column'.
		do
			Result := board.item (row, col)
		end


feature -- output

	out: STRING
			-- Return string representation of current game.
			-- You may reuse this routine.
		local
			fi: FORMAT_INTEGER
		do
			create fi.make (2)
			create Result.make_from_string ("%N   ")
			across 1 |..| board.width as i loop Result.append(" " + fi.formatted (i.item)) end
			across 1 |..| board.width as i loop
				Result.append("%N  "+ row_indices[i.item].out)
				across 1 |..| board.height as j loop
					Result.append ("  " + board[i.item,j.item].out)
				end
			end

		end

end
