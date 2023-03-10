#include<stdio.h>
#include<stdlib.h>
void _1_d_array(int **mat,int row,int col);
void elements(int **mat ,int row,int col);
void product(int **mat1,int **mat2,int **res,int row1,int col1,int row2,int col2);

int main()
{
    int row1,col1;
    int row2,col2;
    printf("Read the row value of matrix-A\n");
    scanf("%d",&row1);
    printf("Read the col value of matrix-A\n");
    scanf("%d",&col1);
    int **mat1=malloc(row1*sizeof(int*));
    _1_d_array(mat1,row1,col1);
    elements(mat1,row1,col1);
    printf("Read the row value of matrix-A\n");
    scanf("%d",&row2);
    printf("Read the col value of matrix-A\n");
    scanf("%d",&col2);
    if(col1!=row2)
    {
        printf("Error\n");
        return 0;
    }
    int **mat2=malloc(row1*sizeof(int*));
    _1_d_array(mat2,row2,col2);
    elements(mat2,row2,col2);
    
    int **res=malloc(row1*sizeof(int*));
    _1_d_array(res,row1,col2);
    product(mat1,mat2,res,row1,col1,row2,col2);

    for (int  i = 0; i < row1; i++)
    {
        for (int  j = 0; j < col2; j++)
        {
            printf("%d ",res[i][j]);

        }

        
    }
    
}
void _1_d_array(int **mat,int row,int col)
{
     for (int  i = 0; i < row; i++)
    {
        mat[i]=calloc(col,sizeof(int));
    }

}
void elements(int **mat ,int row,int col)
{
    printf("Enter the matrix elements\n");
    for (int  i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        
    }
    
}
void product(int **mat1,int **mat2,int **res,int row1,int col1,int row2,int col2)
{
    for (int  i = 0; i < row1; i++)
    {
        for (int  j = 0; j < col1; j++)
        {
                for (int  k = 0; k < col2; k++)
                {
                    res[i][j]+=mat1[j][k]*mat2[k][j];
                }
                
        }
        
      
    }
    

}