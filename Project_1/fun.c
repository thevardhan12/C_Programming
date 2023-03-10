#include<stdio.h>
#include"a.h"
int ED_charge=25;
int Fixed_charge=60;
int surcharge;
float Total_amount;
float per_unit_charge;
void greetings()
{
    printf("Welcome to Electrical Tarrif Calculation \n");
}
void community_list()
{
    printf(" 1.Community-A\n 2.Community-B\n 3.Community-C\n");
}
void select_community()
{
    printf("Select your communnity\n");
    void community_list();
    int option;
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        printf("The total payble amount is %f\n",community_A());
        break;
        case 2:
        printf("The total payble amount is %f\n",community_B());
        break;
        case 3:
        printf("The total payble amount is %f\n",community_C());
        break;
        default:
        printf("Select A proper community\n");
    }
}
float community_A()
{
    int units,coustmer_charge;
    float past_bill;
    printf("Enter a Units of Electricty being used\n");
    scanf("%d",&units);
    printf("Enter a Previous Month payble amount\n");
    scanf("%f",&past_bill);
    if(units>=50 && units<=250)
    {
        per_unit_charge=1.5;
        coustmer_charge=25;
        float current_amount=charge(units,per_unit_charge,coustmer_charge);
        if(past_bill>0&&past_bill<=500)
        {
            surcharge=50;
            float amount=Total_amount(surcharge,current_amount);
            return amount;
        }
        else if(past_bill>500 && past_bill<=1000)
        {
            surcharge=100;
            float amount= Total_amount(surcharge,current_amount);
            return amount;   
        else
        {
            surcharge=0;
            return Total_amount(surcharge,current_amount);
        }
    }    
    else if(units>250&&units<=500)
    {
        per_unit_charge=2.60;
        coustmer_charge=30;
        float current_amount=charge(units,per_unit_charge,coustmer_charge);
        if(past_bill>0&&past_bill<=500)
        {
            surcharge=50;
            return Total_amount(surcharge,current_amount);        }
        else if(past_bill>500 && past_bill<=1000)
        {
            surcharge=100;
            return Total_amount(surcharge,current_amount);        } 
        else if(past_bill>1000)   
        {
            surcharge=250;
            return Total_amount(surcharge,current_amount);
        }    
        else
        {
            surcharge=0;
            return Total_amount(surcharge,current_amount);
            

        }
    }
    else
    {
        per_unit_charge=3.50;
        coustmer_charge=40;
        float current_amount=charge(units,per_unit_charge,coustmer_charge);
        if(past_bill>0&&past_bill<=500)
        {
            surcharge=50;
            printf("Total payble amount is %g\n",Total_amount(surcharge,current_amount));
        }
        else if(past_bill>500 && past_bill<=1000)
        {
            surcharge=100;
            printf("Total payble amount is %g\n",Total_amount(surcharge,current_amount));
        } 
        else if(past_bill>1000)   
        {
            surcharge=250;
            printf("Total payble amount is %g\n",Total_amount(surcharge,current_amount));
        }    
        else
        {
            surcharge=0;
            printf("Totaal payble amount is %g\n",Total_amount);

        }



    }
}
float community_B()
{
    int units,coustmer_charge;
    float past_bill;
    printf("Enter a Units of Electricty being used\n");
    scanf("%d",&units);
    printf("Enter a Previous Month payble amount\n");
    scanf("%f",&past_bill);
    if(units>=50 && units<=250)
    {
        per_unit_charge=2.70;
        coustmer_charge=40;
        float current_amount=charge(units,per_unit_charge,coustmer_charge);
        if(past_bill>0&&past_bill<=500)
        {
            surcharge=80;
            return Total_amount(surcharge,current_amount);
        }
        else if(past_bill>500 && past_bill<=1000)
        {
            surcharge=120;
            return Total_amount(surcharge,current_amount);        }
        else if(past_bill>1000)
        {
            surcharge=180;
            return Total_amount(surcharge,current_amount);

        }        
        else
        {
            surcharge=0;
            return Total_amount(surcharge,current_amount);
        }
    }    
    else if(units>250&&units<=500)
    {
        per_unit_charge=3.60;
        coustmer_charge=50;
        float current_amount=charge(units,per_unit_charge,coustmer_charge);
        if(past_bill>0&&past_bill<=500)
        {
            surcharge=80;
            return Total_amount(surcharge,current_amount);        }
        else if(past_bill>500 && past_bill<=1000)
        {
            surcharge=120;
            return Total_amount(surcharge,current_amount);        } 
        else if(past_bill>1000)   
        {
            surcharge=250;
            return Total_amount(surcharge,current_amount);
        }    
        else
        {
            surcharge=0;
            return Total_amount(surcharge,current_amount);
            

        }
    }
    else
    {
        per_unit_charge=4.50;
        coustmer_charge=60;
        float current_amount=charge(units,per_unit_charge,coustmer_charge);
        if(past_bill>0&&past_bill<=500)
        {
            surcharge=80;
             return Total_amount(surcharge,current_amount);
        }
        else if(past_bill>500 && past_bill<=1000)
        {
            surcharge=120;
             return Total_amount(surcharge,current_amount);
        } 
        else if(past_bill>1000)   
        {
            surcharge=250;
             return Total_amount(surcharge,current_amount);
        }    
        else
        {
            surcharge=0;
             return Total_amount(surcharge,current_amount);
        }



    }
}      
float community_C()
{
    int units,coustmer_charge;
    float past_bill;
    printf("Enter a Units of Electricty being used\n");
    scanf("%d",&units);
    printf("Enter a Previous Month payble amount\n");
    scanf("%f",&past_bill);
    if(units>=50 && units<=250)
    {
        per_unit_charge=3.0;
        coustmer_charge=50;
        float current_amount=charge(units,per_unit_charge,coustmer_charge);
        if(past_bill>0&&past_bill<=500)
        {
            surcharge=80;
            return Total_amount(surcharge,current_amount);
        }
        else if(past_bill>500 && past_bill<=1000)
        {
            surcharge=120;
            return Total_amount(surcharge,current_amount);        }
        else if(past_bill>1000)
        {
            surcharge=180;
            return Total_amount(surcharge,current_amount);

        }        
        else
        {
            surcharge=0;
            return Total_amount(surcharge,current_amount);
        }
    }    
    else if(units>250&&units<=500)
    {
        per_unit_charge=5.0;
        coustmer_charge=70;
        float current_amount=charge(units,per_unit_charge,coustmer_charge);
        if(past_bill>0&&past_bill<=500)
        {
            surcharge=80;
            return Total_amount(surcharge,current_amount);        }
        else if(past_bill>500 && past_bill<=1000)
        {
            surcharge=120;
            return Total_amount(surcharge,current_amount);        } 
        else if(past_bill>1000)   
        {
            surcharge=250;
            return Total_amount(surcharge,current_amount);
        }    
        else
        {
            surcharge=0;
            return Total_amount(surcharge,current_amount);
            

        }
    }
    else
    {
        per_unit_charge=6.0;
        coustmer_charge=80;
        float current_amount=charge(units,per_unit_charge,coustmer_charge);
        if(past_bill>0&&past_bill<=500)
        {
            surcharge=80;
             return Total_amount(surcharge,current_amount);
        }
        else if(past_bill>500 && past_bill<=1000)
        {
            surcharge=120;
             return Total_amount(surcharge,current_amount);
        } 
        else if(past_bill>1000)   
        {
            surcharge=250;
             return Total_amount(surcharge,current_amount);
        }    
        else
        {
            surcharge=0;
             return Total_amount(surcharge,current_amount);
        }



    }
}      

float charge(int units ,float per_unit_charge,int coustmer_charge)
{
    float Energy_charges,Total_Bill;
    Energy_charges=units*per_unit_charge;
    Total_Bill=coustmer_charge+Energy_charges+ED_charge+Fixed_charge;
}
float Total_amount(int surcharge,float current_amount)
{
   
    return surcharge+current_amount;
}