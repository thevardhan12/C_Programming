/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>

float area(float radius);
int main()
{
     float radius;
     printf("enter the radius of a circle\n");
     scanf("%f",&radius);
     printf("%lf\n",area(radius));





}

float area(float radius)
{
     return 2*radius*3.142;


}

