#include<stdio.h>
void check_num();
int main()
{
    int arr[10],i;
    printf("Enter an array elements \n");
    for (  i = 0; i < 10; i++)
    {
        scanf("%d",arr[i]);
        check_num(arr[i]);


        /* code */
    }

    
}
void check_num(int num)
{
    if (num%2)
    {
        printf("Entered array element %d is odd  \n",num);
        /* code */
    }
    else
        printf("Entered array element %d is even  \n",num);

    

}
