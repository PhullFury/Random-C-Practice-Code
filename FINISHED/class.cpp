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
};

int add_user_if_not_exists(std::vector<User> &users, User user)
{
    for(int i = 0; i < users.size(); i++)
    {
        if(users[i].first_name == user.first_name &&
            users[i].last_name == user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

int main()
{
    User user1;
    user1.first_name = "Harman";
    user1.last_name = "Phull";

    User user2;
    user2.first_name = "Harman";
    user2.last_name = "Phull";

    User user3;
    user3.first_name = "Harman";
    user3.last_name = "Phull";

    std::vector<User> users;
    users.push_back(user1);

    std::cout << users[0].first_name << std::endl;
    std::cout << "Satuts: " << me.get_stauts();
}