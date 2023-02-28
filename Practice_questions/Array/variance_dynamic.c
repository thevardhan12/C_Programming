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
    printf ("%lf",median(arr,size));
}
double median(int *arr,int size)
{
    int i,j,temp;
    float median;
     for(i = 0; i < size; i++)                                       //loop to sort the elements of array2 in ascending order 
    {
        for(j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j])                            //condition to compare the adjacent elements of array2
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if(size % 2 != 0)                                              //condition to check the size of array2 is even or odd
    {
        median = arr[size/2];                                  //expression to find the median of array2 if size of array2 is odd
    }
    else
    {
        median = (float)(arr[size/2] + arr[size/2 - 1])/2;    //expression to find the median of array2 if size of array2 is even
    }
    return median;
}