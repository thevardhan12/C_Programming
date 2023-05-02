#include<stdio.h>
int main()
{
    int row, col, count,N;                                    //declaring the variable
    count = 1;                                                //initializing the count
    printf("Enter the number:");                              //take an input from the user
    scanf("%d", &N);

    for(row = 1; row <= N; row++)
    {
        for(col = 1; col <= N; col++)
        {
            if(row == 1 || col == 1 || row + col == N + 1)  //condition to check the row is 1 or col is 1 or row+col is N+1
            {
                printf("%d ", count++);                      //print the count increment value
            }
            else
            {
                printf(" ");                                //print the space
            }
        }
         printf("\n");                                      //go to new line
    }
    return 0;

}