#include<iostream>
using namespace std;
class stduent
{
private:
   
public:
    string name;
    void print()
    {
        cout<<"the student name is \n"<<name<<endl;
    }
};
int main()
{
    stduent obj1;
    obj1.name="Harsha";
    obj1.print();

}