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
     int array[]={5,611,9,56,65,5,2,5,265,2,52,64,64,16,41,20};
     int max=array[0];
     for(int i=0;i<16;i++)
     {
	  if(array[i]>max)
	  {
	       max=array[i];

	  }
     }
     printf("the maximum number is %d\n",max);


}

