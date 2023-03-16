#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 4
int main()
{
    int mat[ROW][COL];
    printf("ENter an araar elements\n");
    for (int  i = 0; i < ROW; i++)
    {
        for (int  j = 0; j < COL; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("2-d array elements are\n");
    for (int  i = 0; i < ROW; i++)
    {
        for (int  j = 0; j < COL; j++)
        {
            printf("%2d",mat[i][j]);
        }
        printf("\n");
    }
    int temp;
     for (int  i = 0; i < ROW; i++)
    {
        
        for (int  j = 0; j < COL; j++)
        {
            temp=mat[i][j];
            mat[j][i]=temp;
            mat[i][j]=mat[j][i];

        }
    }
    for (int  i = 0; i < ROW; i++)
    {
        for (int  j = 0; j < COL; j++)
        {
            printf("%2d",mat[i][j]);
        }
        printf("\n");
    }
       
}