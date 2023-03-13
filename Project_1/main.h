#include<stdio.h>
#include<unistd.h>
#define ED_charge 25
#define Fixed_charge 60
void coustmer(char*);
void community_list();
float current_charge(float units,float);
float community_A(float unpaid,float c_charge);
float community_B(float unpaid,float c_charge);
float community_C(float unpaid,float c_charge);
void print_total(float ,float Total,char *name);