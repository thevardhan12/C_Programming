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
    Length operator ++()
    {
	Length obj;
	obj.feet = ++feet;
	obj.inches = ++inches;
	return obj;
    }
    Length operator ++(int)
    {
	Length obj;
	obj.feet = feet++;
	obj.inches = inches++;
	return obj;
    }
};
int main()
{
    Length L1(5, 10);
    L1.display();
    Length L2 = ++L1;
    L1.display();
    L2.display();
}
