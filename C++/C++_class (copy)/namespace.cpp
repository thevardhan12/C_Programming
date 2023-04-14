#include<iostream>
using namespace std;
namespace global
{
    double x = 15.5;
}
namespace global1
{
    float x1 = 5.5;
}

int main()
{
    using namespace global;
    using namespace global1;
//    int x = 10;
    cout << x1 << endl;
//    cout << global1::x << endl;
}
