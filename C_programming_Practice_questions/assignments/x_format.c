#include<stdio.h>
int main()
{
    int number;
    printf("enter the number of rows\n");
    scanf("%d",&number);
    for (int  i = 1; i <=number; i++)
    {
        for (int j  = 1; j <= number; j++)
        {
            if(i==j||i+j==number+1)
            {
                printf("%d",j);
            }
            else
            printf(" ");
            
        }
        printf("\n");
        
    }
    
}