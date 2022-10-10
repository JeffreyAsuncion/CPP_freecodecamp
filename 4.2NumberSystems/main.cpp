#include <iostream>

int main(){
    
    int number1 = 15; //Decimal
    int number2 = 017; //Octal
    int number3 = 0x0F; //Hexadecimal
    int number4 = 0b00001111; //Binary

    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;
    std::cout << "number3 : " << number3 << std::endl;
    std::cout << "number4 : " << number4 << std::endl;

    return 0;
}

/*
- All data is represented by a bunch of grouped cells of 0's and 1's in memory
- As the range of your data grows, so will the number of digits you need to represent the data in memory
- Hexadecimal system makes it a little easier for humans to handle streams fo data with 1's and 0's
- Octal has the same goal as Hexadecimal, but it's almost no longer used in modern times. It's just mentioned here for your awareness

*/