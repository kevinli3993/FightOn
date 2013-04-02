<<<<<<< HEAD
FightOn
=======

New Repository
=======
CSCI 102 Labs
=============

## General Information
### Compiling C++ Programs
To compile a C++ program, enter the following:
```shell
g++ -g -Wall -o executable_name filename.cpp
```
Where the `filename.cpp` is the name of your C++ source code file.

If you get compiler errors, you will need to re-edit your program and fix the problem. In general, the compiler gives you the line number of the problem line and some indication of the problem. If you can't figure out the problem, ask a TA/CP for assistance.</p>

To run a successfully compiled C++ program (using `g++` command shown above), enter the following:
```shell
./executable_name
```
Note: If you DID NOT use the `-o executable_name` option in your `g++` command then `g++` will create an executable of the name `a.out` by default. As this is confusing please be sure you use the `-o` option.

### Obtaining Lab Code Files & Instructions
All labs will be made available in the [CS 102 Lab Repository](https://github.com/usc-csci102-spring2013/labs). Note that this is a private repository and only available for students who [registered](https://docs.google.com/spreadsheet/viewform?formkey=dFNpLTJnVHJ4LUxicm5RSi1TczNSQmc6MQ) their GitHub accounts.

To `clone` the lab repository, you simply use the following command:
```shell
git clone git@github.com:usc-csci102-spring2013/labs.git
```

If you already cloned the repository, you can check for updates using the `pull` command:
```shell
# Change directory to be in the labs repository
cd labs
# Check for updates
git pull
```

### Your Private Lab Repository
Every student who [registered](https://docs.google.com/spreadsheet/viewform?formkey=dFNpLTJnVHJ4LUxicm5RSi1TczNSQmc6MQ) their GitHub account as part of first lab will find a new private repository named `lab_usc-username` when they login to [GitHub](https://github.com/) and visit the [CSCI 102 Organization](https://github.com/usc-csci102-spring2013) Page.

You are expected to have all your lab work done using this repository. Access to this repository is restricted to yourself and the course teaching staff. This is your repository and it represents your lab work in the course, therefore, you should tend to it properly. Here are some general issues to consider:
  - Update the `README.md` file to include you name, USC email, lecture and lab sections.
  - Update the `.gitignore` file to include any unneeded files.
  - Each lab should have its own directory named `labXX` in _lower-case letters_ where `XX` is the two digit lab number, e.g. `03`, `09` and `11`. 
  - When sample code is provided as part of the lab write-up, you should copy those files into the appropriate directory in your private lab repository. Remember, the [course labs repository](https://github.com/usc-csci102-spring2013/labs) is separate from your own private repository. 
  - Each lab submission should have at least `N+1` commits where `N` is the number of parts in the lab write-up. Any code provided in the lab write-up must be committed to your private lab repository *as is* before you start editing it.

>>>>>>> 3f0cda95c46e3c0380612622bf7e8c9efa63e7f1
