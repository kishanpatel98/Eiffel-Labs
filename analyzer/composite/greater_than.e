note
	description: "Summary description for {GREATER_THAN}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	GREATER_THAN

inherit
	BINARY_EXPRESSION

create
	make

feature -- Command for accepting a visitor
	accept (v: VISITOR)
		do
			v.visit_greater_than (Current)
		end

end
