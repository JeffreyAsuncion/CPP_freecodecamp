#include <iostream>
#include <iomanip>

int main(){
    // Declare and initialize the variables
    float number1 {1.12345678901234567890f}; // f is for float
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L}; // L is for long

    // Print out the sizes
    std::cout << "sizeof float   : " << sizeof(float) << std::endl;
    std::cout << "sizeof double   : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double   : " << sizeof(long double) << std::endl;

    // Precision - need #include <iomanip>
    std::cout << std::setprecision(20); // Control the precision from std::out
    std::cout << "number1 is : " << number1 << std::endl;   // 7 digits
    std::cout << "number2 is : " << number2 << std::endl;   // 15'ish digits
    std::cout << "number3 is : " << number3 << std::endl;   // 15+ digits

    // Float problems : The precision is usually too limited
    // for a lot of applications
    //float number4 {192400023.0f}; // Error : narrowing conversion, float can take up to 7 place, 9 is too much
    double number4 {192400023.0};

    std::cout << "number4 is : " << number4 << std::endl;

    std::cout << "====================================================================" << std::endl;

    //Scientific notation
    //What we have seen so far in terms of floating point types
    //is fixed notation. There is another notation, scientific
    //that is handy if you have really huge numbers or small numbers
    //to represent
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8}; // Can omit the lower 00023 for silmplicity if our application allows
    double number8 {0.00000000003498};
    double number9 {3.498e-11};

    std::cout << "number5 is : " << number5 << std::endl;
    std::cout << "number6 is : " << number6 << std::endl;
    std::cout << "number7 is : " << number7 << std::endl;
    std::cout << "number8 is : " << number8 << std::endl;
    std::cout << "number9 is : " << number9 << std::endl;

    //Inifinity and Nan
    std::cout << std::endl;
    std::cout << "Infinity and Nan" << std::endl;

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



    return 0;
}

/* 
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


*/