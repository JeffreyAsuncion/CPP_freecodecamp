#include <iostream>

int main(){

    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    int result = a + b * c -d / e - f + g;
    std::cout << "result : " << result << std::endl;

    result = a / b * c + d - e + f;
    std::cout << "result : " << result << std::endl;

    result = (a + b) * c - d/e - f + g;
    std::cout << "result : " << result << std::endl;


    return 0;
}

/*
Precedence and associativity

a + b * c - d / e - f + g

Precedence : which operation to do first
Associativity : which direction or which order ( from left or from right)

https://en.cppreference.com/w/cpp/language/operator_precedence

It is better to make the intent in your code as clear as possible by clearly 
using () to indicate which operations you want done first


The readability of your code is something that you should strive for
*/