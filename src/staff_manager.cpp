#include <staff_manager.h>
#include <employee.h>
#include "manager.h"
#include "boss.h"
staff_manager::staff_manager()
{
    this->m_EmpNum = 0;
    this->m_EmpArray = NULL;
}

void staff_manager::show_menu()
{
    cout << "***********************************" << endl;
    cout << "********欢迎使用员工管理系统*********" << endl;
    cout << "***********0.退出系统程序************" << endl;
    cout << "***********1.添加员工信息************" << endl;
    cout << "***********2.显示员工信息************" << endl;
    cout << "***********3.删除员工信息************" << endl;
    cout << "***********4.修改员工信息************" << endl;
    cout << "***********5.查找员工信息************" << endl;
    cout << "***********6.排序员工信息************" << endl;
    cout << "***********7.清空员工信息************" << endl;
    cout << "***********************************" << endl;
}

void staff_manager::add_Emp()
{
    cout << "请输入添加的职工数量：" << endl;
    int addNum = 0;
    cin >> addNum;
    if(addNum > 0)
    {
        int newsize = this->m_EmpNum + addNum;

        Worker ** newspace = new Worker *[newsize];

        if(this->m_EmpArray != NULL)
        {
            //原来数据拷贝
            for (int i = 0; i < this->m_EmpNum; i++)
            {
                newspace[i] = this->m_EmpArray[i];
            }

            //添加新数据
            for (int i = 0; i < addNum; i++)
            {
                int id;
                string name;
                int select;

                cout << "请输入第" << i + 1 << "个新职工的编号：" << endl;
                cin >> id;
                cout << "请输入第" << i + 1 << "个新职工的姓名：" << endl;
                cin >> name;
                cout << "请输入第" << i + 1 << "个新职工的岗位：" << endl;
                cout << "1.员工" << endl;
                cout << "2.经理" << endl;
                cout << "3.老板" << endl;
                cin >> select;

                Worker *worker = NULL;
                switch(select)
                {
                    case 1:
                        worker = new Employee(id, name, 1);     //要include employee.h
                        break;
                    case 2:
                        worker = new manager(id, name, 2);     //要include manager.h
                        break;
                    case 3:
                        worker = new boss(id, name, 3);       //要include boss.h
                        break;
                    default:
                        break;
                }
                //将创建的职工对象，保存到数组中
                newspace[this->m_EmpNum + i] = worker;
            }
        }
        //释放原来空间
        delete[] this->m_EmpArray;
        //更新新空间的指向
        this->m_EmpArray = newspace;
        //更新职工人数
        this->m_EmpNum = newsize;
        //提示添加成功
        cout << "成功添加" << addNum << "名新职工！" << endl;
    }
    else
    {
        cout << "输入有误，请重新输入！" << endl;
    }

    system("pause");
    system("cls");
}

staff_manager::~staff_manager()
{
}