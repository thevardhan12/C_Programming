#include<iostream>
using namespace std;
class A
{
    int x, y, z;
    public:
    A():x(0), y(0), z(0){}
    friend class B;
};
class B
{
    public:
	void display(A &obj)
	{
	    cout << obj.x << endl;
	    cout << obj.y << endl;
	    cout << obj.z << endl;
	}
	void display1(A &obj)
	{
	    cout << obj.x << endl;
	    cout << obj.y << endl;
	    cout << obj.z << endl;
	}
};
int main()
{
    A a;
    B b;
    b.display(a);
    b.display1(a);
}

