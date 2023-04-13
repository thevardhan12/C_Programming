#include<stdio.h>
#include<string.h>
struct example
{                                    //structure declration.
    int data;
    char str[10];
};
struct 
{
    int data;
    char name[10];                       //anonymous structure
}s2;
struct pointer
{
    int data;
    int salary;
};

int main()
{
    struct example s={10,"HArsha"};        //direct initialisation
    printf("%d,%s\n",s.data,s.str);
    s.data=100;                           //reassigning the va;lues
    strcpy(s.str,"Harsha");
    //s.str="Harsha";                         //error bcoz we cant string initilase like this
    s2.data=500;
    strcpy(s2.name,"vardhan");
    //s2.name="Vardhan";
    printf("%d,%s\n",s2.data,s2.name);
    struct pointer stru,*p1; 
    p1=&stru;             //declaring pointer to a structure
    (*p1).data=0xbeef;
    (*p1).salary=0xdead;
    // or
    printf("%s %p %p\n",s2.name,p1->data,p1->salary);

    
}
