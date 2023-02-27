#include<stdio.h>
#include<string.h>
int word_occurence(char *,char *);
int main()
{
    char str [20];
    printf("Enter a string\n");
    scanf("%[^\n]",str);
    char word[10];
    printf("Enter a word\n");
    scanf("%s",word);
    printf("%d\n",word_occurence(str,word));
    return 0;

}
int word_occurence(char *s,char *word)
{
    int count=0,flag;
    for (int i = 0;i<strlen(s); i++)
    {
        for (int  j = 0; word[j]!=0; j++)
        {
            if(word[j]==s[i+j])
            {
                flag=1;
                

            }
        }
        if(flag)
        {
            count++;
        }
        
        
    }
    



}