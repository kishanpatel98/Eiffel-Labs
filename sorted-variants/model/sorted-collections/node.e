	note
	description: "[
		{NODE} is a comparable item that can be used to convert 
		a regular sorted tree into a search tree.
	]"
	author: "JP, JSO"
	date: "May 16th, 2018"
	revision: "1"

class
	NODE[K -> COMPARABLE, V -> ANY]

inherit
	KV_PAIR[K,V]

create
	make_from_tuple,
	make_black

convert
	make_from_tuple ({TUPLE[K, V]}),
	as_tuple: {TUPLE[K,V]}

feature -- parameters

	left: detachable NODE [K, V] assign set_left
			-- pointer to left child

	right: detachable NODE [K, V] assign set_right
			-- pointer to right child

	parent: detachable NODE [K, V] assign set_parent
			-- pointer to parent

	colour: INTEGER
			-- colour of the node used in a RB tree
			-- 0 is red, 1 is black, 2 is double black
			-- defaults to red

feature{NONE} -- create

	make_black(a_item: TUPLE[K,V])
			-- creates a detached node with `a_item' as its element
			-- node has colour set to black
		do
			make_from_tuple(a_item)
			set_black
		end

feature -- queries


	is_black: BOOLEAN
			-- returns whether a node is black or not
		do
			Result := colour = 1
		end

	is_red: BOOLEAN
			-- returns whether a node is red or not

		do
			Result := colour = 0
		end

	is_double_black: BOOLEAN
			-- returns whether a node is double black or not
		do
			Result := colour = 2
		end

	is_leaf: BOOLEAN
			-- returns whether a node is a leaf or not
		do
			Result := not (attached left or else attached right)
		ensure
			is_leaf: Result = ((not attached left) and then (not attached right))
		end

feature --commands

	set_left (a_node: detachable NODE [K,V])
			-- updates left child to `a_node'
			-- updates left child's parent to `current' if attached
		do
			left := a_node
			if attached left as l then
				l.parent := Current
			end
		ensure
			node_set: left = a_node
			child_has_correct_parent:
				attached left as l implies l.parent = Current
		end

	set_right (a_node: detachable NODE [K,V])
			-- updates right child to `a_node'
			-- updates right child's parent to `current' if attached
		do
			right := a_node
			if attached right as r then
				r.parent := Current
			end
		ensure
			node_set: right = a_node
			child_has_correct_parent:
				attached right as r implies r.parent = Current
		end

	set_parent (a_node: detachable NODE [K,V])
			-- updates parent to `a_node'
		do
			parent := a_node
		end

	set_node(a_node: detachable NODE[K, V])
			-- updates `Current' node to `a_node'
		do
			if attached parent as p then
				if p.item.key > key then
					p.left := a_node
				else
					p.right := a_node
				end
			end
		end


	replace_node(a_node: NODE[K,V])
			-- replaces content of node with that of `a_node'
			-- updates pointers to left and right
			-- will update pointers to parent of children to `Current'
		do
			item := a_node.item
			Current.right := a_node.right
			Current.left := a_node.left
		end

	set_black
			-- sets colour to black
		do
			colour := 1
		end

	set_red
			-- sets colour to red
		do
			colour := 0
		end

	set_double_black
			-- sets colour to double black
		do
			colour := 2
		end

feature -- position queries

	sibling: detachable NODE[K,V]
			-- returns the sibling of Current
			-- i.e. if Current is right child of parent, sibling is left child of parent
			-- Returns nothing if child is root or has not sibling
		do
			if attached parent as p then
				if Current = p.left then
					Result := p.right
				else
					Result := p.left
				end
			end
		end

	inner_child: detachable NODE[K,V]
			-- returns the inner child of Current relative to its parent
			-- i.e. if Current is right child of parent, Result is left child of Current
			-- Returns nothing if Current is root or inner child does not exists
		do
			if attached parent as p then
				if Current = p.left then
					Result := right
				else
					Result := left
				end
			end
		end

	outer_child: detachable NODE[K,V]
			-- returns the outer child of Current relative to its parent
			-- i.e. if Current is right child of parent, Result is right child of Current
			-- Returns nothing if Current is root or outer child does not exists
		do
			if attached parent as p then
				if Current = p.left then
					Result := left
				else
					Result := right
				end
			end
		end


end
