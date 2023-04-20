#include<iostream>
using namespace std;
class parent
{
    public:
    int x=10;
   virtual void display()
    {
        cout<<"THe vaalue of x is\n "<<x<<endl;
    }
};
class child: public parent
{
    public:
    int x=20;
    void display()
    {
        cout<<"the value of x is \n"<<x<<endl;
    }

};
int main()
{
    parent *par;
    child ch;
    par=&ch;
    par->display();
    parent par2;
    par2.display();
    par->parent::display();

}