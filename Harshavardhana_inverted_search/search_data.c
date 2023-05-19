#include"hash.h"
status search_data(mainnode *hash_T[],char *data)
{
    int index=0;
    index=tolower(data[0])%97;
    mainnode *temp=NULL;
    subnode *s_temp=NULL;
    if(hash_T[index]==NULL)
    {
        return e_failure;
    }
    else
    {
        temp=hash_T[index];
        while(temp)
        {
            if(strcmp(temp->word,data)==0)
            {
                s_temp=temp->sub_address;
                while(s_temp)
                {
                    printf("word count and file name :%d %s\n",s_temp->word_count,s_temp->file_name);
                    s_temp=s_temp->next;
                }
                return e_sucess;
            }
            else
            {
                temp=temp->next;
            }
            

        }
    }


}
