#include <iostream>
#include <vector>

void print_vector(std::vector<int> data)
{
    std::cout << "Your numbers are ";
    for(int i = 0; i < 6; i++)
    {
        if(i < 5)
        {
            std::cout << data[i] << ", ";
        }
        else
        {
            std::cout << data[i] << "." << std::endl;
        }
    }  
}

int main()
{
    std::vector<int> data;
    std::cout << "Enter 6 numbers:" << std::endl;

    while(data.size() < 6)
    {
        int input;
        std::cin >> input;
        data.push_back(input);
    }

    print_vector(data);
}