//Write a program to accept n numbers in array and display the addition of all even numbers and multiplication of all odd numbers.
#include<stdio.h>
long int mul(int *,int);
int sum(int *,int);
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
    printf("the sum of mini and max item is %ld",mul(arr,n));

    
}
int sum(int *arr,int n)
{
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        if(arr[i]%2==0)
        {
            sum=sum+arr[i];


        }

        /* code */
    }
    return sum;
    
}
long int mul(int *arr,int n)
{
    int mul=1;
    for (int  i = 0; i < n; i++)
    {
        if(arr[i]%2)
        {
            mul=mul*arr[i];


        }
        /* code */
    }
    return mul;
}