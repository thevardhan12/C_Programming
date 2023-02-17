/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int fact(int num)
{
     int fact=1;
     for(int i=1;i<=num;i++)
     {
	  fact=fact*i;
     }
     return fact;
}


int main()
{
     int num;
     printf("ENter the number\n");
     scanf("%d",&num);
    int y=fact(num);
    printf("%d\n",y);
     //printf("the factorial of a %d is %d\n",num,fact(num));



}
/*int fact(int num)
{
     int fact=1;
     for(int i=1;i<=num;i++)
     {
	  fact=fact*i;
     }
}*/




