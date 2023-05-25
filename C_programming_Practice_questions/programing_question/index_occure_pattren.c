#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void occu(char *,char *);
int main()
{
    char *str=malloc(sizeof(char)*50);
    printf("enter the text\n");
    scanf("%[^\n]",str);
    char pat[10];
    printf("Enter the pattren\n");
    scanf("%s",pat);
    occu(str,pat);

}
void occu(char *str,char *pat)
{
    char flag=1;
    int p_len=strlen(pat);
    for (int  i = 0; str[i]!=0; i++)
    {
        for (int  j = 0; j < p_len; j++)
        {
            if (pat[j]!=str[j+i])
            {
                flag=0;
                continue;
            }
            
            
        }
        if(flag)
        printf("%2d",i);
        
    }
    
}