#include<stdio.h>
int main()
{
    for(int i=1;i<=20;i++)
    {
        if(i<=9)
        printf("%2d",i);
        if(i>=10)
        printf("%3d",i);
    }
}