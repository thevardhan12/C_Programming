#include<stdio.h>
#include<math.h>
int main()
{
    int limit,flag=0;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++)
    {
        for (int  j = 2; j<i/2; j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
                

            }
        }
        if(flag==0)
        {
            printf("%2d",i);
        }
        
    }
}