#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("enter a string\n");
    scanf("%[^\n]",str);
    int flag=0;
    int y=strlen(str);
    int x=0;
    char str2[y+1];
    for(x=0;x<y;x++)
    { 
        str2[x]=str[y];
        y--;
        
    }
    if(strcmp(str,str2)==0)
    {
        printf("string is pallindrome\n");
    }
    else
        printf("string is not pallindrome\n");

    

}