/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int byte_swaping(int);
int main()
{
     int num;
     printf("Enter a number in hexadecimal forn\n");
     scanf("%x",&num);
     printf("%#x", byte_swaping(num));


}
int byte_swaping(int num)
{
     return (((num&0xff)<<8)|((num&0xff00)>>8));

}


