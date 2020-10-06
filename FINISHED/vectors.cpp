#include <iostream>
#include <vector>

void print(std::vector<int> data)
{
    for(int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << "\n";
}

int main()
{
    std::vector<int> data = {1, 2, 3};
    data.push_back(12);
    data.pop_back();
    print(data);
}