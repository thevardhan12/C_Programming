//creeate file & WAP to print its contents on standard output
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("text.c","r");
    char ch;
    while((ch=getc(fp))!=EOF)
    {
        putc(ch,stdout);

    }
    
    fclose(fp);
}