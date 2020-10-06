#include <iostream>
#include <string>

class User
{
    std::string status;
    public:
        std::string first_name;
        std::string last_name;

        std::string get_status()
        {
            return status;
        }

        void set_status(std::string status)
        {
            if(status == "Diamond" || status == "Emerald" || status == "Gold")
            {
                this->status = status;
            }
            else
            {
                std::cout << "Invalid status.\n";
            }
        }
};

std::ostream& operator << (std::ostream &output, User &user)
{
    output << "\nFirst name: " << user.first_name << "\nLast name: " << user.last_name;
    return output;
}

std::istream& operator >> (std::istream &input, User &user)
{
    input >> user.first_name >> user.last_name;
}

int main()
{
    User user;
    std::cout << "Please enter your name: ";
    std::cin >> user;

    std::string temp;
    std::cout << "Please enter your status: ";
    std::cin >> temp;
    user.set_status(temp);

    int choice;

    std::cout << "\nWhat do you want to do now?\n" << "0. Exit\n" << "1. View Information\n";
    std::cin >> choice;

    if(choice == 1)
    {
        std::cout << user << "\nStatus: " << user.get_status(); 
    }
    else
    {
        std::cout << "Thanks for your information.";
    }
    
}