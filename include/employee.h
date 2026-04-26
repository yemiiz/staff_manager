#pragma once
#include <iostream>
using namespace std;

#include "worker.h"

class Employee : public Worker  // 重点！！
{
public:
    //构造函数
    Employee(int id, string name, int deptId);

    //显示个人信息
    void showInfo();    //virtual可删可不删， = 0 要删除

    //获取岗位名称
    virtual string getDeptName();
};
