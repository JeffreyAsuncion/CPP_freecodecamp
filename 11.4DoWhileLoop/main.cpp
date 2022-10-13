#include <iostream>

int main(){

    // Loop with output
    const unsigned int COUNT {10};
    unsigned int i {0}; // Iterator Declaration

    do {
        std::cout << "[" << i << "] : I love C++" << std::endl;
        ++i; // Increment
    }while(i < COUNT); // Test

    return 0;
}

/*
Do While loop

Do While Loop -->> Runs the body then Checks (TEST or CONDITION)

Pillars of any loop
- Iterator
- Starting Point
- Test ( Controls when the loop stops )
- Increment(Decrement)
- Loop Body
*/