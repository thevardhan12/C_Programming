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
     int k=1;
     for(int i=1;i<=5;i+=2)
     {
	  for(int j=5;j<=1;j--)
	  {
	       if(j>=i)
		    printf("%d" ,k++);
	       else printf(" ");}
	       printf("\n");}


}


