#include <iostream>
#include <string>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << "\tb:" << b << "\n";
}

void swap(std::string a, std::string b)
{
    std::string temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << "\tb:" << b << "\n";
}

int main()
{
    int a = 10;
    int b = 20;

    swap(a, b);

    std::string name = "Harman";
    Std::string place = "Jalandhar";

    std::cout << "a: " << a << "\tb:" << b << "\n";
}