//Write a program to abbreviate input text. For example if the input is "World Health Organization",
//then the output should be WHO.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void abbrevative(char *);
int main()
{
    char text[100];
    printf("Enter a text \n");
    scanf("%[^\n]",text);
    printf("%2c",*(text+0));
    abbrevative(text);

}
void abbrevative(char *str)
{
    int i;
    for ( i = 0; str[i]!=0; i++)
    {
        if(str[i-1]==' ')
        {
            printf("%2c",*(str+i));
        }
            
        
    }
    printf("\n");
    
}