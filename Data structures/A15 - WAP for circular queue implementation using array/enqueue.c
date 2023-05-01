#include "queue.h"

/* Function to Insert the element */
int enqueue(Queue_t *q, int data)
{
    if(IsQueueFull(q)==FAILURE)
    {
        return FAILURE;
        
    }
    else
    {
        q->rear=(q->rear+1)%(q->capacity);
        q->Que[q->rear]=data;
        q->count++;
        return SUCCESS;
        
    }

}