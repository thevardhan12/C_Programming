
#include<stdio.h>
void insertion(int *arr,int);
int main()
{
    int size,item;
    printf("Enter a size\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter a an array elements\n");
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    printf("Enter a item to inser \n");
    scanf("%d",&item);
    insertion(arr,size,item);
    for (int  i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
}
void insertion(int *arr,int n,int item)
{
    for (int  i = 0; i < n; i++)
    {
        item=arr[i];
        for (int  j-1 = 0; item < arr[i]&&i>=0; i--)
        {
            arr[i+1]=arr[i];
            arr[i+1]=item;
        }
            }}        }
        
    }
    
}