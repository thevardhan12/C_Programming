#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter a string\n");
    scanf("%[^\n]",str);
    char seq[5];
    printf("enter sequence\n");
    scanf("%s",seq);
    int j;
    unsigned char count=0;
    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]==seq[0])
        {
            for( j=1;seq[j] != 0;j++)
            {
                if(str[j+i] == seq[j])
                {
                    count++;

                }
                else
                {
                    break;
                }
                
            }
            if(count == strlen(seq) -1)
                {
                    printf("the sequence is present\n");
                    break;

                }
                else
                {
                    printf("sequence is not present\n");
                    break;
                }
        }
        else
        {
            continue;
        }
    }
}