/*项目功能： 1.教师信息管理功能     添加教师的学工号、姓名、性别、入职时的年份、所教授的课程、身份证号码以及手机号码等信息。
2.学生信息管理功能 添加学生的学号、姓名、性别、入学时的年份、所学习的专业、身份证号码以及手机号码等信息。
3.学生成绩管理功能 在学生的信息已经添加的基础之上，将学生的一个学期所学课程的期末成绩添加入其中，并计算出平均成绩。  
结果展示:当通过查询面板输入教师的学工号时，显示出教师的相关信息。当输入学生的信息时，显示出学生的相关信息以及各科成绩和平均成绩
*/
/*使用技术：封装、继承、多态、STL容器等
*/
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "Person.cpp"
#include "Student.cpp"
#include "Teacher.cpp"
#include "ManagementSystem.cpp"

using namespace std;
int main(){
    ManagementSystem m;
    m.showMenu();

    return 0;
}