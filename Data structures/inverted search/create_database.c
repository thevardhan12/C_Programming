#include"hash.h"
status create_database(mainnode *hash_table[],Slist **head)
{
    int index=0;
    Slist *temp=*head;
    while(temp)
    {
        FILE *fptr=fopen(temp->filename,"r");
        if(fopen==NULL)
        {
            return n e_failure;
        }
        else
        {
            while(fscanf(buffer,"%s",fptr)!=EOF)
            {
                index=tolower(buffer[0])%97;
                if(hash_table[index]==NULL)
                {
                    mainnode *m_node=malloc(sizeof(mainnode));
                    subnode *s_node=malloc(sizeof(subnode));
                    if(m_node==NULL)
                    {
                        return e_failure;
                    }
                    else
                    {
                        strcpy(m_node->word,buffer);
                        m_node->sub_address=NULL;
                        m_node->file_count=1;
                        m_node->next=NULL;
                        strcpy(s_node->file_name,temp->filename);
                        s_node->word_count=1;
                        s_node->next=NULL;
                        m_node->sub_address=s_node;
                    }
                    hash_table[index]=m_node;
                }
                else
                {
                    mainnode *temp1;
                    subnode *prev;
                    temp1=hash_table[index];
                    prev=temp1->sub_address;
                    while(temp1!=NULL)
                    {
                        if(strcmp(temp->word,buffer)==0)
                        {
                            while(prev!=NULL)
                            {
                                if(strcmp(temp->filename,prev->file_name)==0)
                                {
                                    prev->word_count++;

                                }
                                else
                                {
                                    subnode *s_node=malloc(sizeof(subnode));
                                    if(s_node==NULL)
                                    {
                                        printf("ERROR \n");
                                    }
                                    else
                                    {
                                        strcpy(s_node->file_name,temp->filename);
                                        s_node->next=NULL;
                                        temp1->file_count++;
                                    }
                                }
                                prev=prev->next;

                            }

                        }
                        else
                        {
                            mainnode *m_node=malloc(sizeof(mainnode));
                            subnode *s_node=malloc(sizeof(subnode));

                            if(m_node==NULL)
                            {
                                return e_failure;
                            }
                            else
                            {
                                strcpy(m_node->word,buffer);
                                m_node->sub_address=NULL;
                                m_node->file_count=1;
                                m_node->next=NULL;
                                strcpy(s_node->file_name,temp->filename);
                                s_node->word_count=1;
                                s_node->next=NULL;
                                m_node->sub_address=s_node;
                            }
                            prev->next=m_node;


                        }
                    }

                }
            }

        }
    }
}