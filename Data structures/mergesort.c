#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int mid=0;
int main()
{
    
    int arr[SIZE]={0};

    printf("read the array values\n");
    for (int  i = 0; i < SIZE; i++)
    {
         scanf("%d",&arr[i]);
    }
    int merge_sort(int *,int );
    merge_sort(arr,SIZE);
    
}
int merge_sort(int *arr,int sz)
{
    if(sz==1)
    return 0;
    mid=sz/2;
    int *Lsa=malloc(mid*sizeof(int));
}