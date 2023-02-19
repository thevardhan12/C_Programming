#include<stdio.h>
int main()
{
    int arr={7,6,8,2,77,7,16,5,63};
    int max=arr[0];
    int mini=arr[0];
    for (int  i = 0; i < 9; i++)
    {
        if (arr[i]<mini)
        {
            mini=arr[i];
            /* code */
        }
        if (arr[i]>max)
        {
            max=arr[i];
            /* code */
        }
    }
    
}