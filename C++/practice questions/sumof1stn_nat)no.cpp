#include<iostream>
int main()
{

    int n,sum=0;
    std::cout<<"enter the n value\n";
    std::cin>>n;
    for (int  i =1 ; i <=n; i++)
    {
        sum+=i;
        
    }
    std::cout<<"the sum is"<<sum<<"\n";
    
}