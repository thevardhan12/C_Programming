//Write a function to reverse only first n elements of an array.

#include<stdio.h>
int reverse_n_elements(int *,int ,int);

int main()
{
    int n,size;
    printf("Enter size value\n");
    scanf("%d",&size);
    printf("Enter n value\n");
    scanf("%d",&n);
    int arr[size];
    printf("Enter an array ELEMNTS\n");
    for (int  i = 0; i < size; i++)
    {
    
    scanf("%d",&arr[i]);
        
    }
    if(n<=size)
    {
    reverse_n_elements(arr,size,n);

    }
    else
    printf("Error\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr[i]);
        
        /* code */
    }
    

}
int reverse_n_elements(int *arr,int size,int n)
{
    int temp;
    for (int  i = 0; i <= n/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1];
        arr[n-1]=temp;
        n--;


    }
    

}