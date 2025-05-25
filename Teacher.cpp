#include <iostream>
#include "Person.h"
#include <string>
using namespace std;


    Teacher::Teacher()
    {
    joinYear=0;
    course=" ";
    }
    Teacher::Teacher(string i, string n, string g, string id_C, string p, int jY, string c)
    :Persion::persion(i,n,g,c,p)
    {
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
    cout<<"入职年份"<<joinyear<<endl;
    cout<<"所授课程"<<course<<endl;
    }
