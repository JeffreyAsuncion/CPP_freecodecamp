#include <iostream>

int main(){
    
    bool red_light {true};
    bool green_light {false};

    if(red_light == true){
        std::cout << "Stop!" << std::endl;
    }else{
        std::cout << "Go through!" << std::endl;
    }

    if(green_light){
        std::cout << "The light is green!" << std::endl;
    }else{
        std::cout << "The light is NOT green!" << std::endl;
    }

    //sizeof()
    std::cout << "sizeof(bool): " << sizeof(bool) << std::endl; 

    //Printing out a bool
    //1 -->> true
    //0 -->> false
    std::cout << std::endl;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    //Print out true and false
    std::cout << std::endl;
    std::cout << std::boolalpha; // Forces the output format to true/false
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;


    return 0;
    }

/*
Booleans : true / false

- a byte can store 256 different values
- Using it just to cover two states (true/false) is wasteful, especially for 
    devices with hard memory contraints (think embedded devices)
- There are techniques to pack even more data into a byte. We'll learn
    more about these in a few upcoming chapters

they take up 1 byte in memory

*/