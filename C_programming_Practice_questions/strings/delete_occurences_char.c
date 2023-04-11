//Write a function which deletes all the occurrences of a character from a string. It should take
//two arguments, a string and a character.
#include<stdio.h>
#include<string.h>
void delete_char(char*,char);
int main()
{
    char ch1;
    char str[50];
    printf("ENter a string\n");
    scanf("%[^\n]",str);
    printf("ENter a charcter\n");
    getchar();
    
    scanf("%c",&ch1);
    delete_char(str,ch1);
    printf("%s\n",str);
}
void delete_char(char *str,char ch)
{
    for (int  i = 0; str[i]!=0; i++)
    {
        if(str[i]==ch)
        {
            for(int j=i;str[j]!=0;j++)
            {
                str[j]=str[j+1];
            }
        }
    }
    
}