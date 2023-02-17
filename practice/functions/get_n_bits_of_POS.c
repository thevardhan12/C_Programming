/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int get_pos(int value,int n,int p)
{
     return (value&((1<<n)-1)<<(p-n+1))>>(p-n+1);
}
int main()
{
     int value,n,p;
     printf("Enter the number:\n");
    scanf("%d",&value);

     printf("Enter the number of bits:\n");

    scanf("%d",&n);

     printf("Enter the pos:\n");

    scanf("%d",&p);
    int re=get_pos(value,n,p);
    printf("Result=%d\n",re);

}

