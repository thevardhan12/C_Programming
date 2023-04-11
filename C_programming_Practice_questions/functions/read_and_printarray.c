#include<stdio.h>
int main()
{
    int size;
    printf("Enter a size of an arrray\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter an array elements\n");
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The entered array elements are\n");
    for(int i = 0; i <size; i++)
    {
        printf("%d S",arr[i]);
        
    }
    
    
}