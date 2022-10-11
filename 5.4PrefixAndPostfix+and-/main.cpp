#include <iostream>

int main(){

    // Regular Increment / Decrement
    int value {5};

    // Increment by one
    value = value + 1;
    std::cout << "The value is : " << value << std::endl;

    value = 5; // Reset value to 5

    // Decrement by one
    value = value - 1;
    std::cout << "The value is : " << value << std::endl;


    //Postfix Increment / Decrement
    value =5;
    
    std::cout << "The value is (incrementing) : " << value++ << std::endl;
    std::cout << "The value is : " << value << std::endl;
    std::cout << std::endl;

    value = 5; // Reset value to 5

    // Decrement with Postfix
    std::cout << "The value is (decrementing) : " << value-- << std::endl;
    std::cout << "The value is : " << value << std::endl;


    // Prefix Increment / Decrement
    value = 5;

    ++value;
    std::cout << "The value is (prefix++) : " << value << std::endl;

    value = 5; // Reset value to 5
    std::cout << "The value is (prefix++ in place) : " << ++value << std::endl;

    // Prefix / Decrement
    value = 5; // Reset value to 5

    --value;
    std::cout << "The value is (prefix--) : " << value << std::endl;

    value = 5; // Reset value to 5
    std::cout << "The value is (prefix-- in place) : " << --value << std::endl;



    return 0;
}

/*

Prefix and Postfix Increment / Decrement
========================================
- Prefix and Postfix Increment / Decrement operators are cool.
- But they only increment by one, what if we need to increment by a value 
    other than 1, say 5 or 7. We'll see a way to do that in the next lecture
- There is no value** or **value, or //value or value//. They don't make
    sense, these prefix/postfix operators are only avaiable for + and -, again
    because that's were they make sense

*/