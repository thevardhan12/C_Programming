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
     int n;
     float sum=0;
     long int div;
     int i,j;
     printf("Enter a 'n' value\n");
     scanf("%d",&n);
	  for(j=1;j<=n;j++)
	  {
	       div=j*j;
	       sum=1/div;
	       printf("%g",sum);


	  }


     



}

