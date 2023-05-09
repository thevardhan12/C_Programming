#include"hash.h"
int main(int argc,char *argv[])
{
    Slist *head=NULL;
    if(read_and_validation(argc,argv,&head)!=e_sucess)
    {
        printf("ERROR!!!\nValiidation unsuccessfull\n ");
    }
    else
    {
        printf("VALIDATION completed succesfully\n ");
    }
    


}
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
                fclose(fptr);
                continue;
            }
           /*if(strcmp((strstr(argv[i],".")),".txt")!=0)
            {
                printf("ERROR %s file is not a TEXT FILE\n",argv[i]);
                fclose(fptr);
                continue;
            }
            fseek(fptr,0,SEEK_END);
            if(ftell(fptr)==0)
            {
                printf("ERROR %s file is EMPTY\n",argv[i]);
                fclose(fptr);
                continue;
            }*/
            if(insert_at_last(*head,argv[i])==e_sucess)
            {
                printf("the file %s is inserted successfully\n",argv[i]);
                fclose(fptr);
                return e_sucess;
            }
            else
            {
                printf("Insering the file %s is unsuccessfull\n",argv[i]);
                fclose(fptr);

                return e_failure;
            }
            
        }
        
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
        Slist *temp;
        temp=*head;
        while (temp->link!=NULL)
        {
            temp=temp->link;
            
        }
        temp=new;
        return e_sucess;
        
    }
}