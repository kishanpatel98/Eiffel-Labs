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
		local
			u: UTIL[INTEGER]
			a: ARRAY[INTEGER]
		do
			comment("t1: Merge empty array")
			create a.make_empty
			Result := u.merge_sort (a).is_empty
			check Result end
		end

	t2: BOOLEAN
		local
			u: UTIL[INTEGER]
			merge_array1, merge_array2, expected: ARRAY[INTEGER]
		do
			comment("t2: Merge Test")
			create merge_array1.make_empty
			create merge_array2.make_empty
			create expected.make_empty

			merge_array1.force (1, 1)
			merge_array1.force (2, 2)
			merge_array1.force (5, 3)

			merge_array2.force (3, 1)
			merge_array2.force (4, 2)
			merge_array2.force (6, 3)

			expected.force (1, 1)
			expected.force (2, 2)
			expected.force (3, 3)
			expected.force (4, 4)
			expected.force (5, 5)
			expected.force (6, 6)

			merge_array1 := u.merge_sort (merge_array1)
			merge_array2 := u.merge_sort (merge_array2)

			Result := expected ~ u.merge (merge_array1, merge_array2)
		end

	t3: BOOLEAN
		do
			comment("t3: Stored key test")
			Result := True
		end

	t4: BOOLEAN
		do
			comment("t4: Replace value test")
			Result := True
		end
end
