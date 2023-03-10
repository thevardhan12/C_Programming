#include<stdio.h>
#include "a.h"
#define ED_charge 25
#define Fixed_charge 60
int main()
{
    float Total;
    char opt;
    float unpaid;
    printf("    Welcome \nElectrical Tarrif Calculations\n");
    printf("Enter the coustmer name\n");
    char arr[50];
    coustmer(arr);
    
    while(1)
    {
        community_list();
        switch (opt)
        {
        case '1':
        printf("Enter the unpaid bill amount\n")
        scanf("%f",&unpaid);
        Total = community_A(unpaid);
        break;
        case '2':
        printf("Enter the unpaid bill amount\n")
        scanf("%f",&unpaid);
        Total=community_B(unpaid);
        break;
        case '3':
        printf("Enter the unpaid bill amount\n")
        scanf("%f",&unpaid);
        Total=community_B(unpaid);
        break;
        default:
        printf("select correct community\n");
        break;
        }
        break;
    }

    

}
