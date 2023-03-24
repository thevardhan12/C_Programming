//Write a program to input text and replace all the occurrences of word "Calcutta" by "Kolkata"
//in that text.
#include<stdio.h>
#include<string.h>
void replace(char *text);
int main()
{
    char text[100];
    printf("Enter a text\n");
    scanf("%[^\n]",text);
    replace(text);


}
void replace(char *text)
{
    //printf("%s",text);
    for (int  i = 0; text[i]!=0; i++)
    {
        if(strcmp(text,"calcutta")==0)
        {
            
        }
    }
    
}