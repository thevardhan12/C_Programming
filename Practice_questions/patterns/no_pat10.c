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
     for(int i=5;i>=1;i--)
     {
	  for(int j=5;j>=i;j--)
	  {
	       if(j<i)
		  printf("*");
	       else
		    printf("%d",j);
	  }
	  printf("\n");}


}

