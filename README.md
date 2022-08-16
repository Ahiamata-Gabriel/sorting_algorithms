# sorting algoriths

```bash
pseudocode for bubble sort
procedure bubblesort(list, size)
    for (length of the list)
        set swap flag
        if (current element > next element)
            swap elements;
 
    swap (address element1 & element 2)
        element1 = xor bitwise element1 and element2
        element2 = xor bitwise element1 and element2
        element1 = xor bitwise element1 and element2
```

```bash
pseudocode for shellsort
# Sort an array a[0...n-1].
gaps = [701, 301, 132, 57, 23, 10, 4, 1]  // Ciura gap sequence

# Start with the largest gap and work down to a gap of 1
# similar to insertion sort but instead of 1, gap is being used in each step
foreach (gap in gaps)
{
    # Do a gapped insertion sort for every elements in gaps
    # Each loop leaves a[0..gap-1] in gapped order
      for (i = gap; i < n; i += 1)
      {
          # save a[i] in temp and make a hole at position i
          temp = a[i]
          # shift earlier gap-sorted elements up until the correct location for a[i] is found
          for (j = i; (j >= gap) && (a[j - gap] > temp); j -= gap)
          {
              a[j] = a[j - gap]
          }
          # put temp (the original a[i]) in its correct location
          a[j] = temp
       }
}
```

``` Merge sort
function merge_sort(list m) is
    // Base case. A list of zero or one elements is sorted, by definition.
    if length of m ≤ 1 then
        return m

    // Recursive case. First, divide the list into equal-sized sublists
    // consisting of the first half and second half of the list.
    // This assumes lists start at index 0.
    var left := empty list
    var right := empty list
    for each x with index i in m do
        if i < (length of m)/2 then
            add x to left
        else
            add x to right

    // Recursively sort both sublists.
    left := merge_sort(left)
    right := merge_sort(right)

    // Then merge the now-sorted sublists.
    return merge(left, right)

function merge(left, right) is
    var result := empty list

    while left is not empty and right is not empty do
        if first(left) ≤ first(right) then
            append first(left) to result
            left := rest(left)
        else
            append first(right) to result
            right := rest(right)

    // Either left or right may have elements left; consume them.
    // (Only one of the following loops will actually be entered.)
    while left is not empty do
        append first(left) to result
        left := rest(left)
    while right is not empty do
        append first(right) to result
        right := rest(right)
    return result

```