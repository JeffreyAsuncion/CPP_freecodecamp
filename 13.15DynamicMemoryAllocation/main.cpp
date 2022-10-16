#include <iostream>

int main(){
    

    // How we've used pointers so far
    /*
    int number {22};    // Stack memory

    int *p_number = &number;

    std::cout << std::endl;
    std::cout << "Declaring pointer and assigning address : " << std::endl;
    std::cout << "number : " << number << std::endl;
    std::cout << "p_number : " << p_number << std::endl;
    std::cout << "&number : " << &number << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl;
    
    int *p_number1;     // Uninitialized pointer, contains junk address
    int number1 {12};
    p_number1 = &number1;   // Make it point to a valid address
    std::cout << std::endl;
    std::cout << "Uninitialized pointer : " << std::endl;
    std::cout << "*p_number1 : " << *p_number1 << std::endl;
    */
    //==========================================================================

    // Bad Things
    /*
    // Writing into uninitialized pointer through dereference
    int *p_number2;     // Contains junk address : could be anything 
                        // Could point to OS memory not only program memory
    std::cout << "Writing in the 55" << std::endl;
    *p_number2 = 55;    // Writing into junk address : BAD!
    std::cout << std::endl;
    std::cout << "Writing into uninitialized pointer through dereference"  << std::endl;
    std::cout << "p_number2 : " << p_number2 << std::endl;  // Reading from junk address/
    std::cout << "Dereferencing bad memory" << std::endl; // This no print, doesn't get this far. See error above
    std::cout << "*p_number2 : " << *p_number2 << std::endl;

    // Initializing pointer to null
    // int *p_number3{nullptr};     // Also works
    int *p_number3 {};  // Initialized with pointer equivalent to zero : nullptr
                        // a pointer pointing nowhere
    // *p_number3 = 33; // Writting into a pointer pointing nowhere : BAD, CRASH

    std::cout << std::endl;
    std::cout << "Reading and writing through nullptr : " << std::endl;
    // std::cout << "p_number3 : " << p_number3 << std::endl;
    // std::cout << "*p_number3 : " << *p_number3 << std::endl; // Reading from nullptr : BAD, CRASH
    */
    //===========================================================================

    // Best Practices -->> Dynamic Memory

    // Allocate dynamic memory though 'new' --> NOT STORED on STACK, STORED on HEAP
    /*
    // Initialize the pointer with dynamic memory. 
    // Dynamically allocate memory at run time and make a pointer point to it

    int *p_number4{nullptr};
    p_number4 = new int;    //  Dynamically allocate space for a single int on the heap
                            //  This memory belongs to our program from now on.  The system
                            //  can't use it for anything else, until we return it.
                            //  After this line executes, we will have a valid memory location
                            //  allocated.  The size of the allocted memory will be such that it 
                            //  can store the type pointed to by the pointer

    *p_number4 = 77;        // Writing into dynamically allocated memory, STORED on the HEAP
    std::cout << std::endl;
    std::cout << "Dynamically allocated memory : " << std::endl;
    std::cout << "p_number4 : " << *p_number4 << std::endl;

    // Return memory to the OS
    delete p_number4;
    p_number4 = nullptr

    */
    //==========================================================================

    // Best Practices -->> Dynamic Memory


    // Initialize with 'new' upon pointer declaration
    
    // It is also possible to initalize the pointer with a valid
    // address up on declaration. Not with a nullptr
    int *p_number5{ new int };          // Memory location contains junk value
    int *p_number6{ new int {22}};      // Use direct initialization
    int *p_number7{ new int { 23 } };   // Use uniform initialization

    std::cout << std::endl;
    std::cout << "Initialize with valid memory address at declaration : " << std::endl;
    std::cout << "p_number5 : " << p_number5 << std::endl;
    std::cout << "*p_number5 : " << *p_number5 << std::endl; // Junk value

    std::cout << "p_number6 : " << p_number6 << std::endl;
    std::cout << "*p_number6 : " << *p_number6 << std::endl; // Junk value

    std::cout << "p_number7 : " << p_number7 << std::endl;
    std::cout << "*p_number7 : " << *p_number7 << std::endl; // Junk value

    // Remember to release (and reset) the memory
    delete p_number5;
    p_number5 = nullptr;
        
    delete p_number6;
    p_number6 = nullptr;

    delete p_number7;
    p_number7 = nullptr;
    
    // Can reuse pointer
    p_number5 = new int(81);
    std::cout << "*p_number5 : " << *p_number5 << std::endl;

    delete p_number5;
    p_number5 = nullptr;
    //========================================================================

    // Calling delete twice on a pointer : BAD!

    /*
    // Calling delete on a pointer twice will lead to undefined behavior.
    // Your program may even crash! Avoid this like a plague!
    int *p_number6{nullptr};
    p_number6 = new int {77};

    // Use the pointer
    std::cout << std::endl;
    std::cout << "deleting twice : BAD" << std::endl;
    std::cout << "p_number6 : " << p_number6 << std::endl;
    std::cout << "*p_number6 : " << *p_number6 << std::endl; // Junk value

    // Remember to release any dynamically allocated piece of memory
    delete p_number6;
    delete p_number6; // Anything can happen
    p_number6 = nullptr;

    int *p_number8 = new int;
    delete p_number8;
    delete p_number8; // Anything can happen

    std::cout << "After deleting twice " << std::endl;
    */

   
    return 0;
}

/* 

Dynamic Memory Allocation

System
Stack   -->>    local variables, function call, ...
Heap    -->>    Additional memory that can be queried for at run time
Data
Text


Pointer Don't s
---------------
1. Don't use a pointer that is not Initialized
    a. Contains junk address : could be anything
2. Undefined behavior : Initialized with point equivalent of zero : nullptr
    a. a pointer pointing nowhere
    b. writing into a pointer pointing nowhere : BAD, CRASH


Pointer Best Practice
------------------- 
1. First, ALWAYS initialize pointers, before using them
    a. Don't use a pointer that you didn't initialize
2. modify valid addresses to those pointers 
    a. Don't use a pointer that is pointing to NULLPTR
3. (If you don't know what is a pointer, don't use that pointer)


So far we've only been using memory allocated on the stack.
We are going to see how one can allocate memory from the  heap,
and some of the differences betwee, these mechanisms.



    Stack                           
--------------
- Memory is finite
- The developer isn't in full control of the memory lifetime
- lifetime is controlled by the scope mechanism


    Heap 
----------------
- Memory is finite
- The developer is in full control of when memory is allocated and when it's released
- Lifetime is controlled explicitly through new and delete operations


Example -->> Lifetime through scope mechanism

#include <iostream>

int main(int argc, char **argv)
{
    {
        int local_scope_var {33}; // only lives in the scope of the inner {}
    }

    return 0;
}



Allocate dynamic memory though 'new' --> NOT STORED on STACK, STORED on HEAP

// Initialize the pointer with dynamic memory. 
// Dynamically allocate memory at run time and make a pointer point to it

int *p_number4{nullptr};
p_number4 = new int;    //  Dynamically allocate space for a single int on the heap
                        //  This memory belongs to our program from now on.  The system
                        //  can't use it for anything else, until we return it.
                        //  After this line executes, we will have a valid memory location
                        //  allocated.  The size of the allocted memory will be such that it 
                        //  can store the type pointed to by the pointer

*p_number4 = 77;        // Writing into dynamically allocated memory
std::cout << std::endl;
std::cout << "Dynamically allocated memory : " << std::endl;
std::cout << "p_number4 : " << *p_number4 << std::endl;



Example -->> Stack lifetime VS heap lifetime

#include <iostream>

int main(int argc, char **argc)
{
    {
        int local_var {33};             // lives only in this inner {}
        int *local_ptr_var = new int    // lives in the life of the program
    }
    return 0;
}



Releasing and Resetting --> Returning Memory to the system
-----------------------------------------------------------

int *p_number4{nullptr};
p_number4 = new int;

// ...

delete p_number4;       // Release      -->> return memory to system
p_number4 = nullptr     // Resetting    -->> no valid data in that memory

NOTE : Calling delete twice on a pointer : BAD! Anything can happen... CRASH

see about code for 

// Initialize with 'new' upon pointer declaration

    // It is also possible to initalize the pointer with a valid
    // address up on declaration. Not with a nullptr
    int *p_number5{ new int };          // Memory location contains junk value
    int *p_number6{ new int {22}};      // Use direct initialization
    int *p_number7{ new int { 23 } };   // Use uniform initialization

    std::cout << std::endl;
    std::cout << "Initialize with valid memory address at declaration : " << std::endl;
    std::cout << "p_number5 : " << p_number5 << std::endl;
    std::cout << "*p_number5 : " << *p_number5 << std::endl; // Junk value

    std::cout << "p_number6 : " << p_number6 << std::endl;
    std::cout << "*p_number6 : " << *p_number6 << std::endl; // Junk value

    std::cout << "p_number7 : " << p_number7 << std::endl;
    std::cout << "*p_number7 : " << *p_number7 << std::endl; // Junk value

    // Remember to release (and reset) the memory
    delete p_number5;
    p_number5 = nullptr;
        
    delete p_number6;
    p_number6 = nullptr;

    delete p_number7;
    p_number7 = nullptr;

//=============================================================================

// Calling delete twice on a pointer : BAD!

    
    // Calling delete on a pointer twice will lead to undefined behavior.
    // Your program may even crash! Avoid this like a plague!
    int *p_number6{nullptr};
    p_number6 = new int {77};

    // Use the pointer
    std::cout << std::endl;
    std::cout << "deleting twice : BAD" << std::endl;
    std::cout << "p_number6 : " << p_number6 << std::endl;
    std::cout << "*p_number6 : " << *p_number6 << std::endl; // Junk value

    // Remember to release any dynamically allocated piece of memory
    delete p_number6;
    delete p_number6; // Anything can happen
    p_number6 = nullptr;

    int *p_number8 = new int;
    delete p_number8;
    delete p_number8; // Anything can happen

    std::cout << "After deleting twice " << std::endl;

    
*/