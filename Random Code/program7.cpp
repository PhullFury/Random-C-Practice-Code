#include <iostream>
#include <string>

class User
{
    std::string role = "Worker";
    public:
        std::string first_name;
        std::string last_name;
        std::string get_role()
        {
            return role;
        }

        void set_role(std::string role)
        {
            if(role == "Leader" || role == "Merchant" || role == "Worker")
            {
                this->role = role;
            }
            else
            {
                this->role = "This role is N/A.";
            }
        }
};

std::ostream& operator << (std::ostream &output, User user)
{
    output << "First name: " << user.first_name << "\nLast name: " << user.last_name << std::endl;
    return output;
}

std::istream& operator >> (std::istream &input, User &user)
{
    input >> user.first_name >> user.last_name;
}

int main()
{
    User user;
    std::cout << "Please write your name: ";
    std::cin >> user;

    std::cout << "Please enter your role(NO CUSTOM ROLE ALLOWED): ";
    std::string input;
    std::cin >> input;
    user.set_role(input);

    int option;

    do
    {
        std::cout << "Please  choice a option:\n" << "0. EXIT\n" << "1. VEIW INFORMATION\n";
        std::cin >> option;
        switch(option)
        {
            case 0:
                std::cout << "Thanks for your input.";
                return 0;
            case 1:
                std::cout << std::endl << user << "Role: " << user.get_role() << "\n\n";
        }
    } while (option != 0);
}