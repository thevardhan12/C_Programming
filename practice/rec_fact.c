/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
long int fact(int);
int main()
{
     int num;
     printf("enter the number\n");
     scanf("%d",&num);
     printf("%ld\n",fact(num));



}
long int fact(int num)
{
     if(num)
     {
	  return num*fact(num-1);
     }
     else
	  return 1;

}
