note
	description: "Summary description for {SUBTRACTION}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	SUBTRACTION

inherit
	BINARY_EXPRESSION

create
	make

feature -- Command for accepting a visitor
	accept (v: VISITOR)
		do
			v.visit_subtraction (Current)
		end


end
