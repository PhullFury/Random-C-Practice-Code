#include <iostream>
#include <vector>

namespace utilz
{
    void print_vector(std::vector<int> data)
    {
        for(int i = 0; i < data.size(); i++)
        {
            std::cout << data[i] << "\t";
        }
    }
}

int main()
{
    std::vector<int> data = {1, 2, 3};
    utilz::print_vector(data);
}