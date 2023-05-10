#include"hash.h"
status read_and_validation(int argc,char *argv[],Slist **head)
{
    if(argc<2)
    {
        printf("ERROR!!! please pass atleast 3 arguments\n ");

        return e_failure; 
    }
    else
    {
        for (int  i = 1; i < argc; i++)
        {
            
            fptr=fopen(argv[i],"r");
            if(fptr==NULL)
            {
                printf("ERROR %s file is not exist\n",argv[i]);
                //fclose(fptr);
                continue;
            }
            /*else
            {
                printf("%s\n",argv[i]);
            }*/
            if(strcmp((strstr(argv[i],".")),".txt")!=0)
            {
                printf("ERROR %s file is not a TEXT FILE\n",argv[i]);
                fclose(fptr);
                continue;
            }
            /*else
            {
                printf("%s\n",argv[i]);
            }*/
            fseek(fptr,0,SEEK_END);
            if(ftell(fptr)==0)
            {
                printf("ERROR %s file is EMPTY\n",argv[i]);
                fclose(fptr);
                continue;
            }
            if(insert_at_last(head,argv[i])==e_sucess)
            {
                printf("the file %s is inserted successfully\n",argv[i]);
                fclose(fptr);
                //return e_sucess;
            }
            else if(insert_at_last(head,argv[i])==unsupported)
            {
                printf(" the file %s is already existed \n",argv[i]);
                fclose(fptr);

                //return e_sucess;
            }
            else
            {
                printf("insertion of file %s is unsuccessfully\n",argv[i]);
                return e_failure;

            }
            
        }
        return e_sucess;
        
    }
}
status insert_at_last(Slist **head,char *argv)
{
    Slist *new=malloc(sizeof(Slist));
    if(new==NULL)
    {
        return e_failure;
    }
    else
    {
        strcpy(new->filename,argv);
        new->link=NULL;
    }
    if(*head==NULL)
    {
        *head=new;
        return e_sucess;
    }
    else
    {
        Slist *temp=*head;
        while(temp!=NULL)
        {
             if(strcmp(temp->filename,argv)==0)
            {
               return unsupported;
            }
            else
            {
                 temp=temp->link;
            }
        }
        Slist *temp2;
        temp2=*head;
        while (temp2->link!=NULL)
        {
            temp2=temp2->link;
            
        }
        temp2->link=new;
        return e_sucess;
    }
}


void print_list(Slist *head)
{
    Slist *temp=head;
     if (head == NULL)//to check the head is null or not
     {
	  printf("INFO : List is empty\n");//then print list is empty
     }
     else
     {
	  while (temp!=NULL)//run loop up to our enterd node to print		
	  {
	       printf("%s -> ", temp -> filename);
	       temp = temp -> link;
	  }

	  printf("NULL\n");
     }
}