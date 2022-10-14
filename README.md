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


3:54:01
4.5 Fractional Number

Fractional Numbers
- Used to represent numbers with fractional parts in C++

Type        Size       Precision        Comment
------------------------------------------------------------------

float       4           7               -
double      8           15              Recommended default
long double 12          >double         


Precision - the number in front of the decimal is also counted in the precision

1.23456700001

// Declare and initialize the variables
float number1 {1.12345678901234567890f}; // f is for float
double number2 {1.12345678901234567890};
long double number3 {1.12345678901234567890L}; // L is for long

// Print out the sizes
std::cout << "sizeof float   : " << sizeof(float) << std::endl;
std::cout << "sizeof double   : " << sizeof(double) << std::endl;
std::cout << "sizeof long double   : " << sizeof(long double) << std::endl;

// Precision
std::cout << std::setprecision(20); // Control the precision from std::out
std::cout << "number1 is : " << number1 << std::endl;   // 7 digits
std::cout << "number2 is : " << number2 << std::endl;   // 15'ish digits
std::cout << "number3 is : " << number3 << std::endl;   // 15+ digits

// Precision gone wrong
float number4 {192400023}; // float can take up to 7 place, 9 is too much

// Problem not caught at compile time
float number4 {192400023}; 
number4 = number4 + 1;
std::cout << "number4 is : " << number4 << std::endl;

    //Scientific notation
    //What we have seen so far in terms of floating point types
    //is fixed notation. There is another notation, scientific
    //that is handy if you have really huge numbers or small numbers
    //to represent

// Scientific Notation
double number5 {192400023};
double number6 {1.92400023e8};
double number7 {1.924e8};
double number8 {0.00000000003498};
double number9 {3.498e-11};

IEEE_754
- Floating Point Numbers Memory Representation
- https://en.wikipedia.org/wiki/IEEE_754


// Thing you can do with floating point that you can't do with integers

1. n(floating point)/0  ---> Infinity (+/-)
2.  0.0/0.0 ---> NaN

NOTE this is not possible with integers


4:01:35
double number10{5.6};
double number11{}; // Initialized to 0
double number12{}; // Initialized to 0

// Infinity
double result {number10/number11};

std::cout << number10 << "/" << number11 << " yields " << result << std::endl;
std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;

//Nan
result = number11 / number12;

std::cout << number11 << "/" << number12 << " = " << result << std::endl;

NOTE

- Remeber the suffixes when initializing floating point variables,
    otherwise the default will be double
- Double works well in many situations, so you will see it used a lot







4.6 Booleans : true / false

- a byte can store 256 different values
- Using it just to cover two states (true/false) is wasteful, especially for 
    devices with hard memory contraints (think embedded devices)
- There are techniques to pack even more data into a byte. We'll learn
    more about these in a few upcoming chapters

they take up 1 byte in memory


4.7 Characters and Text

1 byte : 256 Possible values
Each matched to come character

https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

It is possible to assign a valid ACSII code to a char variable, and the
corresponding character will be stored in. You can choose to interpret
that either as a character or a regular integral value

- ASCII was among the first encodings to represent text in a computer.
- It fall short when it come to representing languages other than English and a few
    western languages.  Think Arabic, East Asian Languages like Japanese, Chineses ,...
- There are better ways to represent text that is meant to be seen in different
    languages, one of the most common being Unicode
- The details fo Unicode are out of scope of this course, just know that it's a robust
    way to represent text in different languages for a computer



4.8 Auto Keyword

auto -->> Let the compiler deduce the type



4.9 Assignment

    // Auto type deduction
    // Careful about auto assignments
    auto var3 {333u};   // Declare and initialize with type deduction

    var3 = -22;         // Assign negative number. DANGER!!!

    std::cout << "var3 : " << var3 << std::endl; // HUH? 4294967274



5.2 Operation on data

add         subtract        divide
modulus     decrement       multiply
Built in utilities
Formatting   increment


Basic Operations

add     subtract        divide
modulus     mutiply

5.3 Precedence and associativity

a + b * c - d / e - f + g

Precedence : which operation to do first
Associativity : which direction or which order ( from left or from right)

https://en.cppreference.com/w/cpp/language/operator_precedence

It is better to make the intent in your code as clear as possible by clearly 
using () to indicate which operations you want done first


The readability of your code is something that you should strive for



5.4 Prefix and Postfix Increment / Decrement
========================================
- Prefix and Postfix Increment / Decrement operators are cool.
- But they only increment by one, what if we need to increment by a value 
    other than 1, say 5 or 7. We'll see a way to do that in the next lecture
- There is no value** or **value, or //value or value//. They don't make
    sense, these prefix/postfix operators are only avaiable for + and -, again
    because that's were they make sense



5.5 Compound Operators
======================

5.6 Relational Operators
========================

5.7 Logical Operators
=====================

5.8 Output Formatting
=====================

5.9 Numberic Limits 6:33:28

5.10 Math Function 6:41:13

5.11 Weird Integral Types - char/short int

Operations on Data
5.1     Introduction
5.2     Basic Operations
5.3     Precedence and Associativity
5.4     Prefix and Postfix Increment-Decrement
5.5     Compound Assignment Operators
5.6     Relational Operators
5.7     Logical Operators
5.8     Output Formatting
5.9     Numeric Limits
5.10    Math Functions
5.11    Weird Integral Types


Chapter 10

Flow Control : Conditional Programming 7:02:08

10.2 If statement

10.3 ElseIf
Testing for several different conditions

10.4 
Switch Statement

Testing for several different condition
but more compact than if else if

Break Statement

The break statement after each case is very important.  It stops
processing the switch block when a successful case has been found.  
if the break statement is not there, all the cases following 
the current case will be executed.

condition CAN NOT be a string?!@#! check this fact!!
Integral types and enums: int, long unsigned short, ect

10.5 Ternary Operator 7:42:47

Ternary Operator

Ternary Expression

result = (condition) ? option1 : option2 ;


11.2ForLoop

- For Loop
- Range based for loop
- While Loop
- Do While Loop


For Loop


    // for loop
    for (unsigned int i{}; i < 10; ++i){
        std::cout << "I love C++!" << std::endl;
    }

Pillars of any loop
-------------------
- Iterator -->> the variable that navigates thru the  loop ( i )
- Starting Point
- Test ( controls when the loop stops )
- Increment (Decrement)
- Loop Body


Iterator type

size_t -->> unsigned int

size_t : Not a type, just a type alias for some unsigned int representation


    //========================================================
    // Array Declaration : Omit size

    // Omit the size of the array at declaration
    int class_sizes[] {10,12,15,11,18,17};
    
    // range based for loop
    // - don't have to setup an iterator, initalize it, do the increment
    // - just read values and be on our merry way
    for (auto value : class_sizes) {
        std::cout << "value : " << value << std::endl;
    }
    //==============================================






11.3 While Loop


Pillars of any loop
- Iterator
- Starting Point
- Test ( controls when the loop stops)
- Increment (Decrement)
- Loop body

    const unsigned int COUNT {10};
    unsigned int i {0}; // Iterator declaration

    while ( i < COUNT ) { // Test
        std::cout << " I love C++!" << std::endl;
        ++i; // Incrementation
    }
    std::cout << "Loop Done!!!" << std::endl;

11.4 Do While loop

Do While Loop -->> Runs the body then Checks (TEST or CONDITION)

Pillars of any loop
- Iterator
- Starting Point
- Test ( Controls when the loop stops )
- Increment(Decrement)
- Loop Body




12.2 Declaring and Using Arrays

Array contruct -->> collection of the same type

Array are the way to set up collections in C++


Declaring and Using Arrays

Array Bounds

// Reading past bounds of your array : BAD!
// It's going to read out something you didn't put there.





12.3 Size of An Array 9:15:54

Three different ways
- old fashion size of array divided by size of elemetn
- using the size()
- Plain Old Range Based For Loop


    // std::size() [C++17]

    int scores[] {10,12,15,11,18,17,22,23,24};

    // Can get the size with std::size
    std::cout << "scores size : " << std::size(scores) << std::endl;

    // Print data out
    for (size_t i{0}; i < std::size(scores); ++i){
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }


12.4 Arrays of Character 9:26:45

// Bounds Of an array

    // Array bounds
    /*
    int numbers [] {1,2,3,4,5,6,7,8,9,0};

    // Read beyond bounds : Will read garbage or crash your program
    std::cout << "numbers[12] : " << numbers[12] << std::endl;

    // Write beyond bound. The complier allow it. But you don't own
    // the memory at index 12, so other programs may modify it and your
    // program may read bogus data at a later time. Or you can evem
    // corrupt data used by other parts of your program
    numbers[12] = 1000;
    std::cout << "numbers[12] : " << numbers[12] << std::endl;


Pointer 9:53:31

