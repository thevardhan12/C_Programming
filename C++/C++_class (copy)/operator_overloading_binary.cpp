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
    Length operator +(Length &operand)
    {
	Length obj;
	obj.feet = feet + operand.feet;
	obj.inches = inches + operand.inches;
	return obj;
    }
};
int main()
{
    Length L1(5, 10);
    Length L2(1,2);
    Length L3 = L1 + L2;
    L1.display();
    L2.display();
    L3.display();
}











