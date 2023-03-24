#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("text_copy.txt","r");
    char ch;
    int count=0;
    /*while ((ch=getc(fptr))!=EOF)
    {
        count++;
        
    }*/
    rewind(fptr);
    fseek(fptr,0,SEEK_END);
    int pos=ftell(fptr);
    printf("count=%d\n",count);
    printf("pos=%d\n",pos);

    
}