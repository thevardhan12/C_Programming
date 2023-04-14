#include<iostream>
using namespace std;
class Test
{
    public:
	int a,b;
	int *ptr;
	Test(int x = 0, int y = 0, int z = 0);
	Test(Test &obj); //constructor overloading
	void print_values();
};
void Test::print_values()
{
    cout << "a = " << a << ", b = " << b << ", *ptr = " << *ptr << endl;
}
Test::Test(int x, int y, int z)
{
    a = x;
    b = y;
    ptr = new int;
    *ptr = z;
    cout << "inside para constructor\n";
}
Test::Test(Test &obj)
{
    a = obj.a;
    b = obj.b;
//    ptr = new int;
//    *ptr = *obj.ptr;
    ptr = obj.ptr;
}
int main()
{
    Test obj1(1,2,3);
    Test obj2 = obj1;
    obj1.print_values();
    obj2.print_values();
    *obj2.ptr = 10;
    obj1.print_values();
    obj2.print_values();
}






