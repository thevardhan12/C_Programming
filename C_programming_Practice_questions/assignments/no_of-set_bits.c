#include<stdio.h>
int set_bits(int number);
int main()
{
    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    int res=set_bits(number);
    printf("%d\n",res);
    if(res%2==0)
    {
        printf("even\n");
    }
    else
        printf("odd\n");

}
int set_bits(int number)
{
    int count=0;
    for (int  i = 1; i <=32; i++)
    {
        if(number&(1<<i))
        {
            count++;
        }
    }
    return count;
    
}