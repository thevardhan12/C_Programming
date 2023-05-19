#include"hash.h"
int flag=0;
int main(int argc,char *argv[])
{    
    char f_name[15];
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
        printf(" 1.Create Database\n 2.Display Database\n 3.Search Database\n 4.Save Database\n 5.Update Database\n 6.EXIT\n");
        while (1)
        {
            printf("select the function\n");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:

                if(flag==0)
                {
                    if(create_database(hash_table,&head)==e_sucess)
                    {
                        printf("the database is created successffully\n");
                        flag=1;
                    }
                    else
                    {
                        printf("ERROR!!!! DATABASE IS not CREATED\n");
                    }
                }
                else
                printf("Create database is not possible\n");
                
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
                case 3:
                printf("enter the string\n");
                scanf("%s",data);
                if(search_data(hash_table,data)==e_sucess)
                {
                    printf("DATA found\n");
                }
                else
                {
                    printf("data not found\n");
                }
                break;
                case 4:
                if(save_database(hash_table)==e_sucess)
                {
                    printf("DATABASE is saved\n");
                }
                else
                {
                    printf("DATABASE is not saved\n");

                }
                break;
                case 5:
                
                printf("read file from user\n");
                scanf("%s",f_name);
                if(update_database(hash_table,f_name)==e_sucess)
                {
                    printf("DATABASE updated\n");
                }
                else
                {
                    printf("DATABASE is not Updated\n");
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