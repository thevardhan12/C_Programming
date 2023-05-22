#include<stdio.h>
#define SIZE 10
int main()
{
    int  arr[SIZE];
    printf("Enter an array\n");
    for (int  i = 0; i <SIZE ; i++)
    {
        scanf("%d",&arr[i]);
    }
    void occurences(int *arr);
    occurences(arr);
}
void occurences(int *arr)
{
     int count=0;
    for(int i=0;i<SIZE;i++)
    {
       count=0;
        for (int j = i; j < SIZE; j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                count++;
                arr[j]=arr[j+1];
            }
            
        }
        printf("the %d repeated %d times\n",arr[i],count);
        
    }

}