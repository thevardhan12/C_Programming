#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    printf("enter the string\n");
    scanf("%[^\n]",string);
    int reverse(char *sr);
    if(reverse(string))
    {
        printf("the string %s is pallindrome\n",string);
    }
    else
    {
        printf("the string %s is not a pallindrome\n",string);

    }
}
int reverse(char *sr)
{
    int len=strlen(sr);
    int flag=0;
    for(int i=0;i<len;i++)
    {
        if(sr[i]==sr[len-i-1] )
        {
            flag=1;
        }
        else
        {
            return 0;
        }
    }
    return flag;
}