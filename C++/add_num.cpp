#include<iostream>
int main()
{
    int sum=0;
    int numbers;
    std::cout<<"Enter the numbers\n";
    while (std::cin>>numbers)
    {
        sum=sum+numbers;
    }
    std::cout<<"the vsum is="<<sum<<std::endl;
}