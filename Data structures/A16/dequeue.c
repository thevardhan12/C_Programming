#include "queue.h"

int dequeue(Queue_t **front, Queue_t **rear)
{
    Queue_t *temp=NULL;
    if(*front==NULL&&*rear==NULL)
    {
        return FAILURE;
    }
    else
    {
        temp=*front;
        *front=temp->link;
        free(temp);
        return SUCCESS;


    }


}