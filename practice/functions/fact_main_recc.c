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
     static int num;
     static unsigned long long int fact=1;
     if(fact == 1)
     {
	  printf("Enter the value of N :");
          scanf("%d",&num);
     }
     if(num>0)
     {
	  fact=fact*num--;
	  main();
     }
     else
     {
     printf("%llu ",fact);
     }
}
