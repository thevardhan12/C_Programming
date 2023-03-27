#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int sum=0;
    int digi=0;
    while (num>0)
    {
        digi=num%10;
        sum=(sum*10)+digi;
        num=num/10;
    }
    printf("%d\n",sum);
}