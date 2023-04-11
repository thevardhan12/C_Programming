#include<stdio.h>
#define SIZE 10
int main()
{
    int item;
    printf("Enter an item\n");
    scanf("%d",&item);
    int arr[SIZE];
    printf("Enter an array element in  sorted form upto 10 elememts\n");
    for (int  i = 0; i < SIZE-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    int i;
    for (  i = SIZE-2; item<arr[i]&& i>=0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[i+1]=item;
     for (int  i = 0; i < SIZE; i++)
    {
        printf("%2d",arr[i]);
    }
    printf("\n");
}