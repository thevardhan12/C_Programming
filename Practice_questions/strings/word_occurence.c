#include<stdio.h>
#include<string.h>
int main()
{
    char text[100];
    char word[10];
    printf("Enter a text\n");
    scanf("%[^\n]",text);
    printf("Enter the word\n");
    scanf("%s",word);
    for (int  i = 0; text[i]!=0; i++)
    {
        for (int  j = 0; word[j]!=0; j++)
        {
            if(text[i]==word[j])
            
        }
        
    }
    
}