#include <iostream>
#include <string>

int main()
{
    std::string greeting = "Hello";
    greeting += " there";
    //adds value to string and changes it

    greeting.append(" there");
    //this does the same ting as +=

    std::cout << greeting.size() << std::endl;

    std::string sup = "Bo";
    sup.insert(2, "rr");
    //this is adds value at mentioned at space

    sup.erase(2, 1);
    //this removes number of characters mentioned
    //first value is position second is no. of characters to remove
    
    sup.pop_back();
    //this removes last character

    sup.replace(2, 1, "o")
    //first vlue is index value
    //second vlue no. of char to be removed
    //third vlue is char to be inserted
}