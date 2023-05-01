#include "queue.h"

int enqueue(Queue_t **front, Queue_t **rear, int data)
{
    Queue_t *new=malloc(sizeof(Queue_t));
    if(new==NULL)
    {
        return  FAILURE;
    }
    else
    {
        new->data=data;  
    }
    if(*front==NULL&&*rear==NULL)
    {
        *front=new;
        *rear=new;
        (*rear)->link=new;
        return SUCCESS;
    }
    else
    {
        (*rear)->link=new;
        *rear=new;
        (*rear)->link=*front;
        return SUCCESS;
    }


}