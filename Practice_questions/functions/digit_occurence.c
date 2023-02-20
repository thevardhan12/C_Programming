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
     int num,digi,rev,count=0;
     printf("Enter the nnumber \n");
     scanf("%d",&num);
     printf("Enter a digit\n");
     scanf("%d",&digi);
     int x=num;
     while(x<0)
     {
	  rev=x%10;

	 x=x/10;


     }
     printf("%d\n",count);

}

