#include<stdio.h>
float miles(float kill);
int main()
{
    float kil;
    printf("Enter a kilometer\n");
    scanf("%f",&kil);
    printf("%f in miles is %f\n",kil,miles(kil));
}
float miles(float kill)
{
    return kill*0.539957;

}