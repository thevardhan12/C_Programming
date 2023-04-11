#include<stdio.h>
#include<stdlib.h>
char *my_strdup(char *str,char *);
int main()
{
    char str[10];
    printf("Enter a string\n");
    scanf("%s",str);
    char *s=calloc(20,sizeof(char));
    my_strdup(str,s);
    printf("%s\n",s);
    
}
char *my_strdup(char *str,char *s)
{
    //char *s=calloc(20,sizeof(char));
    for (int  i = 0;str[i]!=0; i++)
    {
        s[i]=str[i];
    }
    
}