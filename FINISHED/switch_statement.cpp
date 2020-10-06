#include <iostream>
#include <string>

int main()
{
    int age;
    std::cout << "What is your age?: ";
    std::cin >> age;
    switch(age)
    {
        case 13:
            std::cout << "Your age is 13\n";
            break;
        case 14:
            std::cout << "Your age is 14\n";
            break;
        default:
            std::cout << "Your are not 13 or 14\n";
            break;
    }
}