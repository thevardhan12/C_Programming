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
     int k;
     for(int i=5;i>=1;i--)
     {
	  k=i;
	  for(int j=1;j<=5;j++)
	  {
	       
	       if(k<=5)
	       printf("%d",k);
	       else printf("5");
	       k++;
	  }
	  printf("\n");
     }


}

