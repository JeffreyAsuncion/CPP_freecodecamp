#include <iostream>

int main(){

    //Variable Braced Initialization
    /*
    // Variable may contain random garbage value . WARNING
    int elephant_count;

    int loin_count{};   // Initializes to zero
    int dog_count{10};  // Initializes to 10
    int cat_count{15};  // Initializes to 15

    // Can use expression as initializer
    int domesticated_animals { dog_count + cat_count };
    
    // Won't compile, the expression in the braces uses undeclared variables
    //int bad_initialization { doesnt_exist1 + doesnt_exist2 };

    // 2.9 is of type double, with a wider range than int.ERROR OR WARNING
    //int narrowing_conversion {2.9}; // compile error 
    
    std::cout << "Elephant count : " << elephant_count << std::endl; 
    std::cout << "Lion count : " << loin_count << std::endl; 
    std::cout << "Dog count : " << dog_count << std::endl; 
    std::cout << "Cat count : " << cat_count << std::endl; 
    std::cout << "Domesticated animal count : " << domesticated_animals << std::endl; 
    */

    //Functional Variable Initialization
    /*
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    //int bad_initialization (doesnt_exist3 + doesnt_exist4 );
    // Information lost. less safe than braced initializer
    int narrowing_conversion_functional(2.9); // output 2, drops the .9

    std::cout << "apple_count : " << apple_count << std::endl; 
    std::cout << "orange_count : " << orange_count << std::endl; 
    std::cout << "fruit_count : " << fruit_count << std::endl; 
    std::cout << "narrowing_conversion_functional : " << narrowing_conversion_functional << std::endl; 
    */

    //Assignment Initialization
    
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9; // output 2, drops .9

    std::cout << "bike_count : " << bike_count << std::endl; 
    std::cout << "truck_count : " << truck_count << std::endl; 
    std::cout << "vehicle_count : " << vehicle_count << std::endl; 
    std::cout << "narrowing_conversion_assignment : " << narrowing_conversion_assignment << std::endl; 
    
    // Check the size with sizeof
    std::cout << "sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count : " << sizeof(truck_count) << std::endl;
    

    return 0;
}

/*
Integers
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







*/