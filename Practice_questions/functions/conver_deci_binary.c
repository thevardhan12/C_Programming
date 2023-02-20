/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
 */
#include<stdio.h>
int binary(int );
int main()
{
     int num;
     printf("enter the number\n");
     scanf("%d",&num);
     printf("decimal=%d and binary=%d\n",num,binary(num));

}
int binary(int num)
{
     int rem,a=1,binary=0;
     while(num>0)
     {
	  rem=num%2;
	  binary=binary+rem*a;
	  num/=2;
	  a*=10;
     }
     return binary;
}


