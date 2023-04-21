
#include "sll.h"

//remove duplicate data's from list
int remove_duplicates( Slist **head )
{
    Slist *temp1,*temp2,*prev;
    temp1=*head;
   // temp2=temp1->link;
    //prev=temp1;
    if(*head==NULL)
    return FAILURE;
    else if(temp1->link==NULL)
    return SUCCESS;
    else
    {
        while(temp1!=NULL)
        {
             prev=temp1;
             temp2=temp1->link;
            while(temp2!=NULL)
            {
                if(temp1->data==temp2->data)
                {
                    prev->link=temp2->link;
                    free(temp2);
                    temp2=prev->link;
                }
                else{
                    prev = temp2;
                temp2=temp2->link;
                }
                
            }
            temp1=temp1->link;
        }
        return SUCCESS;
    }

}