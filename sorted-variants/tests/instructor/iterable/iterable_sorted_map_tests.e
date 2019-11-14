note
	description: "Testing sorted map"
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ITERABLE_SORTED_MAP_TESTS

inherit
	ES_TEST

feature -- add tests
	make
		do
			add_boolean_case (agent test_iterable_map)
			add_boolean_case (agent test_iteration_cursor)
		end

feature -- Query
	new_map: SORTED_MAP_ADT[INTEGER, STRING]
			-- A new sorted map
		deferred
		end


feature -- Tests

	test_iterable_map: BOOLEAN
		local
			m: SORTED_MAP_ADT[INTEGER, STRING]
			tuples: LINKED_LIST[TUPLE [k: INTEGER; v: STRING]]
		do
			comment ("test_iterable_map: test iterating through map")
			m := new_map
			m.extend (3, "three")
			m.extend (1, "one")
			m.extend (4, "four")
			m.extend (2, "two")
			create tuples.make
			across
				m as map_cursor
			loop
				tuples.extend (map_cursor.item)
			end

			Result :=
					tuples.count = 4
				and	tuples[1].k = 1 and tuples[1].v ~ "one"
				and	tuples[2].k = 2 and tuples[2].v ~ "two"
				and	tuples[3].k = 3 and tuples[3].v ~ "three"
				and	tuples[4].k = 4 and tuples[4].v ~ "four"
		end

	test_iteration_cursor: BOOLEAN
		local
			m: SORTED_MAP_ADT[INTEGER, STRING]
			ic: SORTED_MAP_CURSOR[INTEGER, STRING]
			tuples: LINKED_LIST[TUPLE [k: INTEGER; v: STRING]]
		do
			comment ("test_iteration_cursor: test iterating through map cursor")
			m := new_map
			m.extend (3, "three")
			m.extend (1, "one")
			m.extend (4, "four")
			m.extend (2, "two")

			create tuples.make
			from
				ic := m.new_cursor
			until
				ic.after
			loop
				tuples.extend (ic.item)
				ic.forth
			end

			Result :=
					tuples.count = 4
				and	tuples[1].k = 1 and tuples[1].v ~ "one"
				and	tuples[2].k = 2 and tuples[2].v ~ "two"
				and	tuples[3].k = 3 and tuples[3].v ~ "three"
				and	tuples[4].k = 4 and tuples[4].v ~ "four"
		end

end
