//write a program to convert a lowercase string into uppercase.
#include<stdio.h>
void lower_upper(char *str);

int main()
{
    int flag;
    char str[50];
    printf("enter a string in lower case\n");
    scanf("%[^\n]",str);
    for (int  i = 0;str[i]!=0; i++)
    {
        if (str[i]>='a'&& str[i]<='z')
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        lower_upper(str);

    }
    printf("%s\n",str);
    
}
void lower_upper(char *str)
{
    for(int i=0;str[i]!=0;i++)
    {
       str[i]=str[i]-32;
    }
}