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
     for(int i=0;i<=50;i++)
     {
	  if(i<(i+1)<(i+2)&&(((i*i)+((i+1)*(i+1)))==((i+2)*(i+2))))
	  {
	       printf("%d,%d,%d",i,(i+1),(i+2));

	  }
     }


}

