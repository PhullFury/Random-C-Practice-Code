#ifndef TEACHER_H
#define TECHER_H

#include <vector>
#include <string>
#include "user.h"

class Teacher : public User
{
    public:
        std::vector<std::string> class_teaching;
        void output();
}

#endif