#include <iostream>

int addNumbers(int first_param, int second_param){

    int result = first_param + second_param;
    return result;
}

int main(){

    int first_number {13}; // Statement
    int second_number {7};

    std::cout << "First number : " << first_number << std::endl; //13
    std::cout << "Second number : " << second_number << std::endl; //7

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl; //20

    sum = addNumbers(25,7);
    std::cout << "Sum : " << sum << std::endl; //32

    sum = addNumbers(30, 54);
    std::cout << "Sum : " << sum << std::endl; //84

    std::cout << "Sum : " << addNumbers(3,42) << std::endl; //45


    return 0;
}

/*
Statements and Functions

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
*/