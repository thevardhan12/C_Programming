#include"hash.h"
status display_database(mainnode *hash_table[])
{
    printf("index  Word      FileCount  FileName WordCount\n");
    printf("-----  ----      ---------  --------  ---------\n");
    for (int  i = 0; i < SIZE; i++)
    {
        if(hash_table[i]!=NULL)
        {
            print_word(hash_table[i]);

        }
        
    }
    return e_sucess;
    
}
void print_word(mainnode *head)
{
    subnode *temp;
    while(head)
    {
        printf("%d      %s          %d      ",tolower( head->word[0])%97,head->word,head->file_count);
        temp=head->sub_address;
        while(temp)
        {
            printf("%s      %d  \n",temp->file_name,temp->word_count);
            temp=temp->next;
        }
        head=head->next;
    }
    
}