#include<iostream>
using namespace std;
namespace global
{
    void fun()
    {
	cout << "fun from global namespace\n";
    }
}
void fun()
{
    cout << "fun from outside namespace\n";
}
namespace global
{
    void fun1()
    {
	cout << "fun1 from global namespace\n";
    }
    namespace inside
    {
	void fun()
	{
	    cout << "fun from inside global namespace\n";
	}
    }
}

int main()
{
    fun();
    global::fun();
    global::fun1();
    global::inside::fun();
}




