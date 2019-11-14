note
	description: "Summary description for {DIVISION}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	DIVISION

inherit
	BINARY_EXPRESSION

create
	make

feature -- Command for accepting a visitor
	accept (v: VISITOR)
		do
			v.visit_division (Current)
		end

end
