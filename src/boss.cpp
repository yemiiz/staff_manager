#include "boss.h"

boss::boss(int id, string name, int deptId)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = deptId;
}

void boss::showInfo()
{
    cout << "职工编号：" << this->m_Id
         << "  职工姓名：" << this->m_Name
         << "  部门编号：" << this->m_DeptId
         << "  岗位名称：" << this->getDeptName()
         << "  岗位职责：负责公司战略规划和管理"
         << endl;
}

string boss::getDeptName()
{
    return string("老板");
}
