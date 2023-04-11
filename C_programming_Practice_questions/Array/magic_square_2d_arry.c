#include<stdio.h>
#include<stdlib.h>
void magic_sq(int **,int);
int main()
{
    int num;
    printf("Enter a numbe");
    scanf("%d",&num);
    int **arr=calloc(num,sizeof(int*));
    for (int i = 0; i < num; i++)
    {
        arr[i]=calloc(num,sizeof(int));
    }
    
    magic_sq(arr,num);
    for (size_t i = 0; i < num; i++)
    {
        for (int  j = 0; j< num; i++)
        {
            printf("%d",arr[num][num]);
        }
        
    }
    return 0;
    
}
void magic_sq(int **arr,int n)
{
    arr[0][n/2]=1;
    for (int  i = 1; i < n*n; i++)
    {
        
        if(arr[])
    }
    

}