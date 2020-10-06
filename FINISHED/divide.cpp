#include <iostream>
#include <cmath>

int divide(int x, int y)
{
    return x / y;
}

void answer(int x, int y)
{
    int number = divide(x, y);

    std::cout << x << " divided by " << y << " is " << number << ".\n";
}

int main()
{
    int x, y;

    std::cout << "Whats the number to be divided?: ";
    std::cin >> x;

    std::cout << "Whats the number to divide with?: ";
    std::cin >> y;

    answer(x, y);
}