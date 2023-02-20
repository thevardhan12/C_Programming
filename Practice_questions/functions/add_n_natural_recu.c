/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int add(int num)
{
     if(num>=1)
     {
	  return num+add(num-1);

     }
     else 
     {
	  return 0;
     }
}
int main()
{
     int n;
     printf("ENTER THE NUMBER \n");
     scanf("%d",&n);
     printf("%p\n",add(n));



}

