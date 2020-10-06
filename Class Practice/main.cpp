#include <iostream>
#include <string>
#include "teacher.h"
#include "user.h"

int main()
{
    User u1;
    Teacher teacher;
    User& u2 = teacher;
    u1.output();
    u2.output();
    teacher.first_name = "Harman";
    teacher.last_name = "Phull";
    u1.first_name = "Param";
    u1.last_name = "Preet";

    std::cout << u1 << "\n\n" << teacher;
}