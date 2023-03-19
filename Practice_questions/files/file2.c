//WAP to copy its contents in text_copy.txt
#include<stdio.h>
int main()
{
    FILE *fp;
    FILE *fp2;
    fp=fopen("text.c","r");
    fp2=fopen("text_copy.txt","w");
    char ch;
    while ((ch=getc(fp))!=EOF)
    {
        putc(ch,fp2);
        
    }
    fclose(fp);
        fclose(fp2);

    

}