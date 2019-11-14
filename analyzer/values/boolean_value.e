note
	description: "Summary description for {BOOLEAN_VALUE}."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	BOOLEAN_VALUE

inherit
	EXPRESSION_VALUE

create
	make

feature -- Constructor
	make (v: BOOLEAN)
		do
			value := v
		end

feature -- Status
	value: BOOLEAN

end
