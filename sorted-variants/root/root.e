note
	description: "Calendar application root class"
	date: "$Date$"
	revision: "$Revision$"

class
	ROOT

inherit
	ARGUMENTS
	ES_SUITE

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		do
			add_test (create {STUDENT_TESTS}.make)
			add_test (create {ITERABLE_SORTED_MODEL_MAP_TESTS}.make)
			add_test (create {MODEL_TESTS}.make)
			add_test (create {STUDENT_DESIGN_TESTS}.make)
			add_test (create {BST_TESTS}.make)
			add_test (create {RBT_TESTS}.make)
			add_test (create {LINEAR_TESTS}.make)
			add_test (create {ITERABLE_SORTED_BST_MAP_TESTS}.make)
			add_test (create {ITERABLE_SORTED_RBT_MAP_TESTS}.make)
			add_test (create {ITERABLE_SORTED_LINEAR_MAP_TESTS}.make)
			show_browser
			run_espec
		end
end
