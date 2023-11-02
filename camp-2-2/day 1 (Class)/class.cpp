#include <bits/stdc++.h>
using namespace std;
class Person{
public:
    string name;
};
class Student:public Person{
public:
    int id;
    float sub1=4,sub2=4,sub3=4,sub4=4;
    Student (string name,int id){
        this->name = name;
        this->id = id;
    }
    float getName(){cout<<name<<endl;}
    float getGPA(){cout << (sub1+sub2+sub3+sub4) / 4 << endl;}
    float getID(){cout << id << endl;}
};
int main(){
    string name = "Kop";
    int id=1234;
    Student Kop = Student(name,id);
    Kop.getName();
    Kop.getID();
    Kop.getGPA();
}


