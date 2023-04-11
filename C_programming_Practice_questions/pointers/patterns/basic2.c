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
     printf("\n");
     for(int i=5;i>=1;i--)
	 {
	      for (int j=1;j<=i;j++)
	      {
		   if(j<=i)
		   printf("%d",j);
		   else
			printf(" ");
	      }
	      /*for(int j=n;j>=1;j--)
	      {
		   if(j<=i)
		   {
			printf("%d",j);
		   }
		  else
		   {
			printf(" ");
		   }
	      }*/
	      printf("\n");
	 }

}

