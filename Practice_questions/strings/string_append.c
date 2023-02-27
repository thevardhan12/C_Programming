#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *string_append(char *s1,char *s2);
int main()
{
    char str[10]="harsha";
    char str2[30]="vardhan bheemasamudra";
    char *s =string_append(str,str2);
    printf("%s\n",s);

}
char *string_append(char *s1,char *s2)
{
    int size_s1=strlen(s1);
    int size=strlen(s1)+strlen(s2)+1;
    char *s=calloc(size,sizeof(char));
    for(int i=0;s1[i]!=0;i++)
    {
        s[i]=s1[i];
    }
    for(int i=0;s2[i]!=0;i++)
    {
        s[size_s1+i]=s2[i];
    }

}