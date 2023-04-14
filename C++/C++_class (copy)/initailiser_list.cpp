#include <iostream>
using namespace std;

class Test
{
    int x, y;
    public:
    Test(int a, int b);
    void print_details(void);
};
Test::Test(int a, int b):x(a), y(b)
    {
    }
void Test::print_details(void)
{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}
int main()
{
    Test obj(10,20);
    obj.print_details();
}




