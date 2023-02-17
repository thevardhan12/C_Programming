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
     int i,count=0;
     for(i=2;i<99;i++)
     {
	  for(int j=2;j<99;j++)
	  {
	       if(j%i==0)
	       {
		    count++;
	       }
	  }
     }


}
