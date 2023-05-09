/**************************************************************************************************************************************************************
*Title		: main function(Driver function)
*Description	: This function is used as the driver function for the all the functions
***************************************************************************************************************************************************************/
#include "apc.h"
#include<stdio.h>
#include<string.h>
int flag1=0,flag2=0;

int main(int argc,char *argv[])
{
	/* Declare the pointers */
	Dlist *head1, *tail1, *head2, *tail2, *headR,*tailr,*head4,*tail4;
		char option, operator;
		char op1[sizeof(argv[1])];
		char op2[sizeof(argv[3])];
		head1=NULL;
		head2=NULL;
		head4=NULL;
		headR=NULL;
		tail1=NULL;
		tail2=NULL;
		tailr=NULL;
		tail4=NULL;
	if(argc==4)
	{
		/* Code for reading the inputs */
			
			if(operand(argv,op1,op2,argc)!=FAILURE)
			{
				printf("operand1 and operand2 is extracted successfully\n");
				//printf("op1 is : %s\n op2 is : %s\n",op1, op2);
				//insert the values into the doublle linked list
				if(insert_digits(&head1,&tail1,op1)==SUCCESS)
				{
					if(insert_digits(&head2,&tail2,op2)==SUCCESS)
					{
						printf("All the digits are successfully assigned to lists\n");
						printf("op1:\n");
						print_list(&head1,&tail1);
						printf("op2:\n");
						print_list(&head2,&tail2);

						
					}
				}
				else
				{
					printf("INFO:list is not created completely\n");
				}
			}
			else
			{
				printf("Error:there are no operands\n");
				return 0;

			}
			/* Function for extracting the operator */
			operator= extract_operator(argv);
			switch (operator)
			{
				case '+':
				/* call the function to perform the addition operation */
				printf("Next is addition process\n");
				/*if(addition(&head1,&tail1,&head2,&tail2,&headR,&tailr,argv)==SUCCESS)
				{
					printf("Addition is succeesfull\n");
					print_list(&headR,&tailr);
				}*/
					break;
				case '-':	
				/* call the function to perform the subtraction operation */
					break;
				case '*':	
				/* call the function to perform the multiplication operation */
					break;
				case '/':	
				/* call the function to perform the division operation */
					break;
				default:
					printf("Invalid Input:-( Try again...\n");
			}
			return 0;
	}
	else
	{
		printf("ERROR:Enter correct number of arguments\n");
		return 0;
	}
}
char extract_operator(char *argv[])
{
	char operator;
	operator=argv[2][0];
	return operator;
	
}
int operand(char *argv[],char *op1, char *op2, int argc)
{
	int j, i = 1;
		for ( j = 0; argv[i][j]!= '\0'; j++)
		{
			op1[j]=argv[i][j];
			
		}
		op1[j]='\0';
	i = 3;
	for ( j = 0; argv[i][j]!= '\0'; j++)
		{
			op2[j]=argv[i][j];
			
		}
		op2[j]='\0';
	return SUCCESS;


}
int check_signs(Dlist **head1, Dlist **tail1, Dlist **head2, Dlist **tail2,char *argv[])
{
	int count1=0;
	int count2=0;
	int head1=0,head2=0;
	Dlist *temp=*head1;
	Dlist *temp2=*head2;
	while (temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	count1=count1+1;
	while (temp2!=NULL)
	{
		count2++;
		temp2=temp2->next;
	}
	count2=count2+1;
	temp=*head1;
	temp2=*head2;
	if(count1=count2)
	{
		while (temp!=NULL && temp2!=NULL)
		{
			if(temp->data >temp2->data)
			{
				printf("the 1st operand is bigger value\n")
				break;
			}
			else if(temp->data <temp2->data)
			{


			}

			
		}
		return 
		

	}
	
	

}
