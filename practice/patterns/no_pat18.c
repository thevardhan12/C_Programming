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
     int k=1;
    for(int i=1;i<=5;i+=2)
     {
	  for(int j=5;j>=i;j--)
	  {
	       printf(" ");
	  }
	  for(int j=1;j>=i;j--)
	  {
	       printf("%d ",k++);
	  }
	  printf("\n");}



}

