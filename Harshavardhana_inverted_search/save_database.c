#include"hash.h"
status save_database(mainnode *hash_T[])
{
    char f_name[20];
    printf("Read the filename from user\n ");   //validate the filename there in direvtory or not
    scanf("%s",f_name);
    if(strcmp(strstr(f_name,"."),".txt")==0)
    {
        FILE *fptr=fopen(f_name,"r");
        if(fptr==NULL)
        {
            printf("The file is not present in current directory\n");
            //fclose(fptr);
            fptr=fopen(f_name,"w+");
            mainnode *m_temp;
            subnode *s_temp;
            for (int  i = 0; i < 27; i++)
            {
                if(hash_T[i]!=NULL)
                {
                    m_temp=hash_T[i];
                    //fprintf(fptr,"#");                   //open the file and store the data from data base
                    while (m_temp)
                    {
                        fprintf(fptr, "#%d;%s;%d;" ,i,m_temp->word,m_temp->file_count);
                        s_temp=m_temp->sub_address;
                        while(s_temp)
                        {
                            fprintf(fptr,";%s;%d;",s_temp->file_name,s_temp->word_count);
                            s_temp=s_temp->next;
                        }
                        fprintf(fptr,"#\n");
                        m_temp=m_temp->next;
                    }
                    

                }
            }
            fclose(fptr);
            return e_sucess;
            
        }
        else
        {
            fseek(fptr,0,SEEK_END);
            if(ftell(fptr)==0)
            {
                printf("file is empty\n");              //open the file and save the database
                fclose(fptr);
                fptr=fopen(f_name,"w+");
                mainnode *m_temp;
                subnode *s_temp;
                for (int  i = 0; i < 27; i++)
                {
                    if(hash_T[i]!=NULL)
                    {
                        m_temp=hash_T[i];
                    //fprintf(fptr,"#");
                        while (m_temp)
                        {
                            fprintf(fptr,"#%d;%s;%d;",i,m_temp->word,m_temp->file_count);
                            s_temp=m_temp->sub_address;
                            while(s_temp)
                            {
                                fprintf(fptr,"%s;%d",s_temp->file_name,s_temp->word_count);
                                s_temp=s_temp->next;
                            }
                            fprintf(fptr,"#\n");
                            m_temp=m_temp->next;
                        }


                    }
                }
                fclose(fptr);   
                return e_sucess; 
            }
            else
            {
                printf("ERROR!!!please pass empty file\n");
                return e_failure;

            }



        }
    }
    else
    {
        printf("ERROR!!!!! Please pass .txt file\n ");
        return e_failure;
    }
    
    //read filename from user 
    //check the extension
    //check the file present or not
    //if it is empty directly save the data else print error pass the empty file
    //else open a file with write mode

}
