#ifndef MANAGEMENTSYSTEM_H
#define MANAGEMENTSYSTEM_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "Person.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

class ManagementSystem :public Person
{
public:
     ~ManagementSystem();

     void addTeacher();
     void addStudent();

     void addGrade();

     void queryInfo();

     void deletePerson();

     void showMenu();

private:
    vector<Person*> people; 
};

#endif // MANAGEMENTSYSTEM_H

