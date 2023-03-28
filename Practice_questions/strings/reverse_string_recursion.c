#include<stdio.h>
void reverse(char *str);
int main()
{
    char str[30];
    printf("Enter the string\n");
    scanf("%[^\n]",str);
    reverse(str);
    printf("\n");
    return 0;

}
void reverse(char *str)
{
    if(*str !='\0')
    {
        reverse(str+1);
        printf("%c",*str);
    }
}