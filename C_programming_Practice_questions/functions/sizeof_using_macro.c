#include<stdio.h>
#define SIZEOF(x) (char*)(&x+1)-(char*)(&x)
int main()
{
    int n;char n1;float n2;double n3;short int n4;long int n5;unsigned int n6; unsigned long int n7;long double n8;long long n9;
    printf("Size of int %d:\n",SIZEOF(n));
    printf("Size of char %d:\n",SIZEOF(n1));
    printf("Size of float %d:\n",SIZEOF(n2));
    printf("Size of double %d:\n",SIZEOF(n3));
    printf("Size of short int %d :\n",SIZEOF(n4));
    printf("Size of long int %d:\n",SIZEOF(n5));
    printf("Size of unsigned int %d :\n",SIZEOF(n6));
    printf("Size of unsigned long %d:\n",SIZEOF(n7));
    printf("Size of long double %d:\n",SIZEOF(n8));
    printf("Size of long long int %d:\n",SIZEOF(n9));

}