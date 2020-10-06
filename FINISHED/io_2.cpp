#include <iostream> 
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::ifstream file ("lol.txt");

    std::vector<std::string> names;

    std::string input;

    while( file >> input)
    {
        names.push_back(input);
    }

    for(std::string name : names)
    {
        std::cout << name << std::endl;
    }
}