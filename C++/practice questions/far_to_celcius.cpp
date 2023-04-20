#include<iostream>
float celcius(float  far);
int main()
{
    float far;
    std::cout<<"enter the far value\n";
    std::cin>>far;
    std::cout<<celcius(far)<<"celcius"<<std::endl;

}
float celcius(float  far)
{
    return (far-32)*5.0/9.0;
}