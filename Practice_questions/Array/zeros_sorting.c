#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void sort(int *arr);
int main()
{
    int *a=malloc(SIZE * sizeof(int));
    printf("Enter an array elemenyts\n");
    for (int  i = 0; i < SIZE; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a);
    for (int  i = 0; i < SIZE; i++)
    {
        printf("%2d",a[i]);
    }
    printf("\n");

    
}
void sort(int *arr)
{
    int temp;
    for (int  i = 0; i < SIZE; i++)
    {
        for (int  j = 0; j < SIZE; j++)
        {
            if(arr[i]!=0)
            {
                arr[i]=arr[i+1];
            }
            
            
            
        }
        
    }
    
}