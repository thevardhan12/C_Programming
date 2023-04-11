#include<stdio.h>
int add(int *,int);
int main ()
{
    int a[10]={1,2,5,9,7,80,56,25};
    int b[5]={5,6,9,5,63};
    printf("%d\n",add(a,10));
    printf("%d\n",add(b,5));

}
int add(int *arr,int n)
{
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        sum=sum+arr[i];
        /* code */
    }
    return sum;
    

}
