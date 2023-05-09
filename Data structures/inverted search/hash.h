#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef enum{
    e_sucess,
    e_failure
}status;
typedef struct list
{
    char filename[20];
    struct list *link;
}Slist;
FILE *fptr;
status read_and_validation(int argc,char *argv[],Slist **head);
status insert_at_last(Slist **head,char *argv);
