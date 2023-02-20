/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int prime(int num)
{
     int count=0;
     for(int i=2;i<=num/2;i++)
     {
	  if(num%i==0)
	  {
	     count++;
	  }
     }
     return count;
}
int main()
{
     int num;
     scanf("%d",&num);
     if (num>=0)
     {
        int y=prime(num);
         if(y == 0 && num!=1)
        {
	    printf("%d is a prime number\n",num);
        }
        else
        {

	    printf("%d is not a prime number\n",num);
        }
     }
     else
     {
	  printf("Invalid input\n");
     }




     }




