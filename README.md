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

stream                      Purpose

std::cout                   Print data to the console (terminal)
std::cin                    Reading data from the terminal
std::cerr                   Printing errors to the console
std::clog                   Printing log messages to the console

    std::getline(std::cin, full_name);


2:50:02

C++ Program Execution Model and Memory Model

2:56:47

C++ core language VS Standard library VS STL

Core features
- defining var and function rules

Standard libarary
- ready to use highly specialized components that we can easily use in our C++ programs
- iostream
- string

STL
- part of the C++ standard library but it is a collection of container types think of them as collection of things
- and we have a set of types allow us to store collections we have algorithms or functions that work on these collections
- we have specialized types called iterators that allow us to navigate through these containers
- potentially running these algorithms on each element in the collection


3:00:53

Variables and Data Types

int main(){}    Entry Point     Statements      Functions
Errors          Warnings        Input           Output
Commnets        Dev Workflow    Memory Model    Execution Model

main() function is the entry point of our program
program is made up of statements and functions
you know about Errors and warnings
you have an idea of how to handle input and output from our program
you can use comments
you know about the memory model and the execution model


C++ data types

int     double      float       char
bool    void        auto        ...

Number systems
- binary
- octal
- hexadecimal

3:05:07

4.2 Number Systems

int number1 = 15; //Decimal
int number2 = 017; //Octal
int number3 = 0x0f; //Hexadecimal
int number4 = 0b00001111; //Binary - C++14

- All data is represented by a bunch of grouped cells of 0's and 1's in memory
- As the range of your data grows, so will the number of digits you need to represent the data in memory
- Hexadecimal system makes it a little easier for humans to handle streams fo data with 1's and 0's
- Octal has the same goal as Hexadecimal, but it's almost no longer used in modern times. It's just mentioned here for your awareness


4.3 Integers
- Stores decimal
- Typically occupies 4 bytes or more in memory

variable 
- a named piece of memory that you use to store specific types of data


Three Ways to Initialized Variables
===================================
- Variable Braced Initialization
- Functional Variable Initialization
- Assignment Initialization


Variable Braced Initialization
==============================

// Variable may contain random garbage value . WARNING
int elephant_count;

int loin_count{};   // Initializes to zero
int dog_count{10};  // Initializes to 10
int cat_count{15};  // Initializes to 15

// Can use expression as initializer
int domesticated_animals { dog_count + cat_count };

// Won't compile, the expression in the braces uses undeclared variables
int bad_initialization { doesnt_exist1 + doesnt_exist2 };

// 2.9 is of type double, with a wider range than int.ERROR OR WARNING
int narrowing_conversion {2.9};


Functional Variable Initialization
==================================

int apple_count(5);

int orange_count(10);

int fruit_count(apple_count + orange_count);

int bad_initialization (doesnt_exist3 + doesnt_exist4 );

// Information lost. less safe than braced initializer
int narrowing_conversion_functional(2.9);



Assignment Initialization
==========================

int bike_count = 2;

int truck_count = 7;

int vehicle_count = bike_count + truck_count;

int narrowing_conversion_assignment = 2.9;



Size of a type in memory
=========================

std::cout << "sizeof int : " << sizeof(int) << std::endl;
std::cout << "sizeof truck_count : " << sizeof(truck_count) << std::endl;


Declaring a variable
=====================

typename variable_name {initializer_value};



