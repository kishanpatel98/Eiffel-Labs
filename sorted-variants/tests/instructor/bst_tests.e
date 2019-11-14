note
	description: "Summary description for {BST_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BST_TESTS

inherit
	INT_KEY_TESTS
		rename
			make as i_make
		redefine
			setup
		end
	P_KEY_TESTS
		rename
			map as p_map,
			make_from_sorted_map as p_make_from_sorted_map,
			make_from_array as p_make_from_array,
			make as p_make
		redefine
			setup
		end

create
	make

feature  -- setup

	make
		do
			i_make
			p_make 
		end

	setup
		do
			create map.make_empty
			create p_map.make_empty
			create pr_map.make_empty
		end

feature  -- int key tests

	map: SORTED_BST_MAP[INTEGER, PERSON]
		attribute
			create Result.make_empty
		end

	make_from_sorted_map(a_map: like map): like map
		do
			create Result.make_from_sorted_map(a_map)
		end

	make_from_array(a_arr: like map.as_array): like map
		do
			create Result.make_from_array(a_arr)
		end

feature -- p key tests

	p_map: SORTED_BST_MAP[PERSON, STRING]
		attribute
			create Result.make_empty
		end

	p_make_from_sorted_map(a_map: like p_map): like p_map
		do
			create Result.make_from_sorted_map(a_map)
		end

	p_make_from_array(a_arr: like p_map.as_array): like p_map
		do
			create Result.make_from_array(a_arr)
		end

feature -- precondition tests

	pr_map: SORTED_BST_MAP[INTEGER, INTEGER]
		attribute
			create Result.make_empty
		end

	pr_make_from_sorted_map(a_map: like pr_map): like pr_map
		do
			create Result.make_from_sorted_map(a_map)
		end

	pr_make_from_array(a_arr: like pr_map.as_array): like pr_map
		do
			create Result.make_from_array(a_arr)
		end

end
