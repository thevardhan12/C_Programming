#include<iostream>
int main()
{
    int a,b,c;
    std::cout<<"enter three numbers\n";
    std::cin>>a>>b>>c;
    if(a>b&&b>c)
    {
        std::cout<<"the number "<<a<<"is the higgest among 3 numbers\n";
    }
    else if(b>a&&a>c)
    {
        std::cout<<"the number "<<b<<"is the higgest among 3 numbers\n";

        
    }
    else
        std::cout<<"the number "<<c<<"is the higgest among 3 numbers\n";

}