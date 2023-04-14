#include<iostream>
using namespace std;
int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int r_swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << "After swapping x = " << x << " y = " << y << endl;
    swap(&x, &y);
    cout << "After swapping x = " << x << " y = " << y << endl;
    r_swap(x, y);
    cout << "After swapping x = " << x << " y = " << y << endl;
}
