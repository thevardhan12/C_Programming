// Write a program to check that the elements of an array are distinct.
#include<stdio.h>
int distinct(int *arr,int sz);


int main()
{int size;
    printf("Enter size value\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter an array ELEMNTS\n");
    for (int  i = 0; i < size; i++)
    {
    
    scanf("%d",&arr[i]);
        
    }
    if(distinct(arr,size))
    {
        printf("The elements of array are NOT distinct\n");

    }
    else
        printf("The elements of array are  distinct\n");

}
int distinct(int *arr,int sz)
{
    int count=0;
    for (int  i = 0; i < sz; i++)
    {
        for (int  j = i+1; j< sz; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
            /* code */
        }
        
        /* code */
    }
    return count;
    
}