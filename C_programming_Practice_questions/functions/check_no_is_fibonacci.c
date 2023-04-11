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
     int num,first=0,second=1,res=first+second;
     printf("enter the number\n");
     scanf("%d",&num);
     //printf("%d %d",first,second);
     for(int i=0;i<=50;i++)
     {
	  first=second;
	  second=res;
	  res=first+second;
	  if(res==num)
	  {
	       printf("%d is in fibonacci series\n",num);
	  }
	 /* else
	  {
	       printf("%d is not in fibonacci series\n",num);
	  }*/

     }




}

