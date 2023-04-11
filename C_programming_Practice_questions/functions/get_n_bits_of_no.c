/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int get_nbits(int value,int n)
{
     return value&(1<<n)-1;

}
int main()
{
     int value,n;
     printf("Enter the number: \n");
     scanf("%d",&value);

     printf("Enter the number of bits: \n");
     scanf("%d",&n);
     int result=get_nbits(value,n);
     printf("Result=%d\n",result);


}

