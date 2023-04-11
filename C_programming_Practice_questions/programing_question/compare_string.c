#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int comapre(char *,char *);
int main()
{
    char *str=calloc(50,sizeof(char));
    char *str2=calloc(50,sizeof(char));
    printf("Enter string 1 and string 2\n");
    scanf("%s",str);
    getchar();
    scanf("%s",str2);
    if(comapre(str,str2)==0)
    {
        printf("both strings are equal\n");
    }
    else
    {
        printf("both strings are NOT equal\n");

    }



}
int comapre(char *str1,char *str2)
{
    int l1=strlen(str1),l2=strlen(str2);
    if (l1!=l2)
    {
        printf(" strings are not equal\n");
        exit(0);
    }
    else
    {
        for (int i = 0; str1[i]!=0; i++)
        {
            if(str1[i]==str2[i])
            {
                return str1[i]-str2[i];

            }
            else
            return 1;
        }
        
    }
    
    

}
