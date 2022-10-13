#include <iostream>

int main(){
    /*
    int number1 {55};
    int number2 {60};

    bool result = (number1 < number2);  // Expression yielding the condition
    std::cout << std::boolalpha << "result : " << result << std::endl;

    std::cout << std::endl;
    std::cout << "free standing if statement" << std::endl;

    //if(result){}
    if (result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }

    //if(!result){}
    if (!(result == true)){
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }
    */
    //=========================================================================


    // Use expression as condition directly
    /*
    int number1 {55};
    int number2 {60};

    std::cout << std::endl;
    std::cout << "Using expression as condition : " << std::endl;

    if (number1 < number2){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }else{
        std::cout << number2 << " is NOT less than " << number2 << std::endl;
    }
    */

    //==========================================================================


    bool red = false;
    bool green {true};
    bool yellow {false};
    bool police_stop{true};

    /*
            if green                 : go
            if red, yellow           : stop
            if green and police_stop : stop
    */
    
    if(red){
        std::cout << "Stop" << std::endl;
    }
    if(yellow){
        std::cout << "Slow down" << std::endl;
    }
    if(green){
        std::cout << "Go" << std::endl;
    }
    
    // Nested Conditions
    std::cout << std::endl;
    std::cout << "Police officier stops(verbose)" << std::endl;

    if(green){
        if(police_stop){
            std::cout << "Stop" << std::endl;
        }
        else{
            std::cout << "Go" << std::endl;
        }
    }
    
    // Nested alternative
    std::cout << std::endl;
    std::cout << "Police officer stops(less verbose)" << std::endl;
    if(green && !police_stop){
        std::cout << "Go" << std::endl;
    }else{
        std::cout << "Stop" << std::endl;
    }

    return 0;
}

/*
If Statement

Doing things conditionally


*/