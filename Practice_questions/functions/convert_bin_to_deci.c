#include<stdio.h>
#include<string.h>
int deci(char*str);
int main()
{
    char str[10];
    printf("Enter binary form\n");
    scanf("%s",str);
    printf("the decimal form of %s is %d\n",str,deci(str));
}
int  deci(char *str)
{
    int deci=0;
    for (int  i = strlen(str)-1;i>=0; i--)
    {
        if(str[i]=='1')
        {
            deci=deci+2*i;
        }
       
        
    }
    return deci;
    
}