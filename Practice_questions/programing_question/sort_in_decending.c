#include<stdio.h>
#define SIZE 10
void sort_secending(int *arr);
int main()
{
    int arr[SIZE];
    printf("Enter an arrayb elements\n");
    for (int  i = 0; i < SIZE; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort_secending(arr);
    for (int  i = 0; i < SIZE; i++)
    {
        printf("%2d",arr[i]);
    }
    printf("\n");
}
void sord_secending(int *arr)
{
     int temp;
    for (int  i = 0; i < SIZE; i++)
    {
        for (int  j = 0; j < SIZE-1-i; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j] ;
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
}