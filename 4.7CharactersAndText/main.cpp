#include <iostream>

int main(){
    
    char character1 {'a'};
    char character2 {'r'};
    char character3 {'r'};
    char character4 {'o'};
    char character5 {'w'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    //One byte in memory : 2^8 = 256 different values (0 ~ 255)
    std::cout << std::endl;

    char value = 65; //ACSCII character code of 'A'
    std::cout << "value : " << value << std::endl;
    std::cout << "value(int) : " << static_cast<int>(value) << std::endl;


    return 0;
}

/*
Characters and Text

1 byte : 256 Possible values
Each matched to come character

https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

It is possible to assign a valid ACSII code to a char variable, and the
corresponding character will be stored in. You can choose to interpret
that either as a character or a regular integral value

- ASCII was among the first encodings to represent text in a computer.
- It fall short when it come to representing languages other than English and a few
    western languages.  Think Arabic, East Asian Languages like Japanese, Chineses ,...
- There are better ways to represent text that is meant to be seen in different
    languages, one of the most common being Unicode
- The details fo Unicode are out of scope of this course, just know that it's a robust
    way to represent text in different languages for a computer




*/