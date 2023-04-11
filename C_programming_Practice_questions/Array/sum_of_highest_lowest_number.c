//Write a program to accept n numbers and display the sum of the highest and lowest numbers.


#include<stdio.h>
int sum(int*,int);
int main()
{
    int n;
    printf("Enter n value\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter an array ELEMNTS\n");
    for (int  i = 0; i < n; i++)
    {
    
    scanf("%d",&arr[i]);
        
    }
    printf("the sum of mini and max item is %d",sum(arr,n));
    
}
int sum(int *arr,int n)
{
    int sum=0;
    int mini=arr[0];
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<mini)
        {
            mini=arr[i];
        }
        else if (arr[i]>max)
        {
            max=arr[i];
        }
        
        
        /* code */

    }
    sum=mini+max;
    
}
