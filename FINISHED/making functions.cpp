#include <iostream>
#include <cmath>


double power(double, int);
//declaration for functions mostly used if a header file is to be made

double power(double base, int exp)
//defintion for functions
//variables used here are disociatted from variables used later ie the variables here anf when the functions is used later can be different
{
    double result = 1;
    for(int i = 0; i < exp; i++)
    {
        result = result * base;
    }
    return result;
    //return is used to return the results for a function which are to be used later
}

int main()
{
    int base, exp;
    std::cout << "Base: ";
    std::cin >> base;
    std::cout << "Exp: ";
    std::cin >> exp;
    std::cout << power(base, exp);
}