#include <iostream>
#include <cmath>

int program(int a, int x, int y, int z)
{
    return a + x - y * z;
}

void ans(int a, int x, int y, int z)
{
    int num = program(a, x, y, z);
    std::cout << a << " plus " << x << " minus " << y << " into " << z << " gives " << num << ".\n";
}

int main()
{
    int a, x, y, z;
    
    std::cout << "What's the first number?: ";
    std::cin >> a;

    std::cout << "What's the second number?: ";
    std::cin >> x;

    std::cout << "What's the third number?: ";
    std::cin >> y;

    std::cout << "What's the fourth number?: ";
    std::cin >> z;

    ans(a, x, y, z);
}