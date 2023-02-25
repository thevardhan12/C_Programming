//Write a function which replaces all the occurrences of a character from a string with another
//character. It should take three arguments, a string and two characters.
#include<stdio.h>
#include<string.h>
void replace_occurence(char *str,char ch1,char ch2);

int main()
{
    char ch1,ch2;
    printf("Enter two char\n");
    scanf("%c%c",&ch1,&ch2);
    char str[50];
    printf("Enter a string\n");
    scanf("%[^\n]",str);
    replace_occurence(str,ch1,ch2);
    printf("%s",str);
}
void replace_occurence(char *str,char ch1,char ch2)
{
    for(int i=0;str[i]!=0;i++)
    {
        for (int  j = i+1; str[j]!=0; j++)
        {
            if(str[i]==str[j])
            {
                str[j]=ch1;
            }
            str[i]=ch2;
        }
        
    }
}