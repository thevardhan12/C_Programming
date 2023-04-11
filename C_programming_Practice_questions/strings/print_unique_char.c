#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print_unique(char *);
int main()
{
    char *str=calloc(30,sizeof(char));
    scanf("%[^\n]",str);
    print_unique(str);
    printf("\n");
}
void print_unique(char *str)
{
    char flag=0;
    for (int  i = 0; str[i]!='\0'; i++)
    {
        
        for (int j = 0; str[j]!='\0'; j++)
        {
            if(str[i]==str[j]&&i!=j)
            {
                flag=1;
                
            }
            if(!flag)
            {
                printf("%c",str[i]);
            }

            
           
        }
        
        
    }
    
}