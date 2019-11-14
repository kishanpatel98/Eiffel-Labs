note
	description: "Testing sorted RBT map"
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ITERABLE_SORTED_RBT_MAP_TESTS

inherit
	ITERABLE_SORTED_MAP_TESTS

create
	make

feature -- Query
	new_map: SORTED_RBT_MAP[INTEGER, STRING]
			-- A new sorted RBT map
		do
			create Result.make_empty
		end
end
