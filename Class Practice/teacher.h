#ifndef TEACHER_H
#define TEAVHER_H

#include <iostream>
#include <string>
#include "user.h"

class Teacher : public User
{
    public:
        void output();
};

#endif