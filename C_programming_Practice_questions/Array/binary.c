#include<stdio.h>
int binary(int num);
int main()
{
    int num=5;
    binary(num);

}
int binary(int num)
{
    for (int  i = 31; i >=0; i--)
    {
        if(num&(1<<i))
        {
            printf("1");
        }
        else
        printf("0");
    }
    
}