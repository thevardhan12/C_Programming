#include<stdio.h>
int main()
{
    int  nbits(int );
    int number;
    int nbit;
    printf("enter the number  and n bits value\n");
    scanf("%d%d",&number,&nbit);

    nbits(number,nbit);
}
int nbits(int num,int n)
{
    return num&((1<<n)-1);
    

}