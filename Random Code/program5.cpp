#include <iostream>
#include <vector>
#include <string>

void print(std::vector<int> data, int number)
{
    std::cout << "Your numbers are ";
    int size = number - 1;
    for(int i = 0; i < number; i++)
    {
        if(i < size)
        {
            std::cout << data[i] << ", ";
        }
        else
        {
            std::cout << data[i] << ".\n";
        }
    }
}

int main()
{
    std::vector<int> data;

    int number;
    std::cout << "How many numbers do you want to enter?: ";
    std::cin >> number;
    std::cout << "Write your numbers:\n";

    while(data.size() < number)
    {
        int input;
        std::cin >> input;
        data.push_back(input);
    }
    print(data, number);
}