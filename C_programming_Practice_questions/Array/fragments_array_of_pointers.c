#include<stdio.h>
#include<stdlib.h>
void fragments(int,float *[],int *);
int main()
{
    int row;
    
    printf("enter the row values\n");
    scanf("%d",&row);
    int col[row];
   
   
    int *arr[row];
    printf("Enter the col values\n");
    for(int i=0;i<row;i++)
    {
        scanf("%d",&col[i]);
    }
    /*for(int i=0;i<row;i++)
    {
        printf("%d\n",col[i]);
    }*/
    for (int  i = 0; i < row; i++)
    {
        arr[i]=calloc(col[i]+1,sizeof(float));

    }
    printf("Enter an elements\n");
    for (int  i = 0; i < row; i++)
    {
        for (int  j = 0; j < col[i]; j++)
        {
            scanf("%f",&arr[i][j]);
        }
        
    }
    fragments(row,arr,col);
    for (int  i = 0; i < row; i++)
    {
        for (int  j = 0; j <= col[j]; j++)
        {
            printf("%g ",arr[i][j]);
        }
        
    }

    

}
void fragments(int row,float *arr[row],int *col)
{
   
    
    for (int  i = 0; i < row; i++)
    {
        float avg=0;
        for (int  j = 0; j < col[i]; j++)
        {
            avg=(avg+arr[i][j]);
        }
        avg=avg/col[i];
        arr[i][col[i]]=avg;
    }
    float *temp=0;
    for (int  i = 0; i < row; i++)
    {
       
        if(arr[i][col[i]] > arr[i+1][col[i+1]])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            int temp1 = col[i];
            col[i] = col[i+1];
            col[i+1]=temp1;
        }
    }
    

    


}