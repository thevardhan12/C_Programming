//Write a _program to modify the elements of an array such that the last element becomes the first element of the array and all other elements are shifted to right.123456789 -7 9 1 2 3 4 5 678
//We can say that we have rotated the array to the right by one element. Now modify tile 'above program so that we can rotate the array by any number of elements. For example when we rotate the array by 3 elements the result would be- l 2 3 4 5 6 7 8 9 -7 78 9 1 2 3 4 5 6.
#include<stdio.h>
int modify_n_elements(int *,int ,int);

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
    modify_n_elements(arr,size,n);

    }
    else
    printf("Error\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",arr[i]);
        
        /* code */
    }
    

}
int modify_n_elements(int *arr,int sz,int n)
{
    int temp;
    for (int  i = 0; i < sz; i++)
    {
        for (int  j = 0; j < ; j++)
        {
            /* code */
        }
        
    
        
    }
    

}