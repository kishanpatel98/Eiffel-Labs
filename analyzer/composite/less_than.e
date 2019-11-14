note
	description: "Summary description for {LESS_THAN}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	LESS_THAN

inherit
	BINARY_EXPRESSION

create
	make

feature -- Command for accepting a visitor
	accept (v: VISITOR)
		do
			v.visit_less_than (Current)
		end

end
