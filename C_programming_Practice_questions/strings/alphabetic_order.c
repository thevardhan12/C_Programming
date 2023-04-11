//Input a string and change it so that the characters are placed in alphabetical order. For example
//the string "motivate" should be changed to "aeimotv".
#include<stdio.h>
#include<string.h>
void alpabetic_order(char*);
int main()
{
    char str[50];
    printf("ENter a string \n");
    scanf("%[^\n]",str);
    alpabetic_order(str);
    printf("%s",str);
}
void alpabetic_order(char *str)
{
    char temp;
    for (int  i = 0; str[i]!=0; i++)
    {
        for (int  j = i+1; str[j]!=0; j++)
        {
            if(str[i]>str[j])
            {
                temp=str[j];
                str[i]=str[j];
                str[j]=temp;

            }
        }
        
    }
    
}