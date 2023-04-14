#include <iostream>
using namespace std;

template <class T>
T Max(T a, T b)
{
    return a > b ? a : b;
}
int main()
{
    cout << Max(10, 20) << endl;
    cout << Max(1.2, 0.5) << endl;
    cout << Max(10.4f, 5.1f) << endl;
    cout << max('b', 'z') << endl;
    cout << min('b', 'z') << endl;
}
