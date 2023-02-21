#include<stdio.h>
void reverse_array(int *arr);
int main()
{
    int arr[7]={5,6,8,3,4,6,7};
    int temp;
    reverse_array(arr);
    for (int i = 0; i < 7; i++)
    {
        printf("%d,",arr[i]);
        
        /* code */
    }
    

    

}
void reverse_array(int *arr)
{
    int temp;
    for (int  i = 0; i < 7/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[7-i-1];
        arr[7-i-1]=temp;
    }
}