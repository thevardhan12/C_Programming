/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>

#include<string.h>
#include<ctype.h>
int my_strcmp(char *str1, char *str2);
int main()
{
     char str1[100];
     char str2[100];
     scanf("%s",str1);
     scanf("%s",str2);
     printf("%s\n",str1);
     printf("%s\n",str2);
     int res=my_strcmp(str1,str2);
     if( res)
     {
	  printf("The entered strings are not equal %d\n",res);

     }
     else
     {
	  printf("The entered strings are equal %d\n",res);

     }
     


}
int my_strcmp(char *str1, char *str2)
{
     int ret;

     for(int i=0;str1[i]!=0;i++)
     {
	  ret=toupper(str1[i])-toupper(str2[i]);
	  if(ret)
	  {
	     return ret;
	  }

     }
     return ret;
}
