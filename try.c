#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr=fopen("try.txt","r");
    char buffer[100];
            char *string;
            int index=0;
            while(fscanf(fptr,"%s",buffer)!=EOF)
            {
                string=strtok(buffer,";");
                if(string[0]=='#')
                {
                    index =string[1]-48;
                    string=strtok(NULL,";");
                    while (string!=NULL)
                    {
                        printf("%s\n",string);
                        string=strtok(NULL,";");
                    
                    }

                }
                

            }
}