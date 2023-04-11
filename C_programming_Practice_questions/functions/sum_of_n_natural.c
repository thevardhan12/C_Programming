#include<stdio.h>
 int sum_n( int num);
int main()
{
     int num;
    printf("Enter the number that  limits\n");
    scanf("%d",&num);
    printf("%d\n",sum_n(num));

}
 int sum_n( int num)
{
    
    if(num>=0)
    {
        return num+sum_n(num-1);
    }
    else
    return 0;
}