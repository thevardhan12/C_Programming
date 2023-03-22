#include<stdio.h>
#include<string.h>
int main()
{
    char str[150];
    printf("Enter a string\n");
    scanf("%[^\n]",str);
    char ch;
    int count;
    for (int  i = 0; str[i]!=0; i++)
    {
        ch=str[i];
        if(ch!=' ')
        {
            count=0;
            for (int  j=0;str[j]!=0; j++)
            {
                if(ch==str[j])
                {
                    count++;
                    str[j]=' ';
                }
            }
            printf("The %c charcter is occured %d time in the string\n",ch,count);
            
        }
        
    }
    
}