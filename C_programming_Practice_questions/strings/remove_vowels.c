#include<stdio.h>
#include<string.h>
void remove_vowels(char *str);

int main()
{
    char str[100];
    printf("Enter a string\n");
    scanf("%[^\n]",str);
    remove_vowels(str);
    printf("%s\n",str);
}
void remove_vowels(char *str)
{
    for (int  i = 0; str[i]!=0; i++)
    {
        
            for(int j=i;str[i]!=0;j++)
            {

                str[j]=str[j+1];
            
            }

            
            
        
        
    }
    
}