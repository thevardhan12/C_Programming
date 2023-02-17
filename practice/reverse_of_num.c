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
     int num;
     int rev=0;
     printf("enter the number\n");
     scanf("%d",&num);
     while(num>0)
     {
	  rev=num%10;
	  num=num/10;
	  printf("%d",rev);
     }


}

