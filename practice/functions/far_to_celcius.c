/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
float celcius(float far)
{
     float c;
     c=(far-32)/1.8;
}
int main()
{
     float f,res;
     printf("ENTER THE VALUE OF FARAHANEHIT \n");
     scanf("%f",&f);
     res=celcius(f);
     printf("%g\n",res);


}

