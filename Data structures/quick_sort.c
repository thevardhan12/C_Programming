#include<stdio.h>
#define SIZE 10
int partition(int *arr,int low,int high)
{
    int pivot,P,Q;
    pivot=0;
    P=low+1;
    Q=high;

    while(P<Q)
    {
        while(arr[pivot]>arr[P])
        {
            P++;
        }
        while(arr[pivot]<arr[Q])
        {
            Q--;
        }
        if(P<Q)
        {
            arr[Q]=arr[Q]+arr[pivot];
            arr[pivot]=arr[Q]-arr[pivot];
            arr[Q]=arr[Q]-arr[pivot];

        }

    }
    return Q;

}
void quick_sort(int *arr,int low,int high)
{
  
    int index=0;
    if(low<high)
    {
        index=partition(arr,low,high);
        quick_sort(arr,low,index-1);
        quick_sort(arr,index+1,high);
    }
   
    
    //pivot can be any data(index) now take 0th index
    //P is next value & Q is last index
    //here both p AND Q values are index value
}
int main()
{
    int arr[10]={10,5,8,12,15,6,3,9,16,80};
    int low=0,high=SIZE-1;
    quick_sort(arr,low,high);
    for (int  i = 0; i < SIZE; i++)
    {
        printf("%2d",arr[i]);
    }
    
}