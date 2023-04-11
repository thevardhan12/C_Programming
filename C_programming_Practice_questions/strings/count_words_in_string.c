//write a program to accept any line and count the number of words in it.
#include<stdio.h>
#include<string.h>
int no_of_count(char *str);

int main()
{
    char str[50];
    printf("ENter a string \n");
    scanf("%[^\n]",str);
    printf("%d",no_of_count(str));
}
int no_of_count(char *str)
{
    int count=0;
    int i;
    for( i=0;str[i]!=0;i++)
    {
        if(str[i]==32)
        {
            count++;
        }
    }
    if (str[i]=='\0')
    {
        /* code */count++;
    }
    return  count;
    

}