//insert item in array
#include<stdio.h>
#define SIZE 10
int pos;
int main()
{
    int arr[SIZE];
    printf("ENTER AN ARRAYA ELEMTS\n");
    for (int  i = 0; i < SIZE-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp;
    for (int  i = 0; i < SIZE; i++)
    {
        for (int  j = 0; j < SIZE-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int item;
    printf("ENTER THE ITEM TO BE INSERTEd\n");
    scanf("%d",&item);
    for(int i=0;i<SIZE;i++)
    {
        if(arr[i]>=item)
        {
            pos=i;

        }

    }
    int i;
    for (  i =SIZE-1 ; i >=pos; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[i]=item;
    for (int  i = 0; i < SIZE-1; i++)
    {
        printf("%2d",arr[i]);
    }
    
    
}