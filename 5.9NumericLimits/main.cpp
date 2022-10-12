#include <iostream>
#include <limits>

int main(){

    std::cout << "The range for short is from " << std::numeric_limits<short>::min() << " to "
        << std::numeric_limits<short>::max() << std::endl;

    std::cout << "The range for unsigned short is from " << std::numeric_limits<unsigned short>::min() << " to "
        << std::numeric_limits<unsigned short>::max() << std::endl;

    std::cout << "The range for int is from " << std::numeric_limits<int>::min() << " to "
        << std::numeric_limits<int>::max() << std::endl;

    std::cout << "The range for unsigned int is from " << std::numeric_limits<unsigned int>::min() << " to "
        << std::numeric_limits<unsigned int>::max() << std::endl;

    std::cout << "The range for long is from " << std::numeric_limits<long>::min() << " to "
        << std::numeric_limits<long>::max() << std::endl;

    std::cout << "The range for float is from " << std::numeric_limits<float>::min() << " to "
        << std::numeric_limits<float>::max() << std::endl;

    std::cout << "The range for double is from " << std::numeric_limits<double>::min() << " to "
        << std::numeric_limits<double>::max() << std::endl;

    std::cout << "The range for long double is from " << std::numeric_limits<long double>::min() << " to "
        << std::numeric_limits<long double>::max() << std::endl;


    // Other facilities
    // More info : https://en.cppreference.com/w/cpp/types/numeric_limits 
    std::cout << "int is signed : "  << std::numeric_limits<int>::is_signed << std::endl;
    std::cout << "int digits : "  << std::numeric_limits<int>::digits << std::endl;

    return 0;
}

/*

#include <limits>


std::numeric_limits<T>::min()

std::numeric_limits<T>::max()

std::numeric_limits<T>::lowest()


*/