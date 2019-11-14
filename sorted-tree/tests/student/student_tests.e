note
	description: "[
		Summary description for {STUDENT_TESTS}.
		To Do: Students must write thier own tests in this class
		]"
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

			n1,n2,n3 : BASIC_NODE[INTEGER,STRING]
			a_tree : SORTED_BST[INTEGER,STRING]
		do
			comment("t1: Check root of tree")

			create a_tree.make_empty
			create n1.make (12, "Kishan Patel")
			create n2.make (50, "Bob Marley")
			create n3.make (100, "Donald Trump")

			a_tree.extend (n1.item)
			a_tree.extend (n2.item)
			a_tree.extend (n3.item)
			Result := true
		end

	t2: BOOLEAN

		local
			a_tree: SORTED_TREE_ADT[INTEGER,STRING]
			a_node: NODE[INTEGER, STRING]
		do
			comment("t2: Check Kishan Patel number")

			create a_node.make (12,"Kishan Patel")

			Result := a_node.value ~ "Kishan Patel"
		end

	t3: BOOLEAN
		local
			a_tree: SORTED_TREE_ADT[INTEGER,STRING]
			a_node: NODE[INTEGER, STRING]
		do
			comment("t3: Check Bob Marley number")

			create a_node.make (50,"Bob Marley")

			Result := a_node.value ~ "Bob Marley"
		end

	t4: BOOLEAN
		local
			a_tree: SORTED_TREE_ADT[INTEGER,STRING]
			a_node: NODE[INTEGER, STRING]
		do
			comment("t4: Check Donald Trump number")

			create a_node.make (100,"Donald Trump")

			Result := a_node.value ~ "Donald Trump"
		end
end
