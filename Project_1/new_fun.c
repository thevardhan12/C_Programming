#include<stdio.h>
void coustmer(char *arr)
{
    scanf("%s[^\n]",arr);
}
void community_list()
{
    printf(" 1.Community-A\n 2.Community-B\n 3.Community-C\n");
}
float community_A(float unpaid)
{
    float units;
    int coustmer_charge;
    printf("Enter a Units of Electricty used in a month \n");
    scanf("%f",&units);
    float c_charge=current_charge(units);
    if(unpaid<200&&unpaid>0)
    {
        float surge=0.25*unpaid;
        return surge+c_charge;
    }
    else if(unpaid<500&&unpaid>=200)
    {
        float surge=0.35*unpaid;
        return surge+c_charge;
    }
    else
    {
        float surge=0.50*unpaid;
        return surge+c_charge;
    }
    


}
float current_charge(float units)
{
    int coustmer_charge;
    float per_unit_charge,Energy_cons_charge,Total_Bill;
    if(units>=50.00 && units<=250.00)
    {
        per_unit_charge=3;
        coustmer_charge=25;
        Energy_cons_charge=units*per_unit_charge;
        Total_Bill=coustmer_charge+Energy_cons_charge+ED_charge+Fixed_charge;
        return Total_Bill;
    }
}