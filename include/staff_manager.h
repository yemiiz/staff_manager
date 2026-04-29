#pragma once
#include <iostream>
#include "worker.h"
using namespace std;

class staff_manager
{
public:
    staff_manager();

    void show_menu();

    int m_EmpNum; //职工人数

    Worker **m_EmpArray; //职工数组指针

    void add_Emp();

    ~staff_manager();
};