/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int oddoreven(int);
int main()
{
     int num;
     printf("ENter a number\n");
     scanf("%d",&num);
     if(oddoreven(num))
     {
	  printf("%d is odd number\n",num);
     }
     else
	  printf("%d is even number\n",num);


}
int oddoreven(int num)
{
     int mask;
     mask=1<<0;
     if(num&mask)
     {
	  return 1;
     }
     else
	  return 0;
}

