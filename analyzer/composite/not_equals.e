note
	description: "Summary description for {NOT_EQUALS}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	NOT_EQUALS

inherit
	BINARY_EXPRESSION

create
	make

feature -- Command for accepting a visitor
	accept (v: VISITOR)
		do
			v.visit_not_equals (Current)
		end

end
