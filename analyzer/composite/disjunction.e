note
	description: "Summary description for {DISJUNCTION}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	DISJUNCTION

inherit
	BINARY_EXPRESSION

create
	make

feature -- Command for accepting a visitor
	accept (v: VISITOR)
		do
			v.visit_disjunction (Current)
		end

end
