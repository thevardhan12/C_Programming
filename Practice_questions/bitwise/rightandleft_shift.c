#include <stdio.h>
int main()
{
    int num,;
    char choice;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("Enter a choice\n")
    scanf("%c",&choice);
    if(choice=='r')
    {
        int res=rightshift(num);
        for (int i = 31;i>=0; i--)
        {
            if(res&(1<<i))
            printf("1");
            else
            printf("0")
            
        }
    }
    elseif(choice=='b')
    {
        int res=leftshift(num);
        for (int i = 31;i>=0; i--)
        {
            if(res&(1<<i))
            printf("1");
            else
            printf("0")
            
        }

    }

}
int leftshift(num)
{
    
}