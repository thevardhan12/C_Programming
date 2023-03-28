#include<stdio.h>
#include<stdlib.h>
#define ROW 2
#define COl 3
void read_matrix(int *mat[]);
void read_matrix(int *mat[]);
void add_matrix(int *mat[],int *mat2[],int *sum[]);
void read_values(int *mat[]);

int main()
{
    int *mat1[ROW];
    int *mat2[ROW];
    int *sum[ROW];
     printf("Read the matrix\n");
    read_matrix(mat1);
     //printf("Read the matrix\n");
    read_matrix(mat2);
    // printf("Read the matrix\n");
    read_matrix(sum);
    printf("Read the values\n");
    read_values(mat1);
    printf("Read the values\n");
    read_values(mat2);
    add_matrix(mat1,mat2,sum);
    printf("sum is \n");
    for (int  i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COl; j++)
        {
            printf("%3d",sum[i][j]);
        }
        printf("\n");
        
    }


}
void read_matrix(int *mat[ROW])
{
   
    for (int i = 0; i < ROW; i++)
    {
        mat[i]=malloc(COl*sizeof(int));
    }
    
}
void read_values(int *mat[ROW])
{
    
    for (int  i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COl; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        
    }
    

}
void add_matrix(int *mat1[ROW],int *mat2[ROW],int *sum[ROW])
{
     for (int  i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COl; j++)
        {
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
}