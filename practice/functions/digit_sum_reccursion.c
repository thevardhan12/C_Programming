/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int digitsum(int);
int main()
{
     int num;
     printf("Enter the number\n");
     scanf("%d",&num);
     printf("%d",digitsum(num));



}
int digitsum(int num)
{
     if(num!=0)
     {
	  return (num%10)+digitsum(num/10);
     }
     
}

