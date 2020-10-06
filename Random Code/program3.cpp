#include <iostream>
#include <vector>
#include <string>

void print_vector(std::vector<std::string> data)
{
    std::cout << "Your lettters are ";
    for(int i = 0; i < 6; i++)
    {
        std::cout << data[i];
    }  
}

int main()
{
    std::vector<std::string> data;
    std::cout << "Enter 6 letter:" << std::endl;

    while(data.size() < 6)
    {
        std::string input;
        std::cin >> input;
        data.push_back(input);
    }

    print_vector(data);
}