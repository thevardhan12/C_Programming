#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void bubble_sort(char *);
int main()
{
    char *arr=calloc(5,sizeof(char));
    printf("Enter a elements\n");
    scanf("%[^\n]",arr);
    bubble_sort(arr);
    printf("%s\n",arr);



}
void bubble_sort(char *str)
{
    char temp;
    for (int  i = 0; str[i]!=0; i++)
    {
        for (int  j = 0; j < strlen(str)-1; j++)
        {
            if (str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
               
            }
            
        }
        
    }
    
}