#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter two values\n";
    cin >> a >> b;
    try
    {
	if(b == 0)
	    throw b;
    }
    }
    catch(int x)
    {
	cout << "caught divide_by_zero error" << " b : " << x << endl;
	return 1;
    }
    cout << "res = " << a/b << endl;
}




