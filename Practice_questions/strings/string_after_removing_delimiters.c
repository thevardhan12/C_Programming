//Write a program to accept a line of text and print that text after removing all sI?aces and delimiters.
#include<stdio.h>
#include<string.h>
void delimiter(char *);

int main()
{
    char ch1;
    printf("Enter delimi char\n");
    scanf("%c%c",&ch1);
    char str[50];
    printf("Enter a string\n");
    scanf("%[^\n]",str);