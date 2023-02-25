//WAP a program to enter any string and print it in reverse order
#include<stdio.h>
#include<string.h>
void reverse_string(char *str);

int main()
{
    char str[50];
    printf("Enter a string\n");
    scanf("%[^\n]",str);
    reverse_string(str);
    printf("%s",str);
}
void reverse_string(char *str)
{
    int j=strlen(str);
    for(int i=0;str[i]!=0;i++)
    {
        str[i]=str[j];
        j--;      
    }
}