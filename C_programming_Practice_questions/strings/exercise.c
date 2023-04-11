//Write a program to encode text and to decode the encoded text.
//(i) Perform the encoding so that every character is replaced by its next character. For example
//replace a by b, b by c and so on. Replace z by a
#include<stdio.h>
#include<string.h>
#define SIZE 10
#define NEW_line printf("\n")
void encode(char *s);
int main()
{
    char str[SIZE];
    printf("Enter the string\n");
    scanf("%s",str);
    encode(str);
    printf("%s",str);
    NEW_line;

}
void encode(char *s)
{
    printf("Encoded text\n");
    for (int  i = 0; s[i]!=0; i++)
    {
        s[i]=s[i]+1;
        
    }
}