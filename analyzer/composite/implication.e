note
	description: "Summary description for {IMPLICATION}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	IMPLICATION

inherit
	BINARY_EXPRESSION

create
	make

feature -- Command for accepting a visitor
	accept (v: VISITOR)
		do
			v.visit_implication (Current)
		end

end
