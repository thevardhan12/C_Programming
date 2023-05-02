#include<stdio.h>
int main()
{
    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    for (int  i =1;i<=number; i++)
    {
        for (int  j=number ;j<=i; j--)
        {
            printf("%2d",j);
        }
       /* for (int  k = (number-1); i < count; i++)
        {
            /* code */
        //
        
        
        
    }
    
}