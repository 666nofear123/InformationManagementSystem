#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

Student::Student() {
    enrollYear = 0;
    major = " ";
}
Student::Student(string i, string n, string g, string id_C, string p, int gY, string m) {
    setId(i);
    setName(n);
    setGender(g);
    setIdCard(id_C);
    setPhone(p);
    setEnrollYear(gY);
    setMajor(m);
}

Student::~Student() {

}

void Student::setEnrollYear(int eY) {
    enrollYear = eY;
}
void Student::setMajor(string m) {
    major = m;
}

void Student::addGrades(double c, double m, double e) {
    chinese = c;
    math = m;
    english = e;
}

double Student::getAverage() const {
        int cnt = 0;
        double sum = 0.0;
        if (chinese >= 0) { sum += chinese; cnt++; }
        if (math >= 0) { sum += math; cnt++; }
        if (english >= 0) { sum += english; cnt++; }
        return cnt ? sum / cnt : 0.0;
    }

int Student::getEnrollYear() const {
    return enrollYear;
}
string Student::getMajor() const {
    return major;
}

void Student::display() {
        cout << "\n学生信息：\n"
             << "学号：" << id << "\n"
             << "姓名：" << name << "\n"
             << "性别：" << gender << "\n"
             << "入学年份：" << enrollYear << "\n"
             << "专业：" << major << "\n"
             << "身份证号：" << id_Card << "\n"
             << "手机号：" << phone << "\n"
             << "课程学习：\n";
        cout << "语文：" << (chinese >= 0 ? to_string(chinese) : "未录入") << "\n";
        cout << "数学：" << (math >= 0 ? to_string(math) : "未录入") << "\n";
        cout << "英语：" << (english >= 0 ? to_string(english) : "未录入") << "\n";
        cout << "平均成绩：" << getAverage() << endl;
    }