#include <iostream>

using namespace std;

// Function Overloading
int add(int n1, int n2)
{
    return n1 + n2;
}
double add(double n1, double n2)
{
    return n1 + n2;
}
string add(string s1, string s2)
{
    // Operator Overloading
    return s1 + s2;
}

int main()
{
    cout << add(5, 10) << endl;
    cout << add(5.5, 10.5) << endl;
//    cout << add(3.5f, 6.5f) << endl;
    cout << add("Hell", "o") << endl;

    return 0;
}

