//Write a program to count the occurrences of a number in a matrix.
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
    int count=0;
    for (int  i = 0; i < ROW; i++)
    {
        for (int  j = 0; j < COL; j++)
        {
            for (int  k = 0; k < ROW; k++)
            {
                for (int  l = 0; l < COL; l++)
                {
                 if((arr[i][j])==(arr[k]arr[l]))
                    {
                        count++;

                    }
                }
                
            }
            
        }
    }
    printf("%d\n",count);

}
