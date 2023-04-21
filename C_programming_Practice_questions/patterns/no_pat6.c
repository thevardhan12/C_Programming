/*
Name:Harshavardhana B 
Date:
Date:
Sample input:
Sample output:
*/
#include<stdio.h>
int main()

{
     for(int i=1;i<=5;i++)
     {
	  for(int j=1;j<=i;j++)
	  {
	       printf("%d",j);
	  }

	  for(int j=5;j>=i;j--)
	  {
	       if(j<=i)
	       printf("%d",j);}
	       printf("\n");}


}

