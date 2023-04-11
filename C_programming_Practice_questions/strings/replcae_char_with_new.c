#include<stdio.h>
#include<string.h>
void replace_character(char *str,char replace,char new);

int main()
{
    char str[20];
    printf("Enter a string\n");
    scanf("%[^\n]",str);
    char replace,new;
    printf("ENter a replace character and new character\n");
    scanf(" %c %c",&replace,&new);
    replace_character(str,replace,new);
    printf("%s\n",str);
}

void replace_character(char *str,char replace,char new)
{
    for (int  i = 0; i <= strlen(str)-1; i++)
    {
        if(str[i]==replace)
        {
            str[i]=new;
        }
    }
    
}