/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
char *my_strcpy(char *str2,char *str1);
int main()
{
     char str1[10];
     char str2[10];
     scanf("%s",str1);
     char *ret=my_strcpy(str2,str1);
     if(strcmp(str2,str1))
     {
	  printf("string is copied successfully\n");

     }
     else
	  printf("string is not copied\n");
     printf("%s",str2);



}
char *my_strcpy(char *str2,char *str1)
{
     int i;
     for( i=0;str1[i]!=0;i++)
     {
	  str2[i]=str1[i];
	  
     }
     str2[i]=0;
     return str2;
     
	      

}

