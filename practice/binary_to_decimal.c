/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int decimal(int ,int);
int main()
{
     int num,base;
     char choice;
     printf("Enter 'b' for binary and 'o' for octal\n");
     scanf("%c",&choice);
     printf("Enter a number\n");
     scanf("%d",&num);
     if(choice=='b')
	  base=2;
     else
	  base=8;
     printf("result=%d",decimal(num,base));



}
int decimal(int num,int base)
{
     int rem,d=0;
     rem=num%10;//extract last digit
     d=	

}
