note
	description: "Summary description for {P_KEY_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	P_KEY_TESTS

inherit
	ES_TEST

feature  -- types

	map: SORTED_MAP_ADT[PERSON, STRING]
		deferred
		end

	make_from_sorted_map(a_map: like map): like map
		deferred
		end

	make_from_array(a_arr: like map.as_array): like map
		deferred
		end

feature -- creation

	make
		do
			add_boolean_case (agent t50)
			add_boolean_case (agent t51)
			add_boolean_case (agent t52)
			add_boolean_case (agent t53)
			add_boolean_case (agent t54)
			add_boolean_case (agent t55)
			add_boolean_case (agent t56)
			add_boolean_case (agent t57)
			add_boolean_case (agent t58)
			add_boolean_case (agent t59)
			add_boolean_case (agent t60)
			add_boolean_case (agent t61)
			add_boolean_case (agent t62)
			add_boolean_case (agent t63)
			add_boolean_case (agent t64)
			add_boolean_case (agent t65)
			add_boolean_case (agent t66)
			add_boolean_case (agent t67)
		end

feature  -- tests

	t50: BOOLEAN
		do
			comment("t50: extend int/person")
			map.extend (4, "a")
			Result := map.out ~ "(4,a)"
			check Result end
			map.extend (1, "aa")
			Result := map.out ~ "(1,aa)(4,a)"
			check Result end
			map.extend (2, "aaa")
			Result := map.out ~ "(1,aa)(2,aaa)(4,a)"
			check Result end
			map.extend (-10, "aaaa")
			Result := map.out ~ "(-10,aaaa)(1,aa)(2,aaa)(4,a)"
			check Result end
		end

	t51: BOOLEAN
		do
			comment("t51: replace_value")
			map.extend (4, "a")
			Result := map[4] ~ "a"
			check Result end
			map.replace (4, "b")
			Result := map[4] ~ "b"
			check Result end
		end

	t52: BOOLEAN
		do
			comment("t52: remove key")
			map.extend (4, "a")
			map.extend (7, "b")
			map.extend (2, "c")
			Result := map.out ~ "(2,c)(4,a)(7,b)"
			check Result end
			map.remove(4)
			Result := map.out ~ "(2,c)(7,b)"
			check Result end
			map.remove (2)
			map.remove (7)
			Result := map.out ~ ""
			check Result end
		end

	t53: BOOLEAN
		do
			comment("t53: prune")
			map.extend (2, "a")
			map.extend (4, "a")
			map.extend (-2, "a")
			map.extend (7, "b")
			Result := map.out ~ "(-2,a)(2,a)(4,a)(7,b)"
			check Result end
			map.prune_tolerant ("a", 2)
			Result := map.out ~ "(-2,a)(4,a)(7,b)"
			check Result end
			map.prune_tolerant ("a", 2)
			Result := map.out ~ "(-2,a)(7,b)"
			check Result end
			map.prune_tolerant ("a", 2)
			Result := map.out ~ "(-2,a)(7,b)"
			check Result end
			map.prune_tolerant ("a", 1)
			Result := map.out ~ "(7,b)"
			check Result end
			map.prune_tolerant ("b", 1)
			Result := map.out ~ ""
		end

	t54: BOOLEAN
		do
			comment("t54: prune_all")
			map.extend (2, "a")
			map.extend (4, "a")
			map.extend (-2, "a")
			map.extend (7, "b")
			Result := map.out ~ "(-2,a)(2,a)(4,a)(7,b)"
			check Result end
			map.prune_all ("a")
			Result := map.out ~ "(7,b)"
			check Result end
		end

	t55: BOOLEAN
		do
			comment("t55: wipe_out")
			map.extend (2, "a")
			map.extend (4, "a")
			map.extend (-2, "a")
			map.extend (7, "b")
			Result := map.out ~ "(-2,a)(2,a)(4,a)(7,b)"
			check Result end
			map.wipe_out
			Result := map.out ~ ""
			check Result end
		end

	t56: BOOLEAN
		do
			comment("t56: replace_key")
			map.extend (4, "a")
			map.extend (5, "b")
			Result := map[4] ~ "a"
			check Result end
			map.replace_key (4, 7)
			Result := map[7] ~ "a"
			check Result end
			Result := map.out ~ "(5,b)(7,a)"
			check Result end
		end

	t57: BOOLEAN
		local
			sub_map: like map
		do
			comment("t57: sub_map")
			map.extend (2, "a")
			map.extend (-1, "b")
			map.extend (5, "c")
			map.extend (1, "d")
			map.extend (-4, "e")
			map.extend (0, "f")
			sub_map := map.sub_map (0, 2)
			Result := sub_map.out ~ "(0,f)(1,d)"
			check Result end
			Result := map /~ sub_map
			check Result end
			sub_map := map.sub_map (-1, 0)
			Result := sub_map.out ~ "(-1,b)(-4,e)"
			check Result end
			sub_map := map.sub_map (-1, 7)
			Result := map ~ sub_map
			check Result end
		end

	t58: BOOLEAN
		do
			comment("t58: min/max")
			map.extend (2, "a")
			map.extend (-1, "b")
			map.extend (5, "c")
			map.extend (1, "d")
			map.extend (-4, "e")
			map.extend (0, "f")
			Result := map.min.key ~ -1
			check Result end
			Result := map.min.val ~ "b"
			check Result end
			Result := map.max.key ~ 5
			check Result end
			Result := map.max.val ~ "c"
			check Result end
		end

	t59: BOOLEAN
		local
			l_list: ARRAY[TUPLE[key: INTEGER; val: STRING]]
		do
			comment("t59: sorted_keys, values and as_array")
			map.extend (2, "a")
			map.extend (-1, "b")
			map.extend (5, "c")
			map.extend (1, "d")
			map.extend (-4, "e")
			map.extend (0, "f")
			l_list := << [-1, "b"], [-4, "e"], [0, "f"], [1, "d"], [2, "a"], [5, "c"]>>
			Result :=
				across l_list as list all
					list.item.key ~ map.sorted_keys[list.cursor_index] and
					list.item.key ~ map.as_array[list.cursor_index].key and
					list.item.val ~ map.values[list.cursor_index] and
					list.item.val ~ map.as_array[list.cursor_index].value
				end
			check Result end
		end

	t60: BOOLEAN
		local
			p: PERSON
		do
			comment("t60: test alias and assign")
			p := 2
			map.extend (2, "4")
			Result := map[p] ~ "4"
			check Result end
			map[p] := "6"
			Result := map[2] ~ "6"
			check Result end
			p := 1
			map[p] := "7"
			Result := map[1] ~ "7"
			check Result end
			Result := map.out ~ "(1,7)(2,6)"
			check Result end
		end

	t61: BOOLEAN
		local
			l_copy: like map
		do
			comment("t61: test make from map")
			map.extend (2, "a")
			map.extend (-1, "b")
			map.extend (5, "c")
			map.extend (1, "d")
			map.extend (-4, "e")
			map.extend (0, "f")
			l_copy := make_from_sorted_map(map)
			Result := l_copy ~ map
			check Result end
			Result := l_copy /= map
			check Result end
		end

	t62: BOOLEAN
		local
			l_copy: like map
		do
			comment("t62: test make from array")
			map.extend (2, "a")
			map.extend (-1, "b")
			map.extend (5, "c")
			map.extend (1, "d")
			map.extend (-4, "e")
			map.extend (0, "f")
			l_copy := make_from_array (map.as_array)
			Result := l_copy ~ map
			check Result end
			Result := l_copy /= map
			check Result end
		end

	t63: BOOLEAN
		do
			comment("t63: losts of insertions/removals(invariant testing)")
			map.extend (0, "-10")
			map.extend (1, "9")
			map.extend (2, "13")
			map.extend (3, "11")
			map.extend (4, "0")
			map.extend (5, "-5")
			map.extend (6, "6")
			map.extend (7, "11")
			map.extend (8, "7")
			map.extend (9, "17")
			map.remove (5)
			map.remove (1)
			map.remove (6)
			map.remove (9)
			map.remove (8)
			map.remove (2)
			map.remove (3)
			map.extend (3, "5")
			map.extend (6, "2")
			map.extend (5, "7")
			map.remove (5)
			map.remove (3)
			map.extend (2, "17")
			map.extend (10, "5")
			map.remove (4)
			map.remove (2)
			map.remove (6)
			map.remove (10)
			map.remove (0)
			map.remove (7)
			result := map.out ~ ""
			check Result end
		end

	t64: BOOLEAN
		do
			comment("t64: element count")
			Result := map.count = 0
			check Result end
			map.extend (2, "-5")
			Result := map.count = 1
			check Result end
			map.extend (-1, "13")
			map.extend (5, "7")
			map.extend (1, "0")
			Result := map.count = 4
			check Result end
			map.extend (-4, "-10")
			map.extend (0, "11")
			Result := map.count = 6
			check Result end
			map.remove (2)
			map.remove (5)
			Result := map.count = 4
			check Result end
			map.replace_key (0, 7)
			Result := map.count = 4
			check Result end
			map.replace (7, "9")
			Result := map.count = 4
			check Result end
			map.wipe_out
			Result := map.is_empty
			check Result end
		end

	t65: BOOLEAN
		do
			comment("t65: test has and has_value function")
			map.extend (4, "7")
			map.extend (1, "13")
			map.extend (2, "7")
			map.extend (-10, "0")
			Result := map.has (4)
			check Result end
			map.replace_key (4, 3)
			Result := not map.has (4)
			check Result end
			Result := map.has (2)
			check Result end
			Result := not map.has (9)
			check Result end
			Result := map.has_value ("7")
			check Result end
			Result := map.has_value ("0")
			check result end
			map.remove (-10)
			Result := not map.has_value ("0")
			check Result end
		end

	t66: BOOLEAN
		do
			comment("t66: test element function")
			map.extend (4, "7")
			map.extend (1, "13")
			map.extend (2, "7")
			map.extend (-10, "0")
			if attached map.element (4) as el then
				Result := el.key ~ 4 and el.val ~ "7"
				check Result end
			end
			if attached map.element (1) as el then
				Result := el.key ~ 1 and el.val ~ "13"
				check Result end
			end
			Result := map.element (9) ~ void
			check Result end
		end

	t67: BOOLEAN
		local
			other: like map
		do
			comment("t67: test merge")
			other := map.deep_twin
			other.extend(2,"-5")
			other.extend(4, "13")
			other.extend(6,"7")
			other.extend(8,"0")
			other.extend(10,"-10")
			other.extend(12,"11")
			map.extend (1,"-5")
			map.extend (3,"13")
			map.extend (5, "7")
			map.extend (7, "0")
			map.extend (9, "-10")
			map.extend (11, "11")
			map.merge(other)
			other.extend (1,"-5")
			other.extend (3,"13")
			other.extend (5, "7")
			other.extend (7, "0")
			other.extend (9, "-10")
			other.extend (11, "11")
			Result := map ~ other
			check Result end
			Result := map /= other
			check Result end
		end

end
