#include<stdio.h>
int main()
{
    int a=10,b=20;
    
    swap(&a,&b);
}
void swap(int *p,int *p2)
{
    p=*p+*p2;
    printf("%p",p);
    printf("%d",*p);




}
