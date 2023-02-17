/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int even_r_odd(int num)
{
     if(num%2)
     {
	  return 0;
     }
     else
     {
	  return 1;
     }


}

int main()
{
     int y, num;
     printf("ENTER THE NUMBER\n");
     scanf("%d",&num);
     y=even_r_odd(num);
     if(y)
	  printf("the number %d is EVEN \n",num);
     else
	  printf("the number %d is ODD \n",num);


}

