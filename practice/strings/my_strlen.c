/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int my_strlen(char *str);
int main()
{
     char str[20];
     scanf("%s",str);
     printf("%s\n",str);
    printf("%d\n", my_strlen(str));
     

   


}
int my_strlen(char *str)
{
     int count=0;
     for(int i=0;str[i]!=0;i++)
     {
	  count ++;
     }
     return count;

}

