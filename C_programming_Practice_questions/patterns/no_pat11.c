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
     for(int i=1;i<=4;i++)
     {
	  for(int j=i;j>=1;j--)
	  {
	       printf("%d",j);
	  }
	  for(int j=2;j<=i;j++)
	  {
	       printf("%d",j);
	  }
	  printf("\n");
     }


}

