#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>

class User
{
    std::string status;
    public:
        std::string first_name;
        std::string last_name;
        std::string get_status();
        void set_status(std::string status);
        virtual void output();
};

std::ostream& operator << (std::ostream& output, User &user);

std::istream& operator >> (std::istream& input, User &user);

#endif 