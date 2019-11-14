note
	description: "Summary description for {STUDENT_DESIGN_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	STUDENT_DESIGN_TESTS

inherit
	ES_TEST

create
	make

feature -- add tests
	make
		do
			add_boolean_case (agent test_sorted_map_adt)
		end

feature -- tests
	test_sorted_map_adt: BOOLEAN
		local
			m: SORTED_MAP_ADT[INTEGER, STRING]
			md: SORTED_MAP_DESIGN[INTEGER, STRING]
		do
			comment("test_sorted_map_adt: test different descendants of sorted map adt")
			-- Requirement: SORTED_MODEL_MAP is a descendant of SORTED_MAP_ADT
			create {SORTED_MODEL_MAP[INTEGER, STRING]} m.make_empty
			Result := m.count = 0
			check Result end

			-- Requirement: SORTED_RBT_MAP is a descendant of SORTED_MAP_DESIGN
			create {SORTED_RBT_MAP[INTEGER, STRING]} md.make_empty
			-- Requirement: SORTED_MAP_DESIGN is a descendant of SORTED_MAP_ADT
			m := md
			Result := m.count = 0
			check Result end

			-- Requirement: SORTED_BST_MAP is a descendant of SORTED_MAP_DESIGN
			create {SORTED_BST_MAP[INTEGER, STRING]} md.make_empty
			-- Requirement: SORTED_MAP_DESIGN is a descendant of SORTED_MAP_ADT
			m := md
			Result := m.count = 0
			check Result end

			-- Requirement: SORTED_LINEAR_MAP is a descendant of SORTED_MAP_DESIGN
			create {SORTED_LINEAR_MAP[INTEGER, STRING]} md.make_empty
			-- Requirement: SORTED_MAP_DESIGN is a descendant of SORTED_MAP_ADT
			m := md
			Result := m.count = 0
		end
end
