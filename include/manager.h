#pragma once
#include "worker.h"

class manager:public Worker
{
public:
    //构造函数
    manager(int id, string name, int deptId);

    //显示个人信息
    virtual void showInfo();    //virtual可删可不删， = 0 要删除

    //获取岗位名称
    virtual string getDeptName();
};