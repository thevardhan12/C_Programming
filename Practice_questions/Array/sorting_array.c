#include<stdio.h>
int bubble_sort(int *arr,int);
int linear_sort(int *arr,int);

int main()
{
    int size;
    printf("enter a size\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter a an array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        /* code */
    }
    bubble_sort(arr,size);
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
        /* code */
    }
     
}
int bubble_sort(int *arr,int size)
{
    int temp;
    for (int  i = 0; i < size; i++)
    {
        for (int  j = 0; j < size-i-1; i++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
            
            
        }
        
        
    }
    

}
/*int linear_sort(int *arr,int size)
{
    
}
*/