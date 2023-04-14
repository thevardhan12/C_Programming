#include<iostream>
using namespace std;
class Base
{
    private:
	int m_private;
    protected:
	int m_protected;
    public:
	int m_public;
};
class Pub:public Base  //public inheritance
{
    private:
	int a;
    protected:
	int b;
};
int main()
{
    Base base;
    base.m_public = 1;
    // okay : m_public is public in Base
    base.m_private = 2;
    // not okay : m_private is private in Base
    base.m_protected = 3;
    // not okay : m_protected is protected in Base
    Pub pub;
    pub.m_public = 1;
    // okay : m_public is public in Pub
    pub.m_private = 2;
    // not okay : m_private is inaccessible in Pub
    pub.m_protected = 3;
    // not okay : m_protected is protected in Pub
}












