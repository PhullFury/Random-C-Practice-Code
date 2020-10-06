#include <iostream>

int main()
{
    int request;
    std::cout << "How long do you want to count to: ";
    std::cin >> request;

    int number = 1;

    int count = request + 1;

    for(int i = 0; i < request ; i++)
    {
        std::cout << number << std::endl;
        number = number + 1;
    }
}