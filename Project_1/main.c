#include<stdio.h>
#include "a.h"
int main()
{
    float Total;
    int opt;
    float units;
    float unpaid;
    float c_charge;
    printf("    Welcome \nElectrical Tarrif Calculations\n");
    printf("Enter the coustmer name\n");
    char arr[50];
    coustmer(arr);
    community_list();
    scanf(" %d",&opt);
    
    
        
        switch (opt)
        {
        case 1:
        printf("Enter the unpaid bill amount\n");
        scanf("%f",&unpaid);
        printf("Enter a Units of Electricty used in a month \n");
        scanf("%f",&units);
        c_charge=current_charge(units);
        Total = community_A(unpaid,c_charge);
        print_total(Total,arr);
        break;
        case 2:
        printf("Enter the unpaid bill amount\n");
        scanf("%f",&unpaid);
        printf("Enter a Units of Electricty used in a month \n");
        scanf("%f",&units);
        c_charge=current_charge(units);
        Total=community_B(unpaid,c_charge);
        print_total(Total,arr);
        break;
        case 3:
        printf("Enter the unpaid bill amount\n");
        scanf("%f",&unpaid);
        printf("Enter a Units of Electricty used in a month \n");
        scanf("%f",&units);
        c_charge=current_charge(units);
        Total=community_C(unpaid,c_charge);
        print_total(Total,arr);
        break;
        default:
        printf("select correct community\n");
        break;
        }
        
    

    

}
