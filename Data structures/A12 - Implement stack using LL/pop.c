#include "stack.h"

int Pop(Stack_t **top)          
{   
    Stack_t *temp,*pre;         //take two temp pointers and assign them with *head value
    temp=*top;
    if (*top==NULL)                   //check top contains NULL
    {
        return FAILURE;
    }
    else
    {
        Stack_t *temp;
        temp=*top;
        *top=temp->link;
        free(temp);
        return SUCCESS;

    }
    
	

}