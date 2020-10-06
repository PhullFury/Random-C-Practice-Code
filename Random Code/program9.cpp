#include <iostream>
#include <cstdlib>//necessary in a rng
#include <ctime>//necessary in a rng
#include <vector>

int main()
{
    srand(time(NULL));
    int random = rand(/*number put in here is the starting number*/) % 11;//this is the max value you want plus 1

    std::cout << random;
}