/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
void binary(int );
int main()
{
     int num;
     printf("Enter a number\n");
     scanf("%d",&num);
     binary(num);
}
void binary(int num)
{
     int mask;
     for(int i=15;i>=0;i--)
     {
	  mask=i<<i;
	  if(num&mask)
	  {
	       printf("1");
	  }
	  else
	       printf("0");
     }

}

