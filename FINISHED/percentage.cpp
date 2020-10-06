#include <iostream>
#include <cmath>

int percentage(int x, int y)
{
    return x * 100 / y ;
}

void answer(int x, int y)
{
    int num = percentage(x, y);
    std::cout << x << " marks out of " << y << " gives " << num << " percentage.";    
}

int main()
{
    int x;
    int y;

    std::cout << "Marks obtained: ";
    std::cin >> x;

    std::cout << "Total Marks: ";
    std::cin >> y;

    answer(x, y);
}