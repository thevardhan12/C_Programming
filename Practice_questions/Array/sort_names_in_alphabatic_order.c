#include<stdio.h>
#include<stdlib.h>
#define N 3
int main()
{
    char (*ptr)[20];
    ptr=malloc(N * sizeof(char[20]));
    for (int  i = 0; i < N; i++)
    {
         scanf("%s",ptr[i]);
       
    }
    /*for (int  i = 0; i < N; i++)
    {
       {
         printf("%s",ptr[i]);
       }
       
    }*/

}
void sort(char(*ptr)[20],)
{
    char temp[30];
    for (int i = 0; i < count; i++)
    {
        
    }
    

}

int my_strcmp(char *str1, char *str2)
{
     int ret;

     for(int i=0;str1[i]!=0;i++)
     {
	  ret=str1[i]-str2[i];
	  if(ret)
	  {
	       return ret;
	  }

     }
     return ret;
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

