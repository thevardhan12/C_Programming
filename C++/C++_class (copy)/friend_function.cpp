#include<iostream>
using namespace std;
class A
{
    int x, y, z;
    public:
    A():x(0), y(0), z(0){}
    friend void display(A &);
};
void display(A &obj)
{
    cout << obj.x << endl;
    cout << obj.y << endl;
    cout << obj.z << endl;
}
int main()
{
    A a;
    display(a);
}

