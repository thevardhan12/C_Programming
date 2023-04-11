#include<stdio.h>
#include<stdlib.h>
#include<alloc.h>
int main()
{
    int n;
    printf("ENter the number of integers to be enered \n");
    scanf("%d",&n);
    int *ptr=malloc(n*sizeof(int));
     for (int  i = 0; i < n; i++)
    {
        printf("%d",*ptr+i); 
    }
}
void *malloc(int *ptr,int n)
{
    printf("Enter an elements\n");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);

        
    }
    
}