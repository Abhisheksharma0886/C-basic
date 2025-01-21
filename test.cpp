// check the user input bumber is positive, negative or equal to zero in c++

#include <iostream>

// main function start here

int main() {

// Local variables declaration

    int number;
    
    std::cout << "Enter an integer: ";
    std::cin >> number;

// if else statements here to check the number is positive, negative, or equal to zero.
    
    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }   
    return 0;
}