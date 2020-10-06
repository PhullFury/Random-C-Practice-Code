#include <iostream>
#include <string>

int main()
{
    std::string ans = "Harman";
    int age_ans = 16;

    std::string guess;
    std::cout << "Guess my name: ";
    std::cin >> guess;

    int age_guess;
    std::cout << "Guess my age";
    std::cin >> age_guess;

    if (guess == ans && age_guess == age_ans)// and- &&, or- ||, not- !(expression), not- expression != expresson
    {
        std::cout << "You got it right\n";
    }
    else
    {
        std::cout << "You are wrong\n";
    }
} 