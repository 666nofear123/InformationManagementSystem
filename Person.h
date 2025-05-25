#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(string i, string n, string g, string id_C, string p);

   virtual ~Person();

   void setId(string i);
   void setName(string n);
   void setGender(string g);
   void setIdCard(string id_C);
   void setPhone(string p);

   string getId() const;
   string getName() const;
   string getGender() const;
   string getIdCard() const;
   string getPhone() const;
   
   virtual void display();
   
protected:   //子类的成员函数会调用这些量，所以设为protected
    string id;
    string name;
    string gender;
    string id_Card;
    string phone;
};

#endif // PERSON_H
