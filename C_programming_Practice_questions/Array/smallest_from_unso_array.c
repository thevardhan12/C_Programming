#include<stdio.h>
int main()
{
    int arr[8]={55,2,67,9,34,4,6,8};
    int small=arr[0];
    for(int i=0;i<8;i++)
    {
        if(arr[i]<small)
        small=arr[i];

    }
    printf("%d\n",small);
}