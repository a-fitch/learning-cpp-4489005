// Learning C++ 
// Exercise 02_06 Completed
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 5000
// #define DEBUG to add comment to result, otherwise hidden

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    std::cout << "[About to perform the addition]" << std::endl;
#endif
    large += small; // or "large = large + small;"
    std::cout << "The large integer is " << large << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
