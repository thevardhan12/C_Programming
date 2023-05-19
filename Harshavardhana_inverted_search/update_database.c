#include"hash.h"
extern int flag;
status update_database(mainnode *hash_T[],char *filename)
{
    
    if(flag!=1)
    {
        FILE *fptr;
        fptr=fopen(filename,"r");
        if(fptr==NULL)
        {
            printf("ERROR!!! %s not exist in cureent directory\n",filename);
            return e_failure;
        }
        else
        {
            char buffer[100];
            int index=0;
            char ch;
            char *string;
                while(fscanf(fptr,"%s",buffer)!=EOF)
                {
                    string=strtok(buffer,";");
                    if(string[0]=='#')
                    {
                        //printf("in\n");
                        index =string[1]-48;
                        if(hash_T[index]==NULL)
                        {
                            printf("%d\n",index);
                            mainnode *m_new=malloc(sizeof(mainnode));
                            subnode *s_new=malloc(sizeof(subnode));
                            if(m_new==NULL)
                            return e_failure;
                            //m_new=hash_T[index];
                            strcpy( m_new->word,strtok(NULL,";"));
                            m_new->file_count=atoi(strtok(NULL,";"));
                            m_new->sub_address=s_new;
                            strcpy(s_new->file_name,strtok(NULL,";"));
                            s_new->word_count=atoi(strtok(NULL,";"));
                            m_new->next=NULL;
                            hash_T[index]=m_new;
                            for(int i=1;i<m_new->file_count;i++)
                            {
                                subnode *prev;
                                prev=s_new;
                                while(prev->next!=NULL)
                                {
                                    prev=prev->next;
                                
                                }
                                subnode *snew=malloc(sizeof(subnode));
                                strcpy(snew->file_name,strtok(NULL,";"));
                                snew->word_count=atoi(strtok(NULL,";"));
                                snew->next=NULL;
                                prev->next=snew;                            
                            }
                            //printf("in\n");
                        }
                        else
                        {
                    
                    
                            mainnode *mtemp;
                            mtemp=hash_T[index];
                            while (mtemp->next!=NULL)
                            {
                                mtemp=mtemp->next;
                            }
                            mainnode *m_new=malloc(sizeof(mainnode));
                            subnode *s_new=malloc(sizeof(subnode));
                            if(m_new==NULL)
                            return e_failure;
                            strcpy( m_new->word,strtok(NULL,";"));
                            m_new->file_count=atoi(strtok(NULL,";"));
                            m_new->sub_address=s_new;
                            strcpy(s_new->file_name,strtok(NULL,";"));
                            s_new->word_count=atoi(strtok(NULL,";"));
                            m_new->next=NULL;
                            mtemp->next=m_new;
                            for(int i=1;i<m_new->file_count;i++)
                            {
                                subnode *prev;
                                prev=s_new;
                                while(prev->next!=NULL)
                                {
                                    prev=prev->next;
                                
                                }
                                subnode *snew=malloc(sizeof(subnode));
                                strcpy(snew->file_name,strtok(NULL,";"));
                                snew->word_count=atoi(strtok(NULL,";"));
                                snew->next=NULL;
                                prev->next=snew;                            
                            }   


                        }


                    }
                    else
                    {
                        printf("ERROR!! %s is not a database file\n ",filename);
                        return e_failure;
                    }

                    
                    
                    

                        
                }
                fclose(fptr);
                flag=0;
                return e_sucess;


            
           
        }
    }
    else
    {
        printf("Database is already created so updation is not possible\n");
        return e_failure;
    }
}
            
            