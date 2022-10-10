# CPP_freecodecamp

environemnt WSL Ubuntu VSCode

install
sudo apt install gcc g++
sudo apt install gcc-10
sudo apt install g++-10
sudo apt install gdb

to compile
g++ -std=c++2a <filename>.cpp

to execute
./<filename>


https://stackoverflow.com/questions/66975491/how-to-use-c-20-in-g

to setup each program
- open in folder with 
    > code . 
- not in main directory
- this is to be able to run and debug


1:45:05

3.2 FirstCCPProgram
===================


3.3 Comments
==============
// Comments out a single ine

/* ... */ //Block Comments out a block of text

/*
    Block comments
    can't be
    nested
    It breaks the code 
*/

// Use Comments to document your code. Don't overdo it though.


3.4 ErrorsAndWarnings
=====================

/*

Compile Time Errors

Runtime Errors

Warnings

*/


2:13:10 

3.5 Statements and Functions

- a statement is a basic unit of comuputation in a C++ program
- Every C++ program is a colletion of statements organized in a certain way to achieve some goal
- Statements end with a semicolon in C++ (;)


- Statements are executed in order from top to bottom when the program is run
- Execution keeps going until there is a statement causing the program to terminate, or run another sequence of statements

                    ---------------
first_number --->  |               |
                   |   function    | ---> sum
second_number--->  |               |
                    ---------------


3.6 InputOutput
