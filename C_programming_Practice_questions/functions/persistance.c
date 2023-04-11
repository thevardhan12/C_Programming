/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
 */
#include<stdio.h>
long int product(int );
int main()
{
     int num;
     printf("Enter a number\n");
     scanf("%d",&num);
     printf("%ld",product(num));
}
long int product(int num)
{
     int digi,mul=1,count=0;
     do
     {
	  for(mul=1;num!=0;num/=10)
	  {


	       digi=num%10;
	       mul=mul*digi;
	       num/=10;
	       pers(mul);
	  }
	  num=mul;
	  while(num!=0);
	  printf("\n");

     }



}
int pers(int mul)
{
     if(mul <=9 && mul>=0)
     {
	  return 0;


     }
     else
     {
	  count++;
     }			

}
