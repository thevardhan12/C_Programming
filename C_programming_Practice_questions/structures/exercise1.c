//Write a program to accept name, age and address of five persons and display the name of e
//person.
#include<stdio.h>
#include<string.h>
#define newline printf("\n");
struct details
{
    char name[10];
    int age;
    char addr[20];
} persons[5];
int main()
{
    for (int  i = 0; i < 1; i++)
    {
        printf("Enter the %d person details\n",i+1);
        printf("ENter the name,age and address of %d person\n",i+1);
        scanf("%s",persons[i].name);
        scanf("%d",&persons[i].age);
        scanf("%s",persons[i].name);
    }
    void display(struct details pers[],int size);
    display(persons,5);
    return 0;
}
void display(struct details pers[],int size)
{
    for(int i=0;i<size;i++)
    {printf("the %d person details\n",i+1);
    printf("the name,age and address of %d person\n",i+1);
        printf("%s",persons[i].name);newline
        printf("%d",persons[i].age);newline
        printf("%s",persons[i].name);newline
        
}
}

