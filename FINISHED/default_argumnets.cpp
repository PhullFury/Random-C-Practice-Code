#include <iostream>

struct Rectangle
{
    double lenght;
    double width;
};

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

int main