#include "stack.h"

int Peek(Stack_t **top)
{
    Stack_t *temp;          //take temp pointer
    temp=*top;
    if(*top==NULL)
    {
        return FAILURE;
    }
    else
    {
        while (temp->link!=NULL)   //run temp upto null and update the temp the value
        {
            temp=temp->link;
        }
        int res=temp->data;///////return the top most data value
        return res;
        

    }

}