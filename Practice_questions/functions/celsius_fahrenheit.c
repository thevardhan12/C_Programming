#include<stdio.h>
float cel_to_far(float cel);
int main()
{
    float celcius;
    printf("Enter a celcius\n");
    scanf("%f",&celcius);
    printf(" fahrenheit = %g\n", cel_to_far(celcius));
}
float cel_to_far(float cel)
{
    float far;
    far=(1.8*cel)+32;
    return far;
}