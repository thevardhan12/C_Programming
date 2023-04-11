#include<iostream>
using namespace std;
//function overloading example
class function_overloading
{
private:
    int a;
    int b;
public:
    function_overloading(int a,int b);
    void display();
};
function_overloading::function_overloading(int a,int b)
{
    this->a=a;
    this->b=b;

}


