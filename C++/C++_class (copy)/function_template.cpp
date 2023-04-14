#include <iostream>

using namespace std;
template <typename T, typename U>
U add(T n1, U n2)
{
    return n1 + n2;
}
int main()
{
    string s1 = "hello";
    string s2 = "world";
    cout << add(5, 10) << endl;
    cout << add(5.5, 10.5) << endl;
    cout << add(5, 10.5) << endl;
    cout << add(s1, s2) << endl;
//    cout << add("hello", "world") << endl;

    return 0;
}

