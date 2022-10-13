#include <iostream>

int main(){

    // for loop
    // for (unsigned int i{}; i < 10; ++i){
    // NOTE size_t -->> unsigned int
    for (size_t i{}; i < 10; ++i){
        std::cout << i << " I love C++!" << std::endl;
    }

    // Other operations in the loop body
    for (size_t i{0}; i < 10; ++i){
        std::cout << "i : " << i << ". Double that and you get " << 2*i << std::endl;
    }

    // Can leave out the {}, if you only have one statement in the body of the loop
    for (size_t i{}; i < 5; ++i)
        std::cout << "Single statement in body. Can leave out {} on loop body" << std::endl;

    // Scope of the iterator
    for (size_t i{0}; i < 10; ++i){
        // i is valid to use within the boundaries of the {} here
        std::cout << " i is usable here, the value is : " << i << std::endl;
    }
    // If you try to access i here, you'll get an error.
    // i doesn't exist in the main function local scope

    

    // Iterator can live outside the loop scope

    size_t j{};

    for (j; j < 10; ++j){
        std::cout << "Using the j variable from main function local scope : " << j << std::endl;
    }

    std::cout <<"Loop done, the value of j is : " << j << std::endl; 


    // Can leave out the iterator declaratio in the loop
    size_t k{};

    for ( ; k < 10; ++k){
        std::cout << "Using the k variable from main function local scope : " << k << std::endl;
    }

    std::cout <<"Loop done, the value of k is : " << k << std::endl; 


    // Best Practice for  Loops
    // Hard coded values are bad  -->> example number of loops

    const size_t COUNT {10};
    for (size_t j{}; j < COUNT; ++j){
        std::cout << "The value of j is : " << j << std::endl;
    }
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

    return 0;

}

/*

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



*/