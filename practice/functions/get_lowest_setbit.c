/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int lowest_set(int value)
{
     for(int i=0;i<=31;i++)
     {
	if(value&(1<<i))
	{
	     return i;
	}
		  
     }
}


int main()
{
     int value;
     printf("ENTER THE VALUE\n");
     scanf("%d",&value);
     printf("%d",lowest_set(value));


}

