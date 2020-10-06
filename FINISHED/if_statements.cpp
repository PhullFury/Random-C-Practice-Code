#include <iostream>

int main()
{
    int age = 17;
    if(age < 13) 
    {
        std::cout << "You're not old enough\n";
    }
    else if(age < 19)
    {
        std::cout << "You're almost 19\n";
    }
    else
    {
        std::cout << "False\n";
    }
}