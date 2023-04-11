#include<stdio.h>
#include<string.h>
int count(char *str);
int main()
{
    char str[200];
    scanf("%[^\n]",str);
    printf("%d\n",count(str));
    return 0;
}
int count(char *str)
{
    int count=0;
    for (int  i = 0; i < str[i]!=0; i++)
    {
        if (str[i]==' '|| str[i]=='\n'|| str[i]=='\t')
        {
            count++;
            
        }
        
    }
    return count;
    
}