
#include"apc.h"
int insert_digits(Dlist **head,Dlist **tail,char *op)
{
    int data;
    for (int i = 0;op[i]!=0; i++)
    {
        data=op[i]-48;
        if(insert_last(head,tail,data)==FAILURE)
        {
            printf("ERROR:node is not created\n");
            return FAILURE;
        }
        
    }
    return SUCCESS;
}
int insert_last(Dlist **head,Dlist**tail,int data)
{
    Dlist *new=malloc(sizeof(Dlist));
    if(new==NULL)
    {
        return FAILURE;
    }
    else
    {
        new->data=data;
        new->prev=NULL;
        new->next=NULL;
    }
    if(*head==NULL)
    {
        *head=new;
        *tail=new;
        return SUCCESS;
    }
    else
    {
        (*tail)->next=new;
        new->prev=*tail;
        *tail=new;
        return SUCCESS;
    }
    

}
void print_list(Dlist **head,Dlist **tail)
{
   Dlist *temp=*head;
    if(head==NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
        while (temp!=NULL)
        {
            printf("%2d",temp->data);
            temp=temp->next;
            
        }
        printf("\n");
        
    }
}