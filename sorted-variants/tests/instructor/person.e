note
	description: "Summary description for {PERSON}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PERSON

inherit
	COMPARABLE
		redefine out, is_equal end

create
	make, make_from_int

convert
	make ({STRING}),
	make_from_int({INTEGER})

feature {NONE} -- Initialization

	make(a_name: STRING)
			-- Initialization for `Current'.
		do
			name := a_name
		end

	make_from_int(a_name: INTEGER)
			-- Initialization for `Current'.
		do
			name := a_name.out
		end

feature

	name: STRING

	is_less alias "<"(other: like current): BOOLEAN
		do
			Result := name < other.name
		end

	is_equal (other: like current): BOOLEAN
		do
			Result := name ~ other.name
		end

	set_name (a_name: STRING)
			-- Change name to `a_name'.
		do
			name := a_name
		end

feature

	out: STRING
		do
			Result := name
		end

end
