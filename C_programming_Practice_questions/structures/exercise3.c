/*Write a program to accept 10 records with the structure-
struct {
char *name;
int *age;
float salary;
}
4.
Display the records before sorting and after sorting. Sorting is based on the primary key ru
and secondary keyage.*/



#include<stdio.h>
#include<string.h>
#define size 10
#define newline printf("\n");
struct
{
char *name;
int *age;
float salary;
}emp[size];
int main()
{
       for (int  i = 0; i < size; i++)
    {
        printf("Enter the employee %d details\n",i+1);
        printf("ENter the %d employe name, age & salary :\n",i+1);
        scanf("%s",emp[i].name);
        scanf("%d",&emp[i].age);
        scanf("%f",&emp[i].salary);
    }
    void display(struct  details[]);
    display(emp);
    return 0;
}
void display(struct  details[])
{
    for(int i=0;i<size;i++)
    {
        printf("the %d employe details\n",i+1);
        printf("the employee name,age & salary of %d\n",i+1);
        printf("%s",details[i].name);newline
        printf("%d",details[i].age);newline
        printf("%.2f",detais[i].salary);newline
        
}
}

