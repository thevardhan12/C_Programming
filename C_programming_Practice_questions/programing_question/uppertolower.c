#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    scanf("%c",&ch);
   
   
        ch=ch& ~(1<<5);
        
   
    printf("%c\n",ch);

    
}