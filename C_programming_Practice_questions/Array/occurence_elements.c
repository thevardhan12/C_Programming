//Write a program to count the occurrences of a number in a array.

#include<stdio.h>
int occurence(int *,int,int);
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
    printf("%d\n",occurence(arr,size,n));
    
}
int occurence(int *arr,int sz,int n)
{
    int count=0;
    for (int  i = 0; i < sz; i++)
    {
        if(arr[i]==n)
        {
            count++;
        }

        
    }
    return count;
    
}
