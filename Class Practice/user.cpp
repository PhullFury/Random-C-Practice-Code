#include <iostream>
#include <string>
#include "user.h"

    
        std::string User::get_status()
        {
            return status;
        }
        void User::set_status(std::string status)
        {
            if(status == "Gold" || status == "Silver" || status == "Bronze")
            {
                this->status = status;
            }
            else
            {
                std::cout << "Invalid Status.";
            }
        }
        void User::output()
        {
            std::cout << "I am a user.\n";
        }


std::ostream& operator << (std::ostream& output, User &user)
{
    output << "First name: " << user.first_name << "\nLast name: " << user.last_name;
}

std::istream& operator >> (std::istream& input, User &user)
{
    input >> user.first_name >> user.last_name;
}