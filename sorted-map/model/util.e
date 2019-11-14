note
	description: "[
		This utility class contains a merge sort and
		concatenate of two arrays.
		You must complete the TO DO parts
		]"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

expanded class
	UTIL [G -> COMPARABLE]

feature -- queries


	concatenate (a: ARRAY [G]; b: ARRAY [G]): ARRAY [G]
		require
			constraints_on_lower_indices:
				-- Do not modify this precondition.
				a.lower = 1 and b.lower = 1
		local
			i: INTEGER
		do
			create Result.make_empty
			-- TO DO


			across a.lower |..| a.upper as x
			loop
				i := i + 1
				Result.force (a[x.item], i)
			end

			across b.lower |..| b.upper as y
			loop
				i := i + 1
				Result.force (b[y.item], i)
			end
		ensure
			constraint_on_lower_index:
				-- Do not modify this postcondition.
				Result.lower = 1
			correct_size:
				-- TO DO: replace False with your postcondition.
				Result.count = a.count + b.count
			correct_contents:
				-- TO DO: replace False with your postcondition.
				-- The final result must be the concatenation of
				-- the two argument arrays.
				-- Hint: You may use `across' as a universal quantifier.

				across 1 |..| (a.count) as j

				all
					Result.has (a[j.item])
				end

				across 1 |..| (b.count) as j

				all
					Result.has (b[j.item])
				end
		end

	merge (left, right: ARRAY[G]): ARRAY[G]
			-- Result is a sorted merge of `left' and `right'
		require
			left_sorted:
				-- TO DO: replace False with your precondition.
				across left.lower |..| (left.count - 1) as x

				all
					left[x.item] <= left[x.item + 1]
				end
				--left = merge_sort (left)
			right_sorted:
				-- TO DO: replace False with your precondition.
				across right.lower |..| (right.count - 1) as y

				all
					right[y.item] <= right[y.item + 1]
				end
				--right = merge_sort (right)
		local
			unchanged : BOOLEAN
			item_count : INTEGER
			temp : G
		do
			create Result.make_empty
			-- TO DO
			Result := concatenate (left, right)

			from
				item_count := Result.count
			until
				unchanged
			loop
				unchanged := True
				item_count := item_count - 1
				across 1 |..| item_count as ic
				loop
					if Result[ic.item] > Result[ic.item + 1] then
						temp := Result[ic.item]
						Result[ic.item] := Result[ic.item + 1]
						Result[ic.item + 1] := temp
						unchanged := False
					end
				end
			end
		ensure
			merge_count:
				-- TO DO: replace False with your postcondition.
				-- Hint: What is the size of Result?
				Result.count = left.count + right.count
			sorted_non_descending:
				-- TO DO: replace False with your postcondition.
				-- Hint: Result is sorted in a non-descending order.
				across Result.lower |..| (Result.upper - 1) as z

				all
					Result[z.item] <= Result[z.item + 1]
				end
			merge_contains_left_and_right:
				-- TO DO: replace False with your postcondition.
				-- Hint: The result only contains elements from `left' and `right'.
				across 1 |..| (left.count) as l_c

				all
					Result.has (left[l_c.item])
				end

				across 1 |..| (right.count) as r_c

				all
					Result.has (right[r_c.item])
				end
		end


	merge_sort(a: ARRAY[G]): ARRAY[G]
			-- reteurn a sorted version of array `a'
		local
			low, mid, high: INTEGER
			a1, a2: ARRAY[G]
		do
			create Result.make_from_array (a)
			low := a.lower
			high := a.upper
			if low < high then
				check a.count > 1 end
				mid := (low + high) // 2
				a1 := a.subarray (low, mid)
				a2 := a.subarray (mid + 1, high)
				a2.rebase (1)
				a1 := merge_sort (a1)
				a2 := merge_sort (a2)
				Result := merge (a1, a2)
			end
		ensure
			same_count:
				-- TO DO: replace False with your postcondition.
				-- Hint: What is the size of Result?
				Result.count = a.count
			sorted_non_descending:
				-- TO DO: replace False with your postcondition.
				-- Hint: Result is sorted in a non-descending order.
				across Result.lower |..| (Result.upper - 1) as r

				all
					Result[r.item] <= Result[r.item + 1]
				end
			permutation: True
				-- TO DO: replace False with your postcondition.
				-- Hint: You may want to use {ARRAY}occurrences

		end
end
