#include"hash.h"
int main(int argc,char *argv[])
{


    
    int choice ;
    mainnode *hash_table[SIZE]={NULL};

    Slist *head=NULL;

    if(read_and_validation(argc,argv,&head)!=e_sucess)
    {
    printf("ERROR!!!\nValiidation unsuccessfull\n ");
    return e_failure;
    }
    else
    {
    printf("VALIDATION completed succesfully\n ");
    print_list(head);
    while (1)
    {



        printf("1.Create Database\n 2.Display Database\n 3.Search Database\n 4.Save Database\n 5.Update Database\n 6.EXIT\n");
        printf("select the function\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            if(create_database(hash_table,&head)==e_sucess)
            {
                printf("the database is created successffully\n");
            }
            else
            {
                printf("ERROR!!!! DATABASE IS not CREATED\n");
            }
            break;
            case 2:
            if(display_database(hash_table)==e_sucess)
            {
                printf("DATABASE is successfullly displayed\n");
            }
            else
            {
                printf("ERROR !!!!! in dispalying of database\n");
            }
            break;
            case 6:
            return e_sucess;
            default:
            printf("Enter valid options\n");
            
        }
    }
}
}