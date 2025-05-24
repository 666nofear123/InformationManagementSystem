#include<iostream>
#include"Person.h"
using namespace std;

Person::Person()   // 默认构造函数
{
    	id = " ";
      name = " ";
      gender = " ";
      id_Card = " ";
      phone = " ";
}
Person::Person(string i, string n, string g, string id_C, string p)  // 含参构造函数
{
  setId(i);
  setName(n);
  setGender(g);
  setIdCard(id_C);
  setPhone(p);
}
 Person::~Person()  // 析构函数
{
   	
}

//set函数
   void Person::setId(string i)
   {
   	  id = i;
   }
   void Person::setName(string n)
   {
   	  name = n;
   }
   void Person::setGender(string g)
   {
   	     gender = g;

   }
   void Person::setIdCard(string id_C)
   {
   	     id_Card = id_C;

   }
   void Person::setPhone(string p)
   {
   	     phone = p;

   }
  
//get函数
   string Person::getId() const
   {
   	 return id;
   }
   string Person::getName() const
   {
   	 return name;
   }
   string Person::getGender() const
   {
   	 return gender;
   }
   string Person::getIdCard() const
   {
   	 return id_Card;
   }
   string Person::getPhone() const
   {
   	 return phone;
   }
   
   //显示函数
   void Person::display()
   {
   	 cout<< "ID:" << id <<endl;
     cout<< "姓名:" << name <<endl;
     cout<< "性别:" << gender <<endl;
     cout<< "身份证号:" << id_Card <<endl;
     cout<< "手机号:" << phone <<endl;
    }
   