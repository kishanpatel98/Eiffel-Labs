note
	description: "Summary description for {ADDITION}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ADDITION

inherit
	BINARY_EXPRESSION

create
	make

feature -- Command for accepting a visitor
	accept (v: VISITOR)
		do
			-- To Do
			v.visit_addition (Current)
		end

end
