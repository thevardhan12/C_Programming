/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
#include<strings.h>
int repeated(char *str);

int main()
{
     char str[100];
     scanf("%[^\n]",str);
     printf("%s",str);
     printf("%d",repeated(str));



}
int repeated(char *str)
{
     int i,j,count=0;
     for(i =0;str[i]!=0;i++)
     {
          for(j=i+1;str[j]!=0;j++)
          {
               if(str[i]==str[j])
               {
                    count++;
                    str[j]='0';
               }
              
          }
          
     }
     return count;

}
