/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int power(int ,int);
int main()
{
     int x,y;
     printf("Enter the exponent value i.e x and power value y\n");
     scanf("%d%d",&x,&y);
     printf(" the power value is %d\n",power(x,y));


}
int power(int x,int y)
{
     int res=1;
     for(int i=1;i<=y;i++)
     {
	  res=res*x;
	 
     }
     return res;
}

