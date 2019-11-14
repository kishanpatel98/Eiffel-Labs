note
	description: "Summary description for {NUMERICAL_VALUE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NUMERICAL_VALUE

inherit
	EXPRESSION_VALUE

create
	make

feature -- Constructor
	make (v: REAL_64)
		do
			value := v
		end

feature -- Status
	value: REAL_64

end
