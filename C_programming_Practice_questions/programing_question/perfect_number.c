//sum of divisors is equal to the number
#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0;
    int start,end;
    printf("enter the number  range \n");
    scanf("%d%d",&start,&end);
    for (int  i = start; i < end; i++)
    {
        for (int  j = 1; j<i; j++)
        {
            sum=0;
            if(i%j==0)
            {
                sum=sum+j;
            }
            
        }
        if(sum==i)
        {
            printf("%d\n",i);
        }
    }
    
}