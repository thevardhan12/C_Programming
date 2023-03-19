#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("text.c","r");
    char ch;
    int count=0;
    //if(ftell(fp))
    while ((ch=getc(fp))!=EOF)
    {
        if(ch=='c')
        {
            count++;
        }
        
    }
    printf("%d",count);
}