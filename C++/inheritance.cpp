#include<iostream>
#include"inheitance.h"
using namespace std;
void students:: display(void)
{
        cout<<"Id="<<id<<endl;
        cout<<"name="<<name<<endl;
        cout<<"course="<<course<<endl;
        cout<<"grade="<<grade<<endl;

}
void mentor :: display(void)
{
    cout<<"Id="<<id<<endl;
    cout<<"name="<<name<<endl;
    cout<<"rank="<<rank<<endl;
    cout<<"salary="<<salary<<endl;
}
students::students(int id,string name,string course,char grade):emertxe(id,name)
{
    this->id=id;
    this->name=name;
    this->course=course;
    this->grade=grade;
}
mentor::mentor(int id,string name,string rank,int salary):emertxe(id,name)
{
    this->id=id;
    this->name=name;
    this->rank=rank;
    this->salary=salary;

}
int main()
{
    emertxe obj1(01,"Mubeen");
    mentor obj2(200,"Varshith","class mentor",50000);
    students obj3(202040,"Harsha","C++",'A');
    obj1.display();        //function overriding
    obj2.display();
    obj3.display();


}