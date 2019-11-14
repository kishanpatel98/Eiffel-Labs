note
	description: "Summary description for {STUDENT_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	STUDENT_TESTS
inherit
	ES_TEST

create
	make

feature {NONE} -- Initialization

	make
			-- Initialization for `Current'.
		do
			add_boolean_case (agent t1)
			add_boolean_case (agent t2)
			add_boolean_case (agent t3)
			add_boolean_case (agent t4)
		end

feature
	t1: BOOLEAN
		do
			comment("t1: Print 10")
			Result := True
		end

	t2: BOOLEAN
		do
			comment("t2: 10.25 has numerical type")
			Result := True
		end

	t3: BOOLEAN
		do
			comment("t3: Evaluate 5.05 to 5.05")
			Result := True
		end

	t4: BOOLEAN
		do
			comment("t4: 15.05 + 10 has numerical type")
			Result := True
		end
end
