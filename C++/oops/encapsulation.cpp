#include<iostream>
using namespace std;
class encapsulation
{
    private:
    int x;
    protected:
    int y;                                              //example for abstraction AND encpasulation.
    public:
    int z;
    void setdata(int x,int y,int z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void getdata()
    {
        cout<<x<<endl;
        cout<<z<<endl;
        cout<<y<<endl;
    }
};
int main()
{

    encapsulation obj;
    obj.setdata(10,20,30);
    obj.getdata();
}