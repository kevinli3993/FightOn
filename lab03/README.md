# Lab 03: Dynamic Array-Based List

### Design Document
There is no design writeup due with this lab.

### Grading
This assignment is worth 10 points.

This lab assignment must be demonstrated to a TA or Course Producer (CP).

### Lab Goal
To create a dynamic array-based list and use it to store all your friends in a class (called `User`).

## Part 1 (3 points)
Create a dynamic array-based list class for storing integers. It is to have at least a constructor, a destructor, `push_back`, `printUser`, and `at` methods.

## Part 2 (3 points)
Create a `User` class. The `User` class is for storing information about someone and their friends (the beginnings of a social network data structure). This class is to have the following data members:
  + Name (a `string`)
  + Age (an `int` that cannot be less than 0)
  + Friends (a list of `string` - you must use your list class from part 1)

## Part 3 (3 points)
Create a main function that prompts the user for their name, their age, and the number of friends that they have. Then use a `for` loop to prompt for the names of their friends. Store all this data into a single `User` object. Then call the '`printUser` method described below.

## Part 4 (2 points)
The `printUser` method of your `User` object is to nicely output all the information about the user. Your output is to look like this:
```
User name: <output name here>
User age: <output age here>
User friends: <output all the friend names here with a space between them>
```

NOTE: If you want, you can put all this code into a single .cpp file. It makes compiling it easier.
