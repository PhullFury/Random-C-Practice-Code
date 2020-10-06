#include <iostream>
#include <string>

int main()
{
    std::cout << "You have 2 options: " << std::endl;
    std::cout << "1. Go North" << std::endl;
    std::cout << "2. Go West" << std::endl;
    int choice_1;
    std::cin >> choice_1;
    if(choice_1 == 1)
    {
        std::cout << "You travel north.";
    }
    else
    {
        std::cout << "You travel west.";
    }
}