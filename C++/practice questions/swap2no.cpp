#include<iostream>
int main()
{
    int a,b;
    std::cout<<"enter two no\n";
    std::cin>>a>>b;
    std::cout<<"before swapping\n"<<"a="<<a<<"b="<<b<<"\n";
    int temp;
    temp=a;
    a=b;
    b=temp;
    std::cout<<"After swapping\n"<<"a="<<a<<"b="<<b<<"\n";


}