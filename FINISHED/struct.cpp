#include <iostream>
#include <string>

struct User
{
    std::string first_name;
    std::string last_name;
    std::string status;
};

int main()
{
    User me;
    me.first_name = "Harman";
    me.last_name = "Phull";
    me.status = "Happy";
}