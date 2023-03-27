#include<stdio.h>
#include<string.h>
int pallindrome(char *,int );
int main()
{
    char str[10];
    printf("enter a string\n");
    scanf("%s",str);
    int j=strlen(str)-1;
    printf("%d",j);
    if(pallindrome(str,j))
    {
        printf("Entered word is pallindrom\n");

    }
    else
    {
        printf("Entered word is NOT pallindrom\n");


    }

}
int pallindrome(char *str,int j)
{
    int i=0,flag;
    while(i<=j)
    {
        if(str[i]==str[j])
        {
            flag=1;
        }
        else
        {
            flag =0;
            break;
        }
        i++;
        j--;
    }
    return flag;
    
}