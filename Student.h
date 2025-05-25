#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Student : public Person {
public:
    Student();
    Student(string i, string n, string g, string id_C, string p, int eY, string m);
    ~Student();

    void setEnrollYear(int eY);
    void setMajor(string m);

    void addGrades(double c, double m, double e);

    double getAverage() const;

    int getEnrollYear() const;
    string getMajor() const;

    void display();

private:
    int enrollYear;  // 入学年份
    string major;
    double chinese = -1;
    double math = -1;
    double english = -1;
};

#endif // STUDENT_H