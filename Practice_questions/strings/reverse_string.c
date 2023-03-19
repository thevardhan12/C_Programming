#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
    char temp;
    int l=strlen(str);
    for (int i = 0; i <l/2; i++)
    {
        
        temp = str[i];                                                          //storing each character starting from 0th index
        str[i] = str[l - i - 1];                                               
        str[l - i - 1] = temp;
    }
    

}
int main()
{
    char str[100];
    printf("enter a string\n");
    scanf("%[^\n]",str);
    reverse(str);
    printf("%s",str);

}