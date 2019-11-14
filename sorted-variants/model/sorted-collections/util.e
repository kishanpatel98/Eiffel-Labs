note
	description: "Summary description for {UTIL}."
	author: "JSO"
	date: "$Date$"
	revision: "$Revision$"

expanded class
	UTIL [G -> COMPARABLE]

feature {NONE} --Implementation

	is_sorted (list: ARRAY [G]): BOOLEAN
		require
			not_void: list /= Void
		local
			i: INTEGER
		do
			Result := True
			from
				i := list.lower + 1
			invariant
				i >= list.lower + 1 and i <= list.upper + 1
			until
				i > list.upper
			loop
				Result := Result and list [i - 1] <= list [i]
				i := i + 1
			variant
				list.upper + 1 - i
			end
		end

	concatenate_array (a: ARRAY [G] b: ARRAY [G]): ARRAY [G]
		require
			not_void: a /= Void and b /= Void
		do
			create Result.make_from_array (a)
			across
				b as t
			loop
				Result.force (t.item, Result.upper + 1)
			end
		ensure
			same_size: a.count + b.count = Result.count
		end

	quicksort_array (list: ARRAY [G]): ARRAY [G]
		require
			not_void: list /= Void
		local
			less_a: ARRAY [G]
			equal_a: ARRAY [G]
			more_a: ARRAY [G]
			pivot: G
		do
			create less_a.make_empty
			create more_a.make_empty
			create equal_a.make_empty
			create Result.make_empty
			if list.count <= 1 then
				Result := list
			else
				pivot := list [list.lower]
				across
					list as li
				invariant
					less_a.count + equal_a.count + more_a.count <= list.count
				loop
					if li.item < pivot then
						less_a.force (li.item, less_a.upper + 1)
					elseif li.item ~ pivot then
						equal_a.force (li.item, equal_a.upper + 1)
					elseif li.item > pivot then
						more_a.force (li.item, more_a.upper + 1)
					end
				end
				Result := concatenate_array (Result, quicksort_array (less_a))
				Result := concatenate_array (Result, equal_a)
				Result := concatenate_array (Result, quicksort_array (more_a))
			end
		ensure
			same_size: list.count = Result.count
			sorted: is_sorted (Result) 
		end

	merge_array (list: ARRAY [G]; low, mid, high: INTEGER): ARRAY[G]
			-- helper method used by merge_sort or to sort two sorted lists
		local
			i, j, k, l: INTEGER
		do
			i := low
			j := mid + 1
			create Result.make_from_array (list.twin)
			from
				k := low
			until
				i > mid or j > high
			loop
				if list [i] < list [j] then
					Result [k] := list [i]
					i := i + 1
				else
					Result [k] := list [j]
					j := j + 1
				end
				k := k + 1
			end
			if i > mid then
				from
					l := j
				until
					l > high
				loop
					Result [k + l - j] := list [l]
					l := l + 1
				end
			else
				from
					l := i
				until
					l > mid
				loop
					Result [k + l - i] := list [l]
					l := l + 1
				end
			end
		ensure
			items_strictly_increasing: strictly_increasing (Result)
			same_size: list.count = Result.count
		end

	remove_from_array(list: ARRAY[G]; i: INTEGER): ARRAY[G]
		do
			create Result.make_empty
			across list as l loop
				if l.cursor_index /~ i then
					Result.force (l.item, Result.upper + 1)
				end
			end
		ensure
			item_removed:
				across concatenate (list.subarray (list.lower, i - 1), list.subarray (i + 1, list.upper)) as l_c all
					l_c.item ~ Result[l_c.cursor_index]
				end
		end

	mergesort_helper (list: ARRAY[G]): ARRAY[G]
			-- helper method to sort a list
		local
			low, mid, high: INTEGER
			a1, a2: ARRAY[G]
		do
			create Result.make_from_array (list)
			low := list.lower
			high := list.upper
			if low < high then
				mid := (low + high) // 2
				a1 := list.subarray (low, mid)
				a2 := list.subarray (mid + 1, high)
				a2.rebase (1)
				a1 := mergesort_helper (a1)
				a2 := mergesort_helper (a2)
				Result := merge (a1, a2)
			end
		end

feature -- Initialization

	quicksort (a: ARRAY [G]): ARRAY [G]
		do
			Result := quicksort_array (a)
		end

	concatenate(a1, a2: ARRAY[G]): ARRAY[G]
		do
			Result := concatenate_array (a1, a2)
		end

	merge (a1, a2: ARRAY[G]): ARRAY[G]
		local
			concat: ARRAY[G]
		do
			concat := concatenate_array (a1, a2)
			Result := merge_array(concat, concat.lower, a1.count, concat.upper)
		end

	mergesort(a: ARRAY[G]): ARRAY[G]
		do
			Result := mergesort_helper (a)
		end

	remove(arr: ARRAY[G]; i: INTEGER): ARRAY[G]
		do
			Result := remove_from_array(arr, i)
		end

	strictly_increasing(arr: ARRAY[G]): BOOLEAN
		do
			Result :=
				across 1 |..| (arr.count - 1) as i all
					arr[i.item] < arr[i.item + 1]
				end
		end

end
