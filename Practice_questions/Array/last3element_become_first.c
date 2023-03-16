#include<stdio.h>
#include<stlib.h>
#define S 10
int main()
{
    int arr[S];
    printf("Enter an array elements\n");
    for (int  i = 0; i < S; i++)
    {
        scanf("%d",&arr);
    }
    int arr2[3];
    int x=S;
    for (int i = 0; i < 3; i++)
    {
        arr2[i]=arr[x-3];
        x++;
    }
    int j;
    for (  j = S-1; j >0; j--)
    {
        arr[j]=arr[j-3];
        
    }
    for ( i = 0; i < count; i++)
    {
        /* code */
    }
    
    

}