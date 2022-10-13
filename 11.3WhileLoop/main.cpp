#include <iostream>

int main(){

    const unsigned int COUNT {10};
    unsigned int i {0}; // Iterator declaration

    while ( i < COUNT ) { // Test
        std::cout << " I love C++!" << std::endl;
        ++i; // Incrementation
    }
    std::cout << "Loop Done!!!" << std::endl;
    return 0;
}

/*
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

*/