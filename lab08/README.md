# Lab 08 &mdash; Sorting Algorithms and Run Times

## Lab Goal
Gain familiarity with using searching and sorting algorithms and the amount of CPU time that each requires. We provide you with code that does both sequential searches with both arrays and linked lists and binary search code using arrays. The functions and a test code (`main`) even give the execution times so that you can see how long it actually takes to run.

#### Design Document
There is no design writeup due with this lab.

#### Grading
This assignment is worth 10 points with 2 points of extra credit.

## Introduction
First, examine the provided code which contains a simple (non-class) linked list implementation.  Notice the populate functions simply place descending even numbers as the values inserted into the array and linked list. You are to change each of the populate functions to use `rand()` to generate random numbers between `0` and `1,000,000`.
>Note: `rand()` is prototyped in `<cstdlib>` and returns an `int` between `0` and `2.1 billion`.  Thus, you should think how to use the modulo function to get the desired range.

For the array-based list you will first populate the array with the random numbers and then sort that data using one of two possible sort algorithms to put the data in sorted order. For the linked-list approach you will insert the data in sorted order as you populate the list (putting data in the right place as you generate it so that it is sorted upon population). In addition, we've written some search algorithms and timer code to actually time how long it takes to find data in the populated lists.
>Note: Times will vary based on your execution environment (i.e. if you are on a VM, fast, or slow laptop, etc.).  You may alter the base size of the lists from the provided 50,000 to some appropriate lower or higher value so that you can see real execution times (and not just 0 time or having it take so long that it takes forever).

#### Lab 08 Code
A new commit was pushed to your private lab repository. Your repo now includes:
  + `lab08/` &ndash; new directory for this lab's code
  + `lab08/lab08.cpp` &ndash; the searching code discussion in the lab goals section

To update the local copy of your private lab repository, you would need to perform a `git pull`.
```shell
#Change directory to the home directory
#   If you have your repos somewhere else,
#   cd to that location
cd
#Change directory to your private lab repository
#   Replace ttrojan with your actual USC username
cd lab_ttrojan
#Fetch all the updates from the GitHub server to your local copy
git pull
```

## Part 0 &ndash; Open Issues in Private Lab & PA Trackers
Your private lab and programming assignments repositories host their own private issue trackers. All resolved, invalid or inactive issues **must** be closed as soon as they become so. Before grading this lab, show your TA/CP both private issue trackers and the number of open issues there.

**Open Issues**: an open issue should be left open as long as the issue is:
  + Expecting a response from **@TeachingStaff** or one of its members.
  + Represents a bug or feature you have yet to implement.
  + An open discussion that has not concluded

**Closed Issues**: a closed issue - as the name entails - is completed or no longer an issue. When a **@TeachingStaff** member visit an issue and finds it to be closed, this is a hint that their assistance is no longer needed. A closed issue should be _re-opened_ if:
  + You find the issue was closed prematurely.
  + You want open a dialog about this issue with a **@TeachingStaff** member.

## Part 1 &ndash; Insertion Sort (3 points)
Write the **insertion-sorted** linked-list population function. Recall, as you generate a random number put it in the correct, sorted location based on the data in the list thus far.

## Part 2 &ndash; Selection Sort (3 points)
Write the array list population function to populate the data with the random number described above. Perform a **selection sort** on the data by writing a selection sort algorithm in a function. [Note: the array is global and its length a constant so those do not need to be passed as arguments]. Call that function after you populate the array.  After the timer code displays the execution time of your sort, write a simple loop to check that data in your array is in sorted order, printing a message if it finds anything out of order.

Run the code and note the times.

## Part 3 &ndash; Merge Sort (4 points)
Write a **Mergesort** function. You can replace your call to selection sort in `main()` with the call to `mergesort()`. Recall that Mergesort cannot sort in-place but requires a second array or storage buffer.

Rerun your code using merge sort and note the times.

>Note: The algorithm and code for both Selection and Merge Sort are in your book.

## Extra Credit &ndash; Execution Time vs. Big-Oh (2 points)
Check the running times for your two sort algorithms for different size lists - 10,000 items, 20,000 items, 30,000 items, 40,000 items and 50,000 items. Draw a graph, to see how the run times change. Does it match your basic intuition based on the big-Oh complexity?

