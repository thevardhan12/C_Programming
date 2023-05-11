#include"hash.h"
int main(int argc,char *argv[])
{
    int choice ;
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
    while(1)
    {
        printf("1.Create Database\n 2.Display Database\n 3.Search Database\n 4.Save Database\n 5.Update Database\n");

    }
    if(create_database(hash_table,&head)==e_sucess)
    {
        printf("the database is created successffully\n");
    }
    else
    {
        printf("ERROR!!!! DATABASE IS not CREATED\n");
    }
}
