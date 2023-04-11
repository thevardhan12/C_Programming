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
     int x,y,a,b;
     printf("enter two numbers\n");
     scanf("%d%d",&x,&y);
     a=x;b=y;
     while(a!=b)
     {
	  if(a<b)
	       a=a+x;
	  else
	       b=b+y;

     }
     printf("LCM OF %d and %d is %d \n",x,y,a);
     while(a!=b)
     {
	  if(a>b)
	       a=a-b;
	  else
	       b=b-a;
     }
     printf("HCF of %d and %d is %d\n",x,y,a); 



}

