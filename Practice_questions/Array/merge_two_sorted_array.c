//merge two sorted array
#include<stdio.h>
int *merge(int *,int *);
int main()
{
    int a[]={1,2,4,5,6,8,7};
    int b[]={2,5,6,8,9,10,11};
    int *p=merge(a,b);
    for (int  i = 0; i < 8; i++)
    {
        printf("%d",p[i]);
    }
    
}
int *merge(int *a,int *b)
{
    int i=0,j=0;
    static int r[20];
    while(i<7&&j<7)
    {
        if(a[i]<b[j])
        {
            r[i]=a[i];
            i++;
            j++;
        }
        else
        {
            r[i]=b[j];
            i++;
            j++;
        }
    }
    return r;



}