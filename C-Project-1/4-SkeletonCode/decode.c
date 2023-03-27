#include<stdio.h>
#include<string.h>
#include"types.h"
#include"common.h"
#include"decode.h"

Status read_and_validate_encode_args(char *argv[], decodeInfo *encInfo)
{
    int count=0;
    for (int  i = 0; argv[i]!=0; i++)
    {
        count++;
    }
    if(count>=4)
    {
        if(strcmp(strstr(argv[2],"."),".bmp")==0)
        {
            strcpy(encInfo->src_image_fname,argv[2]);

            
        }
        else
        {
            return e_failure;
        }
        if(argv[3]!=NULL)
        {
            strcpy(encInfo->secret_fname,argv[3]);
            char *ext=strchr(encInfo->extn_secret_file,'.');
            strcpy(encInfo->extn_secret_file,ext);
           
            
        }
        else
        {
            return e_failure;
        }
        if(argv[4]!=0)
        {
            strcpy(encInfo->stego_image_fname,argv[4]);

        }
        else
        {
            encInfo->stego_image_fname="Default_stego_beautiful.bmp";
        }

        

    }
    return e_success;
}