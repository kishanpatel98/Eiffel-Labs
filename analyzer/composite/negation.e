note
	description: "Summary description for {NEGATION}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	NEGATION

inherit
	UNARY_EXPRESSION

create
	make

feature -- Command for accepting a visitor
	accept (v: VISITOR)
		do
			v.visit_negation (Current)
		end

end
