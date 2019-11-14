note
	description: "Summary description for {GREATER_THAN_OR_EQUALS}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	GREATER_THAN_OR_EQUALS

inherit
	BINARY_EXPRESSION

create
	make

feature -- Command for accepting a visitor
	accept (v: VISITOR)
		do
			v.visit_greater_than_or_equals (Current)
		end

end
