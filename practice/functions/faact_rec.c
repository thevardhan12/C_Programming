/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
long int fact(int num)
{
     if(num>=1)
     {
	  return num*fact(num-1);
     }
     else
     {
	  return 1;
     }



}
int main()
{
     int num;
     printf("ENTER THE NNUMBER\n");
     scanf("%d",&num);
    long int y=fact(num);
     printf("THE FACTORIAL OF THE NUMBER %d is %ld \n",num,y);


}

