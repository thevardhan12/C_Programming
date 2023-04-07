#include<iostream>
using namespace std;
class emertxe
{
protected:
int id;
string name;
public:
emertxe(int id,string name)
{
    this->id=id;
    this->name=name;
}
virtual void display()=0;/// this is pure virtual functions
/*void display()
{
    cout<< "id="<<id << endl;
    cout<<"name="<<name<<endl;
}*/
};
class students : public emertxe
{
    protected:
    string course;
    char grade;
    public:
    students(int id,string name,string course,char grade);
    virtual void display();
};
class mentor : public emertxe
{
    protected:
    string rank;
    int salary;
    public:
    mentor(int id,string name,string rank,int salary);
    void display();
};


