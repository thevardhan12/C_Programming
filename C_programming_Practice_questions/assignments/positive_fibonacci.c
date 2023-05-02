#include<stdio.h>
int main()
{
    int limit;
    printf("enter the limit\n");
    scanf("%d",&limit);
    int first=0,second=1;
    int next=first+second;
    printf("%d %d",first,second);
    while(next<limit)
    {
        next=first+second;
        printf("%2d",next);
        first=second;
        second=next;
    }
}