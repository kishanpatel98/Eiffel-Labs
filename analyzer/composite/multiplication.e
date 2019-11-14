note
	description: "Summary description for {MULTIPLICATION}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	MULTIPLICATION

inherit
	BINARY_EXPRESSION

create
	make

feature -- Command for accepting a visitor
	accept (v: VISITOR)
		do
			v.visit_multiplication (Current)
		end

end
