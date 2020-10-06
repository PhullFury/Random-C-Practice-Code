#include <iostream>
#include <string>

class User
{
    static int user_count;
    std::string status = "Gold";
    
    public:
        static int get_user_count()
        {
            return user_count;
        }

        std::string first_name;
        std::string last_name;
        std::string get_stauts()
        {
            return status;
        }

        void set_status(std::string status)
        {
            if(status == "Gold" || status == "Silver" || status == "Bronze")
            {
                this->status = status;
            }
            else
            {
                this->status = "No Status";
            }
            
        }

        User()
        {
            user_count++;
        }

        User(std::string first_name, std::string last_name)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            user_count++;
        }

        ~User()
        {
            user_count--;
        }
};

int User::user_count = 0;

std::ostream& operator << (std::ostream& output, User user)
{
    output << "First name: " << user.first_name << "\nLast name: " << user.last_name;
    return output;
}

std::istream& operator >> (std::istream &input, User &user)
{
    input >> user.first_name >> user.last_name;
}

int main()
{
    User user;
    std::cin >> user;
    std::cout << user << std::endl;
}
