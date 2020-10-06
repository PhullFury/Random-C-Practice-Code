#include <iostream>
#include <string>

int main()
{
    std::string line = "Hello my name is Harman";
    for(int i = 0; i < line.size(); i++)
    {
        std::cout << line[i];
        if(line [i] == 'o')
        {
            std::cout << "Found o!";
        }
    }
}