/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int little_big( int *ptr)
{
  return ((*ptr&0xff)<<24)|((*ptr&(0xff<<8))<<8) |(*ptr&(0xff<<16)>>8)|((*ptr&(0xff<<24))>>24);//(*ptr&(0xff<<16)); 

}
int main()
{
    unsigned int num;
     printf("enter the num\n");
     scanf("%x",&num);
     int res=little_big(&num);
     printf("%x\n",res);

}

