#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
    Test(int a, int x)
    {
	this->a = a;
	b = x;
        cout << this << endl;

    }
};
int main()
{
    Test obj(1,2);
    cout << &obj << endl;
}
