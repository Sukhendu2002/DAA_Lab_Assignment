# DAA_Lab_Assignment
4th Sem

DAY-3
Q1: 
Algorithm :  

1) Calculate the medians m1 and m2 of the input arrays ar1[] 
   and ar2[] respectively.
2) If m1 and m2 both are equal then we are done.
     return m1 (or m2)
3) If m1 is greater than m2, then median is present in one 
   of the below two subarrays.
    a)  From first element of ar1 to m1 (ar1[0...|_n/2_|])
    b)  From m2 to last element of ar2  (ar2[|_n/2_|...n-1])
4) If m2 is greater than m1, then median is present in one    
   of the below two subarrays.
   a)  From m1 to last element of ar1  (ar1[|_n/2_|...n-1])
   b)  From first element of ar2 to m2 (ar2[0...|_n/2_|])
5) Repeat the above process until size of both the subarrays 
   becomes 2.
6) If size of the two arrays is 2 then use below formula to get 
  the median.
    Median = (max(ar1[0], ar2[0]) + min(ar1[1], ar2[1]))/2
    
    
Q2: 
A simple solution for this problem is to use linear search. Element arr[i] is bitonic point if both i-1’th and i+1’th both elements are less than i’th element. Time complexity for this approach is O(n).
An efficient solution for this problem is to use modified binary search. 
 

- If arr[mid-1] < arr[mid] and arr[mid] > arr[mid+1] then we are done with bitonic point.
- If arr[mid] < arr[mid+1] then search in right sub-array, else search in left sub-array.

Q3:
Radix Sort Algorithm

radixSort(array)
  d <- maximum number of digits in the largest element
  create d buckets of size 0-9
  for i <- 0 to d
    sort the elements according to ith place digits using countingSort

countingSort(array, d)
  max <- find largest element among dth place elements
  initialize count array with all zeros
  for j <- 0 to size
    find the total count of each unique digit in dth place of elements and
    store the count at jth index in count array
  for i <- 1 to max
    find the cumulative sum and store it in count array itself
  for j <- size down to 1
    restore the elements to array
    decrease count of each element restored by 1

Q4:

Why is Quick Sort preferred for Arrays?
=>One of the main reasons for efficiency in quick sort is locality of reference, which makes it easy for the computer system to access memory locations that are near to each other, which is faster than memory locations scattered throughout the memory which is the case in merge sort.
Quick sort is an in-place sorting algorithm i.e. it does not require any extra space, whereas Merge sort requires an additional linear space, which may be quite expensive. In merge sort, the allocation and deallocation of the extra space increases the running time of the algorithm.
The most practical implementation of Quick sort uses a randomized version which has an expected time complexity of O(NlogN). Although in the randomized version the worst case is possible, but for a particular pattern (like sorted array) the worst case doesn’t occur, and therefore the randomized quick sort works well in practice.

Why is Merge Sort preferred for Linked Lists?
=>In the case of linked lists, the nodes may not be present at adjacent memory locations, therefore Merge Sort is used.
Unlike arrays, in linked lists, we can insert items in the middle in O(1) extra space and O(1) time if we are given a reference/pointer to the previous node. Therefore, we can implement the merge operation in the merge sort without using extra space.
Quick Sort requires a lot of access to different memory locations. To access ith index in a linked list, we have to travel each and every node from the head to ith node as we don’t have a continuous block of memory. Therefore, the overhead increases for quick sort. On the other hand, merge sort accesses data sequentially and the need for random access is low.
This blog tried to discuss why Quick Sort preferred for Arrays and Merge Sort for Linked Lists. If you want read more about Linked List and want to solve more questions on linked list, which are curated by our expert mentors at PrepBytes, you can follow this link Linked List.
