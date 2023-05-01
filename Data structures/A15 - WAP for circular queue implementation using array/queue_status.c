#include "queue.h"

int IsQueueFull(Queue_t *q)
{
    if(q->count!=0)
    {
        return SUCCESS;
    }
    
}

int IsQueueEmpty(Queue_t *q)
{
    if(q->count!=0)
    {
        return SUCCESS;
    }
    else
    return FAILURE;
   
}