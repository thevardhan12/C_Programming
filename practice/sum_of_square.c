/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int sum_of_square(int *);
int main()
{
     int n;
     printf("Enter the value 'n'\n");
     scanf("%d",&n);
     printf("%d\n",sum_of_square(&n));
}
int sum_of_square(int *ptr)
{
     int sum=0,sqr=0;
     for(int i=1;i<=*ptr;i++)
     {
	  sqr=i*i;
	  sum=sum+sqr;
     }
     return sum;
}

