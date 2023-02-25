//Write a function that searches for a character in the string and returns the number of occurrences
//of that character in the string. It should take two arguments, first a string and then a character.
#include<stdio.h>
#include<string.h>
int search_char(char *str ,char ch);


int main()
{
    char str[50];
    char ch;
    printf("Enter a charcter \n");
    scanf("%c",&ch);
    getchar();
    printf("Enter a line of string\n");
    scanf("%[^\n]",str);
    int res=search_char(str,ch);
    printf("%d\n",res);
}
int search_char(char *str ,char ch)
{
    int count=0;
    for (int  i = 0; str[i] != 0; i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    return count;
    
}