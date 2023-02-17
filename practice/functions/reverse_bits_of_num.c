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
	  if(value&(1>>n))
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
     int value,n;
     printf("enter the nnumber\n");
     scanf("%d",&value);
     scanf("%d",&n);
     int y=print(value,n);




}

