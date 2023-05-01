#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#ifndef APC_H
#define APC_H
#define SUCCESS 0
#define FAILURE -1

typedef int data_t;
typedef struct node
{
	struct node *prev;
	data_t data;
	struct node *next;
}Dlist;

/* Include the prototypes here */

#endif
int division(Dlist **head1, Dlist **tail1, Dlist **head2, Dlist **tail2, Dlist **headR);

int addition(Dlist **head1, Dlist **tail1, Dlist **head2, Dlist **tail2, Dlist **headR,Dlist **tailr,char *argv[]);
int multiplication(Dlist **head1, Dlist **tail1, Dlist **head2, Dlist **tail2, Dlist **headR);
int subtraction(Dlist **head1, Dlist **tail1, Dlist **head2, Dlist **tail2, Dlist **headR);
char extract_operator(char *argv[]);
int operand(char *argv[],char *,char *,int);
int insert_digits(Dlist **head,Dlist **tail,char *op);
int insert_last(Dlist **head,Dlist **tail,int data);
void print_list(Dlist **head,Dlist **tail);