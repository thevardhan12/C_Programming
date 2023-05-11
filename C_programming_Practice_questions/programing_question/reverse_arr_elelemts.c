#include<stdio.h>
int main()
{
    int size;
    printf("enter arraya size\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter an array elements\n");
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);

    }
    void reverse_array(int *,int n);
    reverse_array(arr,size);
    for (int  i = 0; i < size; i++)
    {
        printf("%d",arr[i]);

    }
}

void reverse_array(int *arr,int n)
{
    int tmp;
    for (int  i = 0; i < n/2; i++)
    {
       tmp = arr [ i ] ;  
        arr [ i ] = arr [ n - 1 - i ] ;  
        arr [ n - 1 - i ] = tmp ;  
    }
    
}
