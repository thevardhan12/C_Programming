#include "stack.h"

int Push(Stack_t **top, data_t data)
{
    Stack_t *new=malloc(sizeof(Stack_t));///allocate memory to new node
    Stack_t *temp;
    temp=*top;
    if (new==NULL)///check the return address of dynamically allocated memory
    {
        return FAILURE;
    }
    else
    {
        new->data=data;        //assign the values to the new node
        new->link=NULL;
    }
    if (*top==NULL)
    {                                           //check top address and assign the node 
        *top=new;
        return SUCCESS;
    }
    else
    {
        while (temp->link!=NULL)                    //run loop untill node of link finds null
        {
            temp=temp->link                 
        }
        temp->link=new;
        return SUCCESS;

    }
    
    

}