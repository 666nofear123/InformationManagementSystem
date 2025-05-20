#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
public:
    Person(string i, string n, string g, string id_C, string p);
   virtual ~Person();
   virtual void display();
   string getId() const;
   string getName() const;
   string getGender() const;
   string getIdCard() const;
   string getPhone() const;
   
protected:   //子类的成员函数会调用这些量，所以设为protected
    string id;
    string name;
    string gender;
    string id_Card;
    string phone;
};

#endif // PERSON_H