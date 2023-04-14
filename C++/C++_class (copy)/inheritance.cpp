#include<iostream>
using namespace std;
class Base
{
    private:
	int m_private;
    protected:
	int m_protected;
    public:
	int m_public;
	Base()
	{
	    m_private = 10;
	    m_protected = 20;
	    m_public = 30;
	    cout << "from base class\n";
	}
};
class Pub:public Base  //public inheritance
{
    private:
	int a;
    protected:
	int b;
    public:
	Pub() //child constructor calls the parent constructor defaultly
	{
	    m_public = 1;  
	    // okay : m_public is inherited as public
//	    m_private = 2; 
	    // not okay : m_private is inherited but not accessible in child class
	    m_protected = 3;
	    // okay : m_protected is inherited as protected
	    cout << "from pub class\n";
	}
};
int main()
{
//    Base base;
    Pub pub;
}











