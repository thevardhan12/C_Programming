#include<stdio.h>
#include<stdlib.h>
double median(int *arr,int size);

int main()
{
    int size=5;
    int *arr=calloc(size,sizeof(int));
    printf("Enter an array elements\n");
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
   /* for (int  i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }*/
    printf ("%g\n",median(arr,size));
}
double median(int *arr,int size)
{
    int mean=0,sum=0;
    float var;
    for (int  i = 0; i < size; i++)
    {
        mean=mean+arr[i];
        
    }
    mean=mean/size;
    for (int  i = 0; i < size; i++)
    {
        arr[i]=arr[i]-mean;
        arr[i]=arr[i]*arr[i];
        sum=sum+arr[i];
        
    }
        return (float)sum/size;
   
    
}