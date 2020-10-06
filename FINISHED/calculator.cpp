#include <iostream>
#include <string>

int main()
{
    int x;
    int y;
    int ans;
        
    std::string z;

    std::cout << "Number 1: ";
    std::cin >> x;

    std::cout << "Number 2: ";
    std::cin >> y;

    std::cout << "What so you want to do with the numbers?(multi, add, sub, div): ";
    std::cin >> z;

    if(z == "multi")
    {
        ans = x * y;
        std::cout << "Your answer is: " << ans << std::endl;
    }
    else if(z == "add")
    {
        ans = x + y;
        std::cout << "Your answer is: " << ans << std::endl;
    }
    else if(z == "sub")
    {
        ans = x - y;
        std::cout << "Your answer is: " << ans << std::endl;
    }
    else if(z == "div")
    {
        ans = x / y;
        std::cout << "Your answer is: " << ans << std::endl;
    }

    if(ans == 69 || ans == 420)
    {
        std::cout << "Nice!";
    }
}