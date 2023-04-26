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
        while (temp->link!=NULL )   //run the loop untill the NULL
        {
            pre=temp;                       //update the temp pointer values
            temp=temp->link;
        }
        free(temp);                             //free the node 
        pre->link=NULL;
        return SUCCESS;

    }
    
	

}