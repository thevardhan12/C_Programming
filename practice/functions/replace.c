/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int get_pos(int num,int n,int value)
{
     return value&((1<<n)-1)|(num&~((1<<n)-1));
}
int main()
{
     int value,n,num;
     printf("Enter the number:\n");
    scanf("%d",&num);

     printf("Enter the number of bits:\n");

    scanf("%d",&n);

     printf("Enter the value:\n");

    scanf("%d",&value);
    int re=get_pos(num,n,value);
    printf("Result=%d\n",re);

}

