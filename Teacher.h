#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"
#include <string>

class Teacher : public Person{
    public:
    Teacher();
    Teacher(string i, string n, string g, string id_C, string p, int jY, string c);

    ~Teacher();

    void setJoinYear(int jY);
    void setCourse(string c);

    int getJoinYear() const;
    string getCourse() const;

    void display();

    private:
    int joinYear;
    string course;
};
#endif // TEACHER_H