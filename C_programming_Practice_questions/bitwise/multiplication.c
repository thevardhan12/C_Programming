#include <stdio.h>
int mult(int ,int ,int);
int main()
{
    unsigned int num,n,err=0;
    printf("Enter a number and power\n");
    scanf("%u%u",&num,&n);
    mult(num,n,err);
}
int mult(int num,int n,int err)
{
    unsigned int result=num;
    while(n>0)
    {
      num=num<<1;
      n--;
      if(num<result)
      {
        err=1;
        break;

      }
      result=num;
    }
    if(err=1)
    {
        printf("stack overflow\n");
    }
    else
    printf("%u",result);



    
}