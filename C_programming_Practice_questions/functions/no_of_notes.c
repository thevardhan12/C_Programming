/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
int main()
{
     int n,notes,choice;
     printf("ENTER THE RUPees\n");
     scanf("%d",&n);
     printf("Enter the value from which u want to start\n");
     scanf("%d",&choice);
     switch(choice)
     {
	  case 100:
	       notes=n%100;
	       printf("The number of %d notes required is %d \n",choice,notes);
	  case 50:
	       notes=n%50;
	       printf("The number of 50 notes required is %d \n",notes);
	  case 20:
	       notes=n%20;
	       printf("The number of 20 notes required is %d \n",notes);
	  case 10:
	       notes=n%10;

	       printf("The number of 10 notes required is %d \n",notes);
	  case 5:
	       notes=n%5;
	       printf("The number of 5 notes required is %d \n",notes);
	  case 1:
	       notes=n%1;
	       printf("The number of 01 notes required is %d \n",notes);
	       break;
	  default:
	       printf("Enter valid input\n");
	       break;

	       

     }



}

