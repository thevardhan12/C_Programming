#include<stdio.h>
#include<string.h>
int main()
{
    int index=0,len=0;
    char str[100];
    printf("Enter a string\n");
    scanf("%[^\n]",str);
    len=strlen(str);
    void reverse(char *str,int index,int len);
    reverse(str,index,len-1);
    printf("%s\n",str);
}
void reverse(char *str,int index,int len)
{
    char temp;
   
    if(index>=len)
    {
        return ;
    }
    else
    {
        temp=str[index];
        str[index]=str[len];
        str[len]=temp;
        reverse(str,index+1,len-1);
        
    }
}