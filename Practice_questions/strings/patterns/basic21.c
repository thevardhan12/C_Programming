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
     int n; scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
	  for(int j=1;j<=i;j++)
	  {
	       printf("%d",j%2);
	  }
	  printf("\n");
     }


}

