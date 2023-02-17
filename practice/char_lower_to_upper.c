/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
 */
#include<stdio.h>
char low_to_uo(char);
int main()
{
     char  ch;
     printf("enter a charcter \n");
     scanf("%c",&ch);
     if(ch>='a' &&ch<='z')
     {
     printf("The upper case value of %c is %c \n",ch,low_to_uo(ch));}
     else
	  printf("enter valid innput\n");
}
char low_to_uo(char ch)
{
	  return ch-32;
}


