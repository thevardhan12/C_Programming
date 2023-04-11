#include<stdio.h>
#include<string.h>
void remove_common_char(char *str1,char *str2);;

int main()
{
    char str1[80];
    char str2[80];
    printf("ENTer both strings\n");
    scanf("%[^\n]",str1);
    scanf("%[^\n]",str2);
    remove_common_char(str1,str2);


}
void remove_common_char(char *str1,char *str2)
{
    int flag;
    for(int i=0;str1!=0;i++)
    {
        for(int j=0;str2!=0;j++)
        {
            if(str1[i]==str2[j])
            {
                flag=1;
            }
        }
    }
}