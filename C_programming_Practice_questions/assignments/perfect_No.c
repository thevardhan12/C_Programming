#include<stdio.h>
int main()
{
    int number;
    printf("enter the number \n");
    scanf("%d",&number);
    int sum=0;
    if(number>0)
    for(int i=1;i<=number/2;i++)
    {
        if(number%i==0)
        {
            sum+=i;

        }

    }
    if(sum==number)
    {
        printf("it is a perfect number\n");
    }
    else
    printf("it is not\n");

    
}