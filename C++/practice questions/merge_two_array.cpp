#include<iostream>
using namespace std;
#define SZ 5
void fill(int *arr);
void merge(int *arr,int *arr2);


int main()
{
    int *arr1=new int (50);
    int *arr2=new int (50);
    fill(arr1);
    fill(arr2);
    merge(arr1,arr2);
    for (int  i = 0; i < (2*SZ); i++)
    {
        cout<<arr1[i];
    }
    
}
void fill(int *arr)
{
    for(int i=0;i<SZ;i++)
    cin>>arr[i];
}
void merge(int *arr,int *arr2)
{
    for (size_t i = 0; i < (2*SZ); i++)
    {
        arr[SZ+i]=arr2[i];
    }
    
}
