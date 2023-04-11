#include<stdio.h>
#include<stdlib.h>
#define size 10
int main()
{
    int *arr=calloc(size,sizeof(int));
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr);

    }
    printf("%d\n",count(arr));

}
int count(int *arr)
{
    int count=0;
    for (int  i = 0; i < size; i++)
    {
        for (int  j = 0+1; j < size; j++)
        {
            if(arr[i]!=arr[j])
            {
                count++;

            }
            
        }
        
    }
    return count;
}