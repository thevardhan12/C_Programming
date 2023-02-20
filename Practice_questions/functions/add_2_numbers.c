/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int main()
{
     int x,y;
     printf("ENTER THE OPERANDS\n");
     scanf("%d%d",&x,&y);
     int z=add(x,y);
     printf(" the sum is %d ",z);
}
int add(int a,int b)
{
     int res;
     res=a+b;
     return res;
}
