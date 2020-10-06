#include <iostream>
#include <string>

int main()
{
    std::string curse = "What the hell?";
    curse.replace(curse.find("hell"), 4, "heck");
    //find will find the mentioned characters and return their index number which is useful for cencoring,etc.
    std::cout << curse << std::endl;

    std::cout << curse.substr(5, 2) << std::endl;
    //grabs part of string
    //first value is index no.
    //second is no. of char to grab

    std::cout << curse.find_first_of("aeiou") << std::endl;
    //finds the char and gives the no. lof said char

    if(curse == "What the heck?") std::cout << "Same" << std::endl;
    //to check if strings are equal
}