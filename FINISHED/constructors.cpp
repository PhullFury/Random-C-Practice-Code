#include <iostream>
#include <string>
#include <vector>

class User
{
    std::string status = "Gold";

    public:
        std::string first_name;
        std::string last_name;
        std::string get_stauts()
        {
            return status;
        }
        User(std::string first_name, std::string last_name)
        {
            this->first_name = first_name;
            this->last_name = last_name;
        }
        ~User()
        {
            std::cout << "Decontrunctor\n";
        }
};

int main()
{
    User user("Harman", "Phull");
    std::cout << user.first_name;
}