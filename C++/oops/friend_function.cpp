#include<iostream>
using namespace std;
class space
{
private:
    int x;
    protected:
    int y;
    int z;
public:
    space(int x,int y,int z);
    friend class fri;
    
};

space::space(int x,int y,int z)
{
    this->x=x;
    this->y=y;
    this->z=z;
}
class fri
{
    public:
    int x=10;
    void display(space &s)
    {
        cout<<"the value of x is"<<s.x<<endl;
        cout<<"the valuee of y is"<<s.y<<endl;
    }

};
int main()
{
    space s(40,20,30);
    fri f;
    f.display(s);


}