# Lab 10 &mdash; Heaps

## Lab Goal
The point of this lab is for you to learn to implement heaps.

**Note: Please look at the latest version of the [slides regarding heaps](http://ee.usc.edu/~redekopp/cs102/L18_BinTreePQHeaps.pdf) as we have fixed several errors.**

#### Design Document
There is no design writeup due with this lab.

#### Grading
This lab is worth 10 points.

## Introduction
A new commit was pushed to your private lab repository. Your repo now includes a new directory named `lab10/` with the skeleton code for this lab:
  + `minheap.h` &ndash; is an abstract class definition
  + `minarrayheap.h` &ndash; is an actual implementation of a minheap. You will need to complete this file
  + `heapsort.cpp` &ndash; will create an array of random numbers and call a constructor of your `MinArrayHeap` which should make the values into a heap, push a few additional values, and then pop them all off (which should print them in sorted (ascending) order).

Examine the given code.

When you run the code you will need to provide 2 command line arguments: first, the _size/length_ of the array of data to be generated (and turned into a heap) and second a _random integer_ that will be used as a seed for the random number generation so we can reproduce the random sequences.

## Part 1 &ndash; Creating a Heap using `heapify()` (5 points)
  1. Write the `heapify()` function which creates a heap at the tree rooted at location, `loc`, provided that the left and right subtrees of `loc` are already heaps.

  1. Write the `MinArrayHeap(int*, int)` constructor. We already initialize/copy data into the `items_` vector. Your job is to create a heap out of this data (in-place... meaning by modifying the `items_` vector).  Use calls to `heapify()`.

  1. Compile and run `heapsort.cpp` and verify its operations.  Demo its operation to the TA/CP.


## Part 2 &ndash; Push Operation (3 points)
  1. Write the push operation for the `MinArrayHeap`.

  1. Add 3 pushes in `heapsort.cpp`'s `main()` after you've created the heap but before we display and pop all the values. You should push the value of `1`, `MAXVAL/2`, and `MAXVAL`;

  1. Re-compile, run and test the program (sample input and output is shown below).  

  1. Demonstrate your working code to your TA/CP.

### Sample Output
  1. `./heapsort 10 56`
```
Array contents are:
102
389
221
296
840
58
585
400
700
Heap contents as they are popped:
1
58
102
221
296
389
400
512
585
700
840
1024
```

  1. `./heapsort 15 89`
```
Array contents are:
982
954
935
130
828
712
839
274
707
521
839
901
786
417
Heap contents as they are popped:
1
130
274
417
512
521
707
712
786
828
839
839
901
935
954
982
1024
```

## Part 3 &ndash; Decrease-Key Operation (2 points)
Suppose we wanted to support a `decreaseKey(int val, int newval)` operation that finds a particular value already in the min-heap and then changes it to something smaller.  Add this as a pure virtual function to `minheap.h` and as a member function to `minarrayheap.h`.  It should have the return value and paramater list:

`bool decreaseKey(const T& val, const T& newval);`

It should search for the value, `val`, in the heap.  If the value is not present, return false.  Otherwise, change `val` to `newval` and move it to the correct location to maintain the heap (note it can only move up since the value is smaller) and then return true.  Add a few test calls in `main()` to decrease one of the keys (maybe `MAXVAL/2` or `MAXVAL`) to something smaller and demonstrate this to your TA.  Tell your TA what the big-O runtime of this operation is.
