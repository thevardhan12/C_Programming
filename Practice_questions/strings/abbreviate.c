//Write a program to abbreviate input text. For example if the input is "World Health Organization",
//then the output should be WHO.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *abbreviate(char*);
char *word(char *end);
int main()
{
    char str[100];
    printf("Enter a string\n");
    scanf("%[^\n]",str);
    char *abb=abbreviate(str);
    return 0;
}
char *abbreviate(char *s)
{
    int size=10;
    char *temp=NULL;
    char *str=calloc(size,sizeof(char));
    for (int  i = 0;str[i]!=0 ; i++)
    {
        for(int j=0;s[j]!=0;j++)
        {
            if(s[j]==' ')
            {
                temp=s+j;
                str[i]=word(temp);
                break;

            }

           

        }
        }

        
        
    }
    


char *word(char *end)
{
    printf("%s",end);

}


