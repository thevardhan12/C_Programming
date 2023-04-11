#include<stdio.h>
#include<stdlib.h>
int main()
{
    foo();

}
void foo()
{
    int *ptr=malloc(10);
    scanf("%[^\n]",ptr);
}