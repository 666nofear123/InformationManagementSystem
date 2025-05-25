#include "Person.h"
#include "Teacher.h"
#include <iostream>
using namespace std;


    Teacher::Teacher()
    {
       joinYear=0;
       course=" ";
    }
    Teacher::Teacher(string i, string n, string g, string id_C, string p, int jY, string c)
    {
        setId(i);
        setName(n);
        setGender(g);
        setIdCard(id_C);
        setPhone(p);
        setJoinYear(jY);
        setCourse(c);
    }

    Teacher::~Teacher()
    {

    }

    void Teacher::setJoinYear(int jY)
    {
         joinYear=jY;
    }
    void Teacher::setCourse(string c)
    {
         course=c;
    }

    int Teacher::getJoinYear() const
    {
        return joinYear;
    }
    string Teacher::getCourse() const
    {
        return course;
    }

    void Teacher::display()
    {
    cout << "\n教师信息：\n"
             << "学工号：" << id << "\n"
             << "姓名：" << name << "\n"
             << "性别：" << gender << "\n"
             << "入职年份：" << joinYear << "\n"
             << "所教课程："<< course << "\n"
             << "身份证号：" << id_Card << "\n"
             << "手机号：" << phone << endl;
    }
