//Write a program to accept a line of text and display the number of consonants and spaces in that
//line of text.
#include<stdio.h>
#include<string.h>
void no_of_cont_spac(char *str);

int main()
{
    char str[50];
    printf("Enter a line of string\n");
    scanf("%[^\n]",str);
    no_of_cont_spac(str);
}
void no_of_cont_spac(char *str)
{
    int count=0,count1=0;
    for(int i=0;str[i]!=0;i++)
    {
        
        
        if(str[i]!='a'||str[i]!='e'||str[i]!='i'||str[i]!='o'||str[i]!='u'||str[i]!='A'||str[i]!='E'||str[i]!='O'||str[i]!='U'||str[i]!='I'||str[i]!=' ')
        {
            count++;


        }
        else if(str[i]==' ')
        {
            count1++;
        }

    }
    printf("consonants count is %d\n",count);
    printf("spaces count is %d\n",count1);

}