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
    //emertxe obj1(01,"Mubeen"); dont create objectt for parent
    mentor obj2(200,"Varshith","class mentor",50000);
    students obj3(202040,"Harsha","C++",'A');
    obj1.display();        //function overriding
    obj2.display();         ////function overriding
    obj3.display();     //function overriding
    /*emertxe *p0=new emertxe;
    mentor *p1=new mentor;
    students *p2=new students;
    p0->display();
    p1->display();
    p2->display();*/


/// dynamic linnking (or)
///late  binding is acheived by virtual keyword to get a runtime polymorphism.



}