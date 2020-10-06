#include <iostream>
#include <cmath>

int multi(int x, int y)
{
    return x * y;
}

void print(int x, int y)
{
    int number = multi(x, y);
    std::cout << x << " multiplied by " << y << " is " << number << ".\n";
}

int main()
{
    int x, y;
    std::cout << "Number 1: ";
    std::cin >> x;
    std::cout << "Number 2: ";
    std::cin >> y;
    print(x, y);
}