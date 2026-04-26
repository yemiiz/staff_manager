#pragma once
#include <iostream>
#include <string>
using namespace std;

class Worker
{
public:

    //显示个人信息
    virtual void showInfo() = 0;    //纯虚函数，=0表示该函数没有实现，子类必须重写该函数，否则子类也是抽象类

    //获取岗位名称
    virtual string getDeptName() = 0;

    //职工编号
    int m_Id;
    //职工姓名
    string m_Name;
    //部门编号
    int m_DeptId;
};