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
	local i:INTEGER
		do
 			comment("t1: Max test")
 			i:=5
			Result := True
		ensure
		Result~True
		end

	t2: BOOLEAN
	local i:INTEGER
		do
 			comment("t2: Prune test")
 			i:=5
			Result := True
		ensure
		Result~True
		end


	t3: BOOLEAN
		local i:INTEGER
		do
 			comment("t3: Element count test")
 			i:=5
			Result := True
		ensure
		Result~True
		end


	t4: BOOLEAN
	local i:INTEGER
		do
 			comment("t4: Merge test")
 			i:=5
			Result := True
		ensure
		Result~True
		end

end
