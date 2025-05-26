#include "ManagementSystem.h"

ManagementSystem::~ManagementSystem() {
    for(auto person : people) {
        delete person; 
    }
}

void ManagementSystem::addTeacher() {
   string i, n, g, ic, p, c;
        int jy;
        cout << "\n输入教师信息：\n"
             << "学工号："; cin >> i;
        cout << "姓名："; cin >> n;
        cout << "性别："; cin >> g;
        cout << "入职年份："; cin >> jy;
        cout << "所教课程："; cin >> c;
        cout << "身份证号："; cin >> ic;
        cout << "手机号："; cin >> p;

        people.push_back(new Teacher(i, n, g, ic, p, jy, c));
    }

void ManagementSystem::addStudent() {
    string i, n, g, m, ic, p;
        int ey;

        cout << "\n输入学生信息：\n"
             << "学号："; cin >> i;
        cout << "姓名："; cin >> n;
        cout << "性别："; cin >> g;
        cout << "入学年份："; cin >> ey;
        cout << "专业："; cin >> m;
        cout << "身份证号："; cin >> ic;
        cout << "手机号："; cin >> p;

        people.push_back(new Student(i, n, g, ic, p, ey, m));
    }

void ManagementSystem::addGrade(){
    string sid;
        cout << "输入学生学号："; cin >> sid;

        for (auto p : people) {
            if (Student* s = dynamic_cast<Student*>(p)) {
                if (s->getId() == sid) {
                    double c, m, e;
                    cout << "输入语文成绩："; cin >> c;
                    cout << "输入数学成绩："; cin >> m;
                    cout << "输入英语成绩："; cin >> e;
                    s->addGrades(c, m, e);
                    cout << "成绩添加成功！\n";
                    return;
                }
            }
        }
        cout << "未找到该学生！\n";
}

void ManagementSystem::queryInfo(){
    string inputID;
        cout << "输入查询ID："; cin >> inputID;

        for (auto p : people) {
            if (p->getId() == inputID) {
                p->display();
                return;
            }
        }
        cout << "未找到相关信息！\n";
}

void ManagementSystem::deletePerson(){
    string delID;
        cout << "请输入要删除的学号或工号：";
        cin >> delID;
        for (auto it = people.begin(); it != people.end(); ++it) {
            if ((*it)->getId() == delID) {
                delete *it;
                people.erase(it);
                cout << "信息已删除！\n";
                return;
            }
        }
        cout << "未找到相关信息，无法删除！\n";
}

void ManagementSystem::showMenu(){
    while (true) {
            cout << "\n教务管理系统\n"
                 << "1. 添加教师\n"
                 << "2. 添加学生\n"
                 << "3. 添加成绩\n"
                 << "4. 信息查询\n"
                 << "5. 删除信息\n"
                 << "6. 退出系统\n"
                 << "请选择系统：";

            int choice;
            cin >> choice;

            switch (choice) {
                case 1: addTeacher(); break;
                case 2: addStudent(); break;
                case 3: addGrade(); break;
                case 4: queryInfo(); break;
                case 5: deletePerson(); break;
                case 6: return;
                default: cout << "无效输入！\n";
            }
        }
    }
