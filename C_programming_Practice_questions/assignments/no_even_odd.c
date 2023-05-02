#include<stdio.h>
int main()
{
    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("the number %d is even\n",number);
    }
    else
    {
        printf("the number %d is odd\n",number);
    }
    
}