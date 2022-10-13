#include <iostream>

int main(){

    // Tools
    const int Pen {10};
    const int Marker{20};
    const int Eraser{30};
    const int Rectangle{40};
    const int Circle{50};
    const int Ellipse{60};

    int tool{Pen};

    switch (tool) {
        case Pen : {
            std::cout << "Active tool is pen" << std::endl;
        }
        break;
        case Marker : {
            std::cout << "Active tool is Marker" << std::endl;
        }
        break;
        case Eraser : {
            std::cout << "Active tool is Eraser" << std::endl;
        }
        break;
        case Rectangle : {
            std::cout << "Active tool is Rectangle" << std::endl;
        }
        break;
        case Circle : {
            std::cout << "Active tool is Circle" << std::endl;
        }
        break;
        case Ellipse : {
            std::cout << "Active tool is Ellipse" << std::endl;
        }
        break;
        default : {
            std::cout << "Can't match any tool!" << std:: endl;
        }
    }
    


    return 0;
}

/*

Switch Statement

Testing for several different condition
but more compact than if else if

Break Statement

The break statement after each case is very important.  It stops
processing the switch block when a successful case has been found.  
if the break statement is not there, all the cases following 
the current case will be executed.

condition CAN NOT be a string?!@#! check this fact!!
Integral types and enums: int, long unsigned short, ect
*/