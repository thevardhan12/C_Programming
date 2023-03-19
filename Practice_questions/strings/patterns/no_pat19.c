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
     
     
     for(int i=5;i>=1;i--)
     {
	  for(int j=5;j>=1;j--)
	  {
	       if(j>i)
	       {
		    printf("%d",j);
	       }else 
	       {
		    printf("%d",i);
	       }
	  }
	  
	  for(int j=2;j<=5;j++)
	  {
	       if(j>i)
		    printf("%d",j);
	       else
		    printf("%d",i);
	  }
	  printf("\n");
     }
     
     for(int i=1;i<=5;i++)
     {
	  for(int j=5;j>=1;j--)
	  {
	       if(j>i)
		    printf("%d",j);
	       else
		    printf("%d",i);
	  }
	  for(int j=2;j<=5;j++)
	  {
	       if(j>i)
		    printf("%d",j);
	       else
		    printf("%d",i);
	  }
	  
	  printf("\n");
     }


     



}

