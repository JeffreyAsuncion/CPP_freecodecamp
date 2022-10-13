#include <iostream>

int main(){

    int max{};

    int a{35};
    int b{20};

    std::cout << std::endl;
    std::cout << "using regular if " << std::endl;

    if(a > b) {
        max = a;
    }else{
        max = b;
    }

    std::cout << "max : " << max << std::endl;


    std::cout << std::endl;
    std::cout << "using regular ternary Operator " << std::endl;

    // types of option1 and option2 must match or be convertible
    max = (a > b) ? a : b ;

    std::cout << "max : " << max << std::endl;


    // Ternary Initialization
    std::cout << std::endl;
    std::cout << "speed" << std::endl;
    bool fast = false;

    int speed { fast ? 300 : 150};

    std::cout << "The speed is : " << speed << std::endl;





    return 0;
}

/*

Ternary Operator

Ternary Expression

result = (condition) ? option1 : option2 ;


*/