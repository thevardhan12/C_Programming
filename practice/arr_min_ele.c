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
     int array[]={5,8,10,6,1,2,-1,5};
     int min=array[0];
     for(int i=0;i<8;i++)
     {
	  if(array[i]<array[0])
	  {
	       min=array[i];
	  }
     }
     printf("the minimum number in an array is %d\n",min);


}

