#include <iostream>
 
void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << "\t";
    }
}
 
int main()
{
    const int SIZE = 10;
    int guesses[SIZE];

    int count = 0;
    
    for(int i = 0; i < SIZE; i++)
    {
        if(std::cin >> guesses[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    
    print_array(guesses, count);

    std::cin.clear();
    std::cin.ignore(10000, '/n');
}