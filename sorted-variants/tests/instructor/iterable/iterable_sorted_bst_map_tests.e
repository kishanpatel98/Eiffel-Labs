note
	description: "Testing iterable sorted BST map."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ITERABLE_SORTED_BST_MAP_TESTS

inherit
	ITERABLE_SORTED_MAP_TESTS

create
	make

feature -- Query
	new_map: SORTED_BST_MAP[INTEGER, STRING]
			-- A new sorted bst map
		do
			create Result.make_empty
		end
end
