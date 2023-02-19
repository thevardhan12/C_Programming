/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int highest_bit(int value)
{
     for(int i=31;i>0;i--)
     {
	  if(value&(1<<i))
	  {
	       return i;
	  }
     }

     
}
int main()
{
     int value;
     printf("enter the value\n");
     scanf("%d",&value);
    int  y=highest_bit(value);
    printf("%d",y);

}

