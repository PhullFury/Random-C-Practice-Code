#include <iostream>
#include <string>

int main()
{
    int fact;
    std::cout << "Write the number you want the factorial of: ";
    std::cin >> fact;
    int factorial = fact;
    int i = factorial - 1;
    while(i > 1)
    {
        factorial *= i;
        i--;
    }
    std::cout << "Factorial of " << fact << " is: " << factorial << std::endl;
}