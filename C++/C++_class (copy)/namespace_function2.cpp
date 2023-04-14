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
    void my_fun()
    {
	cout << "my_fun from extended global namespace\n";
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
    global::my_fun();
    global::inside::fun();
}


