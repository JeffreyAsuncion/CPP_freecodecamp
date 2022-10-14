#include <iostream>

int main(){

    // Declare array
    char message[5] {'H','e','l','l','o'};

    // Print out the array through looping
    std::cout << "message : ";
    for ( auto c : message ){
        std::cout << c ;
    }

    std::cout << std::endl;
    std::cout << "size : " << std::size(message) << std::endl;


    // Can also modify elements of the char array

    std::cout << std::endl;
    std::cout << "Modify array data : " << std::endl;

    message[1] = 'a';

    // Print out the array through looping
    std::cout << "message : ";
    for ( auto c : message ){
        std::cout << c ;
    }
    std::cout << std::endl;

    // Direct print out
    // Null termination --->> \0 to end a char array if using std::cout
    char message1[] {'H','e','l','l','o', '\0'};
    std::cout << "message : " << message1 << std::endl;

    //note the garbage chars added
    char message2[] {'H','e','l','l','o'}; 
    std::cout << "message : " << message2 << std::endl;

    // Auto filled in Null characters
    char message3[6] {'H','e','l','l','o'}; //note the garbage chars added
    std::cout << "message : " << message3 << std::endl;
    std::cout << "size : " << std::size(message3) << std::endl;

    // Looks may be deceiving
    char message4[] {'H','e','l','l','o'};  // This is not a c string
                                            //as there is not null character
    std::cout << "message4 : " << message4 << std::endl;
    std::cout << "size : " << std::size(message4) << std::endl; // Will probably print some
                                                                // garbage after our hello message


    // Literal C-string

    // Can also define a literal C string
    std::cout << std::endl;
    
    //An implicict '\0' character is appended to the end of the string, making it a c string
    char message5 [] {"Hello"};
    std::cout << "message5 : " << message5 << std::endl;
    std::cout << "size : " << std::size(message5) << std::endl;


    // Can even have spaces between characters
    std::cout << std::endl;
    char message6[] {"Hello World!"};
    std::cout << "message6 : " << message6 << std::endl;
    std::cout << "size : " << std::size(message6) << std::endl;


    // Arrays of char are special
    // Can't directly print arrays other than that of chars
    std::cout << std::endl;
    int numbers[] {1,2,3,4,5,6,7,8,9,0};
    std::cout << "numbers : " << numbers << std::endl; // this prints out array location

    return 0;
}