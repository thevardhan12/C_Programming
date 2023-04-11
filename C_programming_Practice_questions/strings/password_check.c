//password must have atleast 8charctersin that atleast one uppercase,1,lowercase,1 symbol,1 digit.
#include<stdio.h>
#include<string.h>
#define size 20
#include<ctype.h>
void check_password(char s[]);
int main()
{
    char str[size];
    printf("Enter a password\n");
    scanf("%s[^\n]",str);
    check_password(str);

}
void check_password(char s[])
{
    int flag=0;
    int len=strlen(s);
    if(len>=8)
    {
        if(isupper(s[i]))
        flag=1

    }
    else
    {

    }


}