#pragma once
#include "employee.h"

class boss:public Worker
{
public:
    boss(int id, string name, int deptId);
    virtual void showInfo() = 0;
    virtual string getDeptName() = 0;
};