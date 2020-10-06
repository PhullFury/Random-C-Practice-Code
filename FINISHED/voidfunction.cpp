#include <iostream>
#include <cmath>


double power(double, int);

double power(double base, int exp)
{
    double result = 1;
    for(int i = 0; i < exp; i++)
    {
        result = result * base;
    }
    return result;
}

void print(double base, int exp)
//void functions dont give result but are used to repeat code
{
    double myPower = power(base, exp);
    std::cout << "Your number is " << myPower << ".\n";
}

int main()
{
    double base;
    int exp;
    std::cout << "Base: ";
    std::cin >> base;
    std::cout << "Exp: ";
    std::cin >> exp; 
    print(base, exp); 
}