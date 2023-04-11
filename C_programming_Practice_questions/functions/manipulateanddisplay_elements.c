#include<stdio.h>
#include<stdlib.h>
void menu(void);
void menu2(void);
void add_elements(char *ptr,char *flag);

int main()
{
    char *flag=calloc(6,sizeof(char));
    char choice;
    void *ptr=malloc(8);
    while(1)
    {
    menu();
    printf("Enter a choice\n");
    scanf("%c",&choice);
    switch (choice)
    {
        case '1':
        add_elements(ptr,flag);
        break;
    }
    }

    
}
void add_elements(void *ptr,char *flag)
{
    menu2();
    char opt;
    printf("choose the data-type\n");
    scanf(" %c",&opt);
    switch(opt)
    {
        case 4:
        if(flag[4]==0)
        {
            printf("ENter an element\n");
            scanf("%f",(float *)ptr+1)
            flag[4]=1;
        }
        break;
    }
}












void menu()
{
    printf(" 1.Add element\n 2.Remove element\n 3.Display element\n 4.Exit from the program\n");
}
void menu2()
{
    printf(" 1.char\n 2.short\n 3.int\n 4.float\n 5.double\n");
}
