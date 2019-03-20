								     Lab 3 README



**BUGS AND CHANGE LOGS**
- Both programs compiled correctly and no bugs are found as of the current date above.

Questions:

1. A brief summary of what you accomplished and what (if any) parts you did not complete or bugs that you are aware of but have not fixed.
2. Analysis (including equations for number of moves, swaps and compares as a function of n) for the best-, average- and worst-case behaviors 
   of InsertionSort and MergeSort,

Answers: 

1. Both the insertionSort and mergeSort code were accomplished using the functions "mySwap", "myCompare" and "myCopy" from the metrics.c file. 

   InsertionSort starts with the second element of the array being checked and compares 
   it to every element with a lower index in the arrray. If a number is smaller than the number of the previous index, then a swap will be performed 

   As for mergeSort, it divides the elements into two, after which it sorts each half and merges them back together. In order to do this, a recursive
   function "mySort" was made so that it divides the array into halves for each recursive level until there was only one element left, and then the 
   "merge" function would sort the elements and then merge them together for each level. 

2.

Insertion Sort:

	Best Case: O(n): Occurs when the array is already sorted to begin with
		Number of Comparisons: n-1
		Number of Swaps: 0
		Number of Copies: 2n-2

	Worst Case: O(n^2): This occurs when the array is sorted in reverse order 
		Number of Comparisons: n(n-1)/2
		Number of Swaps: n(n-1)/2
		Number of Copies: 2n-2

	Average Case: O(n^2): (best-case + worst-case)/2
		Number of Comparisons: (n-1+n(n-1)/2)/2
		Number of Swaps: n(n-1)/2
		Number of Copies: 2n-2



Merge Sort:

	Best Case: O(nlogn): It would occur when there is only one number. There will be no need to divide, sort and compare
		
	Worst Case: O(nlogn): Occurs when the maximum number of comparisons occur		

	Average Case: O(nlogn): The average case for merge sort has the same complexity as the worst  case
		
