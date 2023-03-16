#include<stdio.h>
#include<stdlib.h>
int main()
{
    int r1,c1,r2,c2,r3,c3;
    printf("read row and col values of 1st matrx\n");
    scanf("%d%d",&r1,&c1);
    printf("read row and col values of 2nd matrx\n");
    scanf("%d%d",&r2,&c2);
    int **mat1[r1];
    int **mat2[r2];
    int **mat3[r3];
    creat_array(mat1,r1,c1);
    read(mat1,r1,c1);
    creat_array(mat2,r2,c2);
    read(mat2,r2,c2);
    creat_array(mat2,r2,c2);
    read(mat2,r2,c2);
    addition(mat1,mat2,mat3,r3,c3);
    for (int i = 0; i < r3; i++)
    {
        for (int j = 0; j < c3; j++)
        {
            printf("%d\n",mat3[i][j]);
        }
        
    }
    
}
creat_array(int **mat,int r,int c)
{
    for (int i = 0; i<r ; i++)
    {
        mat[i]=calloc(c,sizeof(int));
        
    }
}
read(int **mat,int r,int c)
{
    for (int  i = 0; i < r; i++)
    {
        for (int  j = 0; j < c; j++)
        {
            scanf("%d",&mat[i][j]);
        }   
    }
}
addition(int **mat1,int**mat2,int **mat3,int r,int c)
{
    for (int  i = 0; i < r; i++)
    {
        for (int  j = 0; j < c; j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
            
        }   
    }


}