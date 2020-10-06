#include <iostream>
#include <string>

int main()
{
    std::string greeting = "Hello";
    std::cout << greeting[0] << std::endl;
    //this will print the first letter of string

    std::cout << greeting + " there" << std::endl;

    std::cout << greeting.length() << std::endl;
    //this will tell the lenght of strings

    std::string bro;
    getline(std::cin, bro);
    //getline is used for inputing strings
    std::cout << bro << std::endl;

    
}