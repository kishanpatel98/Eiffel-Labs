note
	description: "Summary description for {INTEGER_CONSTANT}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	VALUE_CONSTANT

inherit
	EXPRESSION

create
	make

feature -- Constructor
	make (v: REAL_64)
		do
			value := v
		end

feature -- Attributes
	value: REAL_64

feature -- Command for accepting a visitor
	accept (v: VISITOR)
		do
			v.visit_value_constant (Current)
		end

end
