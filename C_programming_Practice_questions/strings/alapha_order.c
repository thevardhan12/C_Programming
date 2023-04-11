#include<stdio.h>
#include<string.h>
void alpha(char *);
#define NEW_line printf("\n")

int main()
{
    char str[]="love";
    alpha(str);
    printf("%s",str);
    NEW_line;
}
void alpha(char *s)
{
    char temp;
    for (int  i = 0;s[i]!=0; i++)
    {
        for (int  j = 0; s[j]!=0; j++)
        {
            if(s[j]<s[j+1])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;

            }
        }
        
    }
    
}