#include <iostream>
#include <cmath>

int add(int x, int y)
{
    return x + y;
}

void answer(int x, int y)
{
    int num = add(x, y);
    std::cout << x << " plus " << y << " gives " << num << ".\n";
}

int main()
{
    int x, y;

    std::cout << "Number 1: ";
    std::cin >> x;

    std::cout << "Number 2: ";
    std::cin >> y;

    answer(x, y);
}