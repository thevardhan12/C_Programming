#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    A():x(0){}
    friend class B;
};
class B
{
    public:
	void display(A &obj)
	{
	    cout << obj.x << endl;
	}
};
int main()
{
    A a;
    B b;
    b.display(a);
}




