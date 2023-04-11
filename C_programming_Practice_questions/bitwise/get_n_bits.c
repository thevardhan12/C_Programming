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
     int value,n;
     printf("ENTER THE VALUE and n \n");
     scanf("%d%d",&value,&n);
     printf("%d",get_n_bits(value,n));
}
int get_n_bits(int value,int n)
{
     return value&(1<<n)-1;
}
