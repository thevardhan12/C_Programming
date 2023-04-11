/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
void reverse(int);
int main()
{
     int num;
     printf("enter the num\n");
     scanf("%d",&num);
     reverse(num);

}
void reverse(int num)
{
     int rev;
     if(num!=0)
     {
	  rev=num%10;
	  printf("%d",rev);
	  num/=10;
	  reverse(num);

     }

}

