//right circular of last array element 
#include<stdio.h>
void circular(int *arr,int );
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9};
    circular(arr,10);
    for (int  i = 0; i < 10; i++)
    {
        printf("%d",arr[i]);
    }
    

}
void circular(int *arr,int sz)
{
    int temp=arr[sz]-1;
    for (int   i = sz-2; i>=0 ; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;

}