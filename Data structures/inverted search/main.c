#include"hash.h"
int main(int argc,char *argv[])
{
    mainnode *hash_table[SIZE]={NULL};
    
    Slist *head=NULL;
    if(read_and_validation(argc,argv,&head)!=e_sucess)
    {
        printf("ERROR!!!\nValiidation unsuccessfull\n ");
    }
    else
    {
        printf("VALIDATION completed succesfully\n ");
        print_list(head);
    }
    if(create_database(hash_table,&head)==e_sucess)
    {
        printf("the database is created successffully\n");
    }
}
