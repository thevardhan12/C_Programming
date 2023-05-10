#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define SIZE 27
char buffer[100];

typedef enum{
    e_sucess,
    e_failure,
    unsupported
}status;
typedef struct list
{
    char filename[20];
    struct list *link;
}Slist;



typedef struct sub
{
    int word_count;
    char file_name[100];
    struct sub *next;
}subnode;



typedef struct main_node
{
    int file_count;
    char word[100];
    subnode *sub_address;
    struct main_node *next;
}mainnode;




FILE *fptr;
status read_and_validation(int argc,char *argv[],Slist **head);
status insert_at_last(Slist **head,char *argv);
void print_list(Slist *head);
status create_database( );