#include<stdio.h>
int main()
{
    int number;
    int nth,mth;
    printf("enter the number\n");
    scanf("%d",&number);
    printf("Enter the nth and mth bit\n");
    scanf("%d%d",&nth,&mth);
    if(number&(1<<nth))
    {
        number=number&~(1<<mth);

    }
    printf("%d\n",number);
    
}