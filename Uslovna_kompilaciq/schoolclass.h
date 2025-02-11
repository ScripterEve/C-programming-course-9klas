#include "person.h"
#ifndef SCHOOLCLASS_H_
#define SCHOOLCLASS_H_

struct SchoolClass{
    struct Person students[26];
    char classABC;
    int numberInClass;
    struct Person headteacher;
};
#endif