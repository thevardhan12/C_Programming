#include"hash.h"
status create_database(mainnode *hash_table[],Slist **head)
{
    FILE *fptr;
    //take first file in temp
    int index=0;
    Slist *temp=*head;
    while(temp)//run the loop until the temp reach null
    {
        fptr=fopen(temp->filename,"r");//check file is present in directory or not
        if(fptr==NULL)
        {
            return  e_failure;

        }
        else
        {
            while(fscanf(fptr,"%s",buffer)!=EOF)  //fetch each word from the file
            {
                index=tolower(buffer[0])%97;         //find the index of that word
                if(!(index>=0 && index<=25))
                {
                    index=26;

                }
                if(hash_table[index]==NULL)             //if the node is NULL 
                {//create new mainnode and subnode and assign the values
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
                    mainnode *p_temp1;
                    subnode *prev;
                    subnode *p_prev;
                    temp1=hash_table[index];
                    while(temp1!=NULL)          //if hashtable is not equal to Null check the word
                    {                               //present in the main node if there update the subnode
                        //else create new main node and update values
                        
                        if(strcmp(buffer,temp1->word)==0)
                        {

                            prev=temp1->sub_address;
                            while(prev!=NULL)
                            {
                                if(strcmp(prev->file_name,temp->filename)==0)
                                {
                                    (prev->word_count)++;
                                    break;

                                }
                                else
                                {
                                    p_prev = prev;
                                     prev=prev->next;
                                    
                                }

                            }
                            if( prev == NULL )
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
                                        (temp1->file_count)++;
                                        s_node->word_count=1;
                                    }
                                    p_prev->next=s_node;
                                    //return e_sucess;
                            }
                            break;

                        }
                        else
                        {
                             p_temp1 = temp1;
                             temp1=temp1->next;
                            
                          
                        }
                        
                    }
                    if( temp1 == NULL )
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
                            p_temp1->next = m_node;
                    }

                }
            }

        }
        fclose(fptr);
        temp=temp->link;
        
    }
    printf("return");
    return e_sucess;
}