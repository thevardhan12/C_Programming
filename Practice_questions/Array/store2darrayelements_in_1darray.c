#include<stdio.h>
#define ROW 2
#define COL 5
int main()
{
    int arr[ROW][COL];
    printf("ENter ana rray elements\n");
    for (int  i = 0; i < ROW; i++)
    {
        for (int  j = 0; j < COL; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The 2d array elemnnts are \n");
    for (int  i = 0; i < ROW; i++)
    {
        for (int  j = 0; j < COL; j++)
        {
            printf("%2d",arr[i][j]);
        }
        printf("\n");
    }
    int k=0;
    int _1_D_array[ROW*COL];
    for (int  i = 0; i < ROW; i++)
    {
        for (int  j = 0; j < COL; j++)
        {
                _1_D_array[k++]=arr[i][j];    
        }
    }
    for (int i = 0; i < ROW*COL; i++)
    {
        printf("%2d",_1_D_array[i]);
    }
    printf("\n");
}