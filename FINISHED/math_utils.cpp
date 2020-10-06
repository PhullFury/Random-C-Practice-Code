#include "math_utils.h"

double area(double lenght, double width)
{
    return lenght * width;
}

double area(double lenght)
{
    return lenght * lenght;
}

double area(Rectangle rectangle)
{
    return rectangle.width * rectangle.lenght;
}

double pow(double base, int exp)
{
    double total = 1;
    for(int i = 0; i < exp; i++)
    {
        total *= base;
    }
    return total;
}