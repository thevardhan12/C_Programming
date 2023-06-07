#include<stdio.h>
#include<string.h>
 int main()
 {
    char str[100];
    char flag=0;
    printf("Enter a string\n");
    scanf("%[^\n]",str);
   int i=0;
   int  j=strlen(str) -1;
    while(str[i++] != str[j--]  && i != j )
    {
        flag=1;
        break;

    }
    if(flag)
    {
        printf("string is not a pallindrome\n");
    }
    else
    {
        printf("string is a pallindrome\n");
    }
 }