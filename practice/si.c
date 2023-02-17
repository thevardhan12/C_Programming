/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
float si(float p,float r,float y);
int main()
{
     float p,r,y;
    printf("Enter principle,rate and year\n");
   scanf("%f%f%f",&p,&r,&y);
   printf("The SI for the %g is %g \n",p,si(p,r,y));


}

float si(float p,float r,float y)
{
     return (p*r*y)/100;
}
