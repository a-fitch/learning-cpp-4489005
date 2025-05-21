// Learning C++ 
// Challenge 01_03 Completed
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Please enter your name: " << std::flush;
    std::cin >> str;
    std::cout << "Hello, " << str << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
