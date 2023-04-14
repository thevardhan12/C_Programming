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
	Base(int x, int y)
	{
	    m_private = 10;
	    m_protected = x;
	    m_public = y;
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
	Pub(int n1, int n2, int n3, int n4):Base (n3, n4), a(n1), b(n2) 
	//child constructor calls the parent constructor defaultly
	{
	    cout << "from pub class\n";
	}
	void display()
	{
	    cout << "m_public = " << m_public << endl;
	    cout << "m_protected = " << m_protected << endl;
	    cout << "a = " << a << endl;
	    cout << "b = " << b << endl;
	}
};
int main()
{
//    Base base;
    Pub pub(1, 2, 3, 4);
    pub.display();
}












