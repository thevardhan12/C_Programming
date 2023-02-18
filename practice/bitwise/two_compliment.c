#include<stdio.h>
int two_compl(int num);

int main()
{
    int num;
    printf("enter a number \n");
    scanf("%d",&num);
    int res =two_compl(num);
    for(int i=31;i>=0;i--)
    {
        if(res&(1<<i))
        {
            printf("1");
        }
        else
            printf("0");


    }
}
int two_compl(int num)
{
    return (~num+1);
}
