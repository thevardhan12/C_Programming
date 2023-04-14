#include<iostream>
using namespace std;
class Length
{
    int feet;
    int inches;
    public:
    Length(int f = 0, int i = 0):feet(f), inches(i){}
    void display()
    {
	cout << "F : " << feet << " I : " << inches << endl;
    }
    bool operator ==(Length &operand)
    {
	if(feet == operand.feet && inches == operand.inches)
	    return true;
	else
	    return false;
    }
};
int main()
{
    Length L1(5, 10);
    Length L2(5, 10);
    if(L1 == L2)
	cout << "equal\n";
    else
	cout << "not equal\n";
}














