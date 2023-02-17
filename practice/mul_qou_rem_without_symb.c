/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
long int mul(int,int);
int main()
{
     int num1,num2;
     printf("Enter two integer \n");
     scanf("%d%d",&num1,&num2);
     printf("%d * %d=%ld\n",num1,num2,mul(num1,num2));
     printf("%d / %d=%d\n",num1,num2,quo(num1,num2));
     printf("%d % %d=%d\n",num1,num2,rem(num1,num2));
}
long int mul(int num1,int num2)
{
     int mul=0;
     for(int i=1;i<=num2;i++)
     {
	  mul=mul+num1;
     }
     return mul;
}
int quo(int num1,int num2)
{
     int quo;
     if(num2>=num1)
     {




     }

}

