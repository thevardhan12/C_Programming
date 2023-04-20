#include<iostream>
int main()
{
    int n;
    std::cout<<"enter the limit\n";
    std::cin>>n;
    int temp;
    int rem,sum=0;
    for (int  i = 1; i < =n; i++)
    {
        temp=i*i;
        while (temp!=0)
        {
            rem=temp%10;
            sum=+rem;
            temp=/10;
        }
        if(sum==i)
        {
            
            std::cout<<"the number is "<<i<<"neon number\n";
        }
        
    }

    
}