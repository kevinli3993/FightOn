# Lab 07 -- Polymorphism, Virtual Functions & Abstract Base Classes

### Design Document
There is no design writeup due with this lab.

### Grading
This assignment is worth 10 points.

## Introduction
The point of this lab is for you to learn to use virtual functions and polymorphism to perform appropriate operations for each class in an inheritance hierarchy.

A new set of commits were pushed to your private lab repository. Your repo now includes:
  + `lab07/` - A new directory to hold the code files for this lab
  + `lab07/shapes.cpp` - the skeleton code. All the code (class definitions and member function implementations) are in this one file.

To update the local copy of your private lab repository, you would need to perform a `pull`.
```shell
#Change directory to the home directory
cd

#Change directory to your private lab repository
cd lab_ttrojan

#Fetch all the updates from the GitHub server to your local copy
git pull
```

For this lab:
  1. Fetch the lab07 code as shown above
  1. Examine the given code.  In particular, realize `Shape` is an abstract base class and the derived implementation of a `RightTriangle` class
  1. Examine the `main()` function that implements an iterative menu selection process for users to create `Shape`s and add them to a list (`vector`) of `Shape *`’s
  1. After exiting the menu, the `Shape`s in the list will be printed out along with their perimeter and area

## Part 1 &ndash; Derived Shape Definitions Implementations (6 points)
  1. Write classes to model a `Rectangle`, `Square`, and `Circle` taking in appropriate parameters in the constructor [see the menu output and comments to infer what those parameters/data member should be] and implementing appropriate member functions (all in `shapes.cpp`). You can just hard code `PI = 3.14159`


## Part 2 &ndash; Test Application (3 points)
  1. Add code in the `main()`’s `if ... else if` statements to allocate appropriate objects and enter them into the `shapeList`
  1. Compile, run and test the program (sample input and output is shown below).
  1. Debug any errors.


## Part 3 &ndash; Abstract Base Class (1 point)
  1. Finally try to declare a `Shape` object at the top your `main()` function and attempt to compile.  
  1. Comment out the `Shape` declaration you made and demonstrate your working program to your TA/CP.

### Sample Input & Output
**Inputs**:
```
1 3 4     # (Right triangle with b=3, h=4)
2 3 4     # (Rectangle with b=3, h=4)
3 4       # (Square with side = 4)
4 2       # (Circle with radius = 2)
0         # (Quit and print)
```

**Outputs**:
```
Right Triangle: Area=6 Perim=12
Rectangle: Area=12 Perim=14
Square: Area=16 Perim=16
Circle: Area=12.5664 Perim=12.5664
```

