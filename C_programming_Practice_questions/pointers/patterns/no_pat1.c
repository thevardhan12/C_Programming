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
     int n;
     scanf("%d",&n);
     for(int i=n;i>=1;i--)
     {
	  for(int j=1;j<=n;j++)
	  {
	       if(i>=j)
		    printf("%d",j);
	       else printf("*");
	  }
	  for(int j=n;j>=1;j--)
	  {
	       if(i>=j)
		    printf("%d",j);
	       else printf("*");
	  }
	  printf("\n");}



}

