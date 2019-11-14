note
	description: "Summary description for {IFF}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	IFF

inherit
	BINARY_EXPRESSION

create
	make

feature -- Command for accepting a visitor
	accept (v: VISITOR)
		do
			v.visit_iff (Current)
		end

end
