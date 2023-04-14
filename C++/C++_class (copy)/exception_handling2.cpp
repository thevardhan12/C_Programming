#include<iostream>
using namespace std;
int main()
{
    int a, b;
    double c, d;
    cout << "enter two integer values\n";
    cin >> a >> b;
    cout << "enter two double values\n";
    cin >> c >> d;
    try
    {
	if(b == 0)
	    throw b;
	else
	    cout << "res = " << a/b << endl;
	if(d == 0)
	    throw d;
	else
	    cout << "res = " << c/d << endl;
    }
    catch(int x)
    {
	cout << "caught int divide_by_zero error" << " b : " << x << endl;
    }
    catch(double x)
    {
	cout << "caught double divide_by_zero error" << " d : " << x << endl;
    }
    catch(...) //default catch, should be at last
    {
	cout << "caught divide_by_zero error" << endl;
    }
}















