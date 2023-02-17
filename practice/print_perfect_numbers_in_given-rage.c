/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
 */
#include<stdio.h>
int sumdiv(int range);
int main()
{
     int range;
     printf("Enter a range \n");
     scanf("%d",&range);
     printf("%d",sumdiv(range));


}
int  sumdiv(int range)
{
     int sum=0;
     int num,j;

     for(num=5;num<=range;num++)
     {

	  for(j=1;j<=num/2;j++)
	  {
	       if(num%j==0)
	       {
		    sum=sum+j;
	       }
	  }
     }
}

