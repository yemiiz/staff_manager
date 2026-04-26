#include "employee.h"

Employee::Employee(int id, string name, int deptId)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DeptId = deptId;
}
void Employee::showInfo()
{
    cout << "职工编号：" << this->m_Id
         << "  职工姓名：" << this->m_Name
         << "  部门编号：" << this->m_DeptId
         << "  岗位名称：" << this->getDeptName()
         << "  岗位职责：完成经理交代的任务"
         << endl;
}
string Employee::getDeptName()
{
    return string("员工");
}
