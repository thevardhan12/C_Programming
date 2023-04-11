/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int sum_of_all_even(int);
int mul_of_all_odd(int);
int main()
{
     int num;
     printf("enter 6 digit number\n");
     scanf("%d",&num);
     printf("the sum of all even digit is %d \n",sum_of_all_even(num));
     printf("the mul of all odd digit is %d \n",mul_of_all_even(num));

}
int sum_of_all_even(int num)
{
     int rev,res=1;
     rev=num%10;
     if(rev%2!=0)
     {
	  res=res*rev;

     }
    // return res;
}
int mul_of_all_odd(int num)
{
     int rev,sum=0;
     rev=num%10;
     if(rev%2)
     {
	  sum=sum+rev;
     }
}
