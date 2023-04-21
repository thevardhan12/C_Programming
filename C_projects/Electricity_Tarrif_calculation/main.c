
#include<stdio.h>
#include "main.h"
int main()
{
    float Total;
    int opt;
    float units,per_unit_charge;
    float unpaid;
    float c_charge;
    printf("    \tWelcome to\nElectricity Tarrif Calculations\n");
    char arr[50];
    do
    {
        
        printf("Enter the coustmer name\n");
        coustmer(arr);
        community_list();
        printf("Please select your community\n");
        scanf(" %d",&opt);
        switch (opt)
        {
        case 1:
        printf("Enter the unpaid bill amount in Rupess\n");
        scanf("%f",&unpaid);
        printf("Enter a Units of Electricty used in a month \n");
        scanf("%f",&units);
        per_unit_charge=3.0;
        c_charge=current_charge(units,per_unit_charge);
        Total = community_A(unpaid,c_charge);
        print_total(c_charge,Total,arr);
        break;
        case 2:
        printf("Enter the unpaid bill amount in Rupees\n");
        scanf("%f",&unpaid);
        printf("Enter a Units of Electricty used in a month \n");
        scanf("%f",&units);
        per_unit_charge=4.5;
        c_charge=current_charge(units,per_unit_charge);
        Total=community_B(unpaid,c_charge);
        print_total(c_charge ,Total,arr);
        break;
        case 3:
        printf("Enter the unpaid bill amount in Rupees\n");
        scanf("%f",&unpaid);
        printf("Enter a Units of Electricty used in a month \n");
        scanf("%f",&units);
        per_unit_charge=6;
        c_charge=current_charge(units,per_unit_charge);
        Total=community_C(unpaid,c_charge);
        print_total(c_charge ,Total,arr);
        break;
        default:
        printf("!ERROR\n Please select correct community\n");
        for (int i = 0; i < 25; i++)
        {
            printf("--");

        }
        printf("\n");
        break;
        }
        sleep(1);
    
    } while (1);
    
    

    

}
