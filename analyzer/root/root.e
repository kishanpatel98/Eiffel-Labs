note
	description: "gelex-calculator application root class"
	date: "$Date$"
	revision: "$Revision$"

class
	ROOT

inherit

	ES_SUITE

create
	make

feature {NONE} -- Initialization

	make
		do
			add_test (create {BASIC_TESTS}.make)
			add_test (create {STUDENT_TESTS}.make)
			show_browser
			run_espec
		end

end
