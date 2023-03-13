#include<stdio.h>
#include"a.h"
void coustmer(char *arr)
{
    scanf("%s[^\n]",arr);
}
void community_list()
{
    printf(" 1.Community-A\n 2.Community-B\n 3.Community-C\n");
}
float community_A(float unpaid,float c_charge)
{
    float units;
    int coustmer_charge;
    if(unpaid<200&&unpaid>0)
    {
        coustmer_charge=25;
        float surge=0.25*unpaid;
        return surge+c_charge+coustmer_charge;
    }
    else if(unpaid<500&&unpaid>=200)
    {
        coustmer_charge=30;
        float surge=0.35*unpaid;
        return surge+c_charge+coustmer_charge;
    }
    else
    {
        coustmer_charge=35;
        float surge=0.50*unpaid;
        return surge+c_charge+coustmer_charge;
    }
    


}
float community_B(float unpaid,float c_charge)
{
    float units;
    int coustmer_charge;
    if(unpaid<200&&unpaid>0)
    {
        coustmer_charge=40;
        float surge=0.30*unpaid;
        return surge+c_charge;
    }
    else if(unpaid<500&&unpaid>=200)
    {
        coustmer_charge=50;
        float surge=0.35*unpaid;
        return surge+c_charge;
    }
    else
    {
        coustmer_charge=60;
        float surge=0.40*unpaid;
        return surge+c_charge;
    }
    


}
float community_C(float unpaid,float c_charge)
{
    float units;
    int coustmer_charge;
    printf("Enter a Units of Electricty used in a month \n");
    scanf("%f",&units);
    if(unpaid<200&&unpaid>0)
    {
        coustmer_charge=50;
        float surge=0.40*unpaid;
        return surge+c_charge;
    }
    else if(unpaid<500&&unpaid>=200)
    {
        coustmer_charge=60;
        float surge=0.45*unpaid;
        return surge+c_charge;
    }
    else
    {
        coustmer_charge=70;
        float surge=0.55*unpaid;
        return surge+c_charge;
    }
    


}
float current_charge(float units,float per_unit_charge)
{
    float Energy_cons_charge,Total_Bill;
    if(units>=10.00 && units<=250.00)
    {
        Energy_cons_charge=units*per_unit_charge;
        Total_Bill=Energy_cons_charge+ED_charge+Fixed_charge;
        return Total_Bill;
    }
    else if(units>250.00 && units<=500.00)
    {

        Energy_cons_charge=units*per_unit_charge;
        Total_Bill=Energy_cons_charge+ED_charge+Fixed_charge;
        return Total_Bill;
        
    }
    else
    {

        Energy_cons_charge=units*per_unit_charge;
        Total_Bill=Energy_cons_charge+ED_charge+Fixed_charge;
        return Total_Bill;
    }
}
void print_total(float current, float Total,char *name)
{
   
     printf("\n");
    printf("Current Month Charge is %f Rs \n",current);
     printf("\n");
  
    printf("The total amount to be paid by %s\n is %f Rs \n",name,Total);
      for (int i = 0; i < 25; i++)
   {
    printf("--");
   }
   printf("\n");
   sleep(1);
}