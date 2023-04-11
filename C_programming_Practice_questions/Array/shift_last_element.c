#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int main()
{
    int arr[SIZE];
    printf("enter array an elements\n");
    for (int  i = 0; i <SIZE ; i++)
    {
       scanf("%d",&arr[i]);
    }
    int j;
    int temp=arr[SIZE-1];
   
     for (  j = SIZE-1; j > 0; j--)
        {
            arr[j]=arr[j-1];
            
        }
        arr[j]=temp;
    for (int  i = 0; i < SIZE; i++)
    {
        printf("%2d",arr[i]);
    }
    
    
    
}