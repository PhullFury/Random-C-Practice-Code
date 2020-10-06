#include <iostream>
#include <cmath>
//include this to use maths functions

int main()
{
    int base, exp;
    std::cout << "Base: ";
    std::cin >> base;
    std::cout << "Exp: ";
    std::cin >> exp;
    double power = pow(base, exp);
    //power function 
    //double is used for big no.s or decimals
    std::cout << power;
}