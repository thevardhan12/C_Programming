//Write a program to count the occurrences of a number in a matrix.
#include<stdio.h>
int occurence(int *,int);
int main()
{
    int size,n;
    printf("Enter a size\n");
    scanf("%d",&size);
    printf("Enter a number\n");
    scanf("%d",&n);

    int arr[size];
    printf("Enter an array elements\n");
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    occurence(arr,size,n);
    
}
int occurence(int *,int sz,int n)
{
    for (int  i = 0; i < size; i++)
    {
        
        /* code */
    }
    
}
