#include "staff_manager.h"
#include "employee.h"
#include "worker.h"
int main()
{
    // 测试
    // Worker *worker = new Employee(1, "张三", 1);
    // worker->showInfo();

    staff_manager manager;

    int choice = 0;
    while (true)
    {
        manager.show_menu();
        cout << "请输入您的选择：" << endl;
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "欢迎下次使用！" << endl;
            system("pause");
            exit(0);
            return 0;
        case 1: // 添加员工信息
            break;
        case 2: // 显示员工信息
            break;
        case 3: // 删除员工信息
            break;
        case 4: // 修改员工信息
            break;
        case 5: // 查找员工信息
            break;
        case 6: // 排序员工信息
            break;
        case 7: // 清空员工信息
            break;
        default:
            cout << "输入有误，请重新输入！" << endl;
            break;
        }
    }
    return 0;
}