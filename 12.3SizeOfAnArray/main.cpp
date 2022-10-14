#include <iostream>

int main(){
    // In the Before size() times, this was the solution
    /*
    int scores[] {10,12,15,11,18,17,22,23,24}; 
    std::cout << "size of scores : " << sizeof(scores) << std::endl;
    std::cout << "size of scores[0] : " << sizeof(scores[0]) << std::endl;
    std::cout << "score item count : " << sizeof(scores)/sizeof(scores[0]) << std::endl;

    size_t count {sizeof(scores)/sizeof(scores[0])};

    std::cout << "Printing out array items : " << std::endl;
    for (size_t i{0}; i < count; ++i){
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }
    */
    //==================================================================
    // std::size() [C++17]

    /*
    int scores[] {10,12,15,11,18,17,22,23,24};

    // Can get the size with std::size
    std::cout << "scores size : " << std::size(scores) << std::endl;

    // Print data out
    for (size_t i{0}; i < std::size(scores); ++i){
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }
    */
    //==================================================================

    // Looping through an array -->> using A RANGE BASED FOR LOOP
    int scores[] {10,12,15,11,18,17,22,23,24};

    std::cout << "Using plain old range based for loop " << std::endl;

    for (auto score : scores) {
        std::cout << "score : " << score << std::endl;
    }


    return 0;
}

/*

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



*/