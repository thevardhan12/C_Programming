/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
 */
#include<stdio.h>
long int cubesum(int );
int main()
{
     int num;
     printf("enter the number \n");
     scanf("%d",&num);
     printf("%d",cubesum(num));
}
long int cubesum(int num)
{
     int digi,cub,sum=0;
     while(num!=0)
     {
	  digi=num%10;
	  cub=digi*digi*digi;
	  num/=10;
	  sum=sum+cub;
     }
     return sum;
}

