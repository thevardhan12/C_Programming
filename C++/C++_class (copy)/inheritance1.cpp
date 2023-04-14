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
	void display()
	{
	    cout << "m_public = " << m_public << endl;
	    cout << "m_protected = " << m_protected << endl;
	}
};
int main()
{
//    Base base;
    Pub pub;
    pub.display();
}












