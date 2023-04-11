/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int print(int value,int n)
{
     if(n>=0)
     {
	  if(value&(1<<n))
	  {
	  	printf("1 ");
	}
	  else
	  {
	       printf("0 ");
	  }
	print(value,n-1);
     }
     
}
int main()
{
     int num,n;
     printf("enter the num:\n");
     scanf("%d",&num);
     printf("enter the n bits:\n");
     scanf("%d",&n);
     int x=print(num,n-1);



}

