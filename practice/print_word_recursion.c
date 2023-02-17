/*
Name:Harshavardhana B 
Date:
Discripton:
Sample input:
Sample output:
*/
#include<stdio.h>
void print_word(int );
int main()
{
     int num;
     printf("Enter a number \n");
     scanf("%d",&num);
     print_word(num);


}
void print_word(int num)
{
     int digi;
     digi=num%10;
     switch(digi)
	  {
	       case 0:
		    printf("zero ");
		    break;
	       case 1:
		    printf("one ");
		    break;
	       case 2:
		    printf("Two ");
		    break;
	       case 3:
		    printf("Three ");
		    break;
	       case 4:
		    printf("Four ");
		    break;
	       case 5:
		    printf("Five ");
		    break;
	       case 6:
		    printf("Six ");
		    break;
	       case 7:
		    printf("seven ");
		    break;
	       case 8:
		    printf("eight ");
		    break;
	       case 9:
		    printf("nine ");
		    break;
	       default:
		    printf("none");
		    break;
	  }
     print_word(num/10);
}

