#include<stdio.h>
int main()
{
    int num;
    int arr[20]={2,5,98,6,585.4,6,98};
    printf("Enter a number need to check\n");
    scanf("%d",&num);
    for (int i = 0; i<8; i++)
    {
        if(arr[i]==num)
        {
            printf("%d\n",arr[i]);
            break;
        }
        
        /* code */
    }
    
}