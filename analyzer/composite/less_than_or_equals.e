note
	description: "Summary description for {LESS_THAN_OR_EQUALS}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	LESS_THAN_OR_EQUALS

inherit
	BINARY_EXPRESSION

create
	make

feature -- Command for accepting a visitor
	accept (v: VISITOR)
		do
			v.visit_less_than_or_equals (Current)
		end

end
