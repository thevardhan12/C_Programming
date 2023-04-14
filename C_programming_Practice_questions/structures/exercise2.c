//Write a program to accept name and arrival time of five trains and display the name with Rail
//time format.

#include<stdio.h>
//#include<string.h>
#define SIZE 1
#define  newline printf("\n");

struct train
{
    char name[10];
    float time;
}no_trains[SIZE];
int main()
{
     for (int  i = 0; i < SIZE; i++)
    {
        printf("Enter the Train %d details\n",i+1);
        printf("ENter the Train name and arrival time of Train %d:\n",i+1);
        scanf("%s",no_trains[i].name);
        scanf("%f",&no_trains[i].time);
        //scanf("%s",persons[i].name);
    }
    void display(struct train details[]);
    display(no_trains);
    return 0;
}
void display(struct train details[])
{
    for(int i=0;i<SIZE;i++)
    {
        printf("the %d train details\n",i+1);
        printf("the train name and time of %d\n",i+1);
        printf("%s",details[i].name);newline
        printf("%.2f",details[i].time);newline
        
}
}