#include<stdio.h>
#include<string.h>
#include"types.h"
#include"common.h"
#include"decode.h"

Status read_and_validate_decode_args(char *argv[], decodeInfo *decInfo)
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
            strcpy(decInfo->src_image_fname,argv[2]);

            
        }
        else
        {
            return e_failure;
        }
        if(argv[3]!=NULL)
        {
            strcpy(decInfo->secret_fname,argv[3]);
            char *ext=strchr(decInfo->extn_secret_file,'.');
            strcpy(decInfo->extn_secret_file,ext);
           
            
        }
        else
        {
            return e_failure;
        }
        if(argv[4]!=0)
        {
            strcpy(decInfo->stego_image_fname,argv[4]);

        }
        else
        {
            decInfo->stego_image_fname="Default_stego_beautiful.bmp";
        }

        

    }
    return e_success;
}
Status do_decoding(decodeInfo *decinfo)
{
    if(open_files(decinfo)==e_success)
    {
        printf("files are successfully opened\n");
        if(decode_magic_string(decinfo)==e_success)
        {
            printf("Magic string is decoded\n")

        }
    }
}
Status open_files(decodeInfo *decinfo)
{
     // Src Image file
    decinfo->fptr_src_image = fopen(decinfo->src_image_fname, "r");
    // Do Error handling
    if (decinfo->fptr_src_image == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", decinfo->src_image_fname);
    	return e_failure;
    }

    // Secret file
    decinfo->fptr_secret = fopen(decinfo->secret_fname, "r");
    // Do Error handling
    if (decinfo->fptr_secret == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", decinfo->secret_fname);

    	return e_failure;
    }

    // Stego Image file
    decinfo->fptr_stego_image = fopen(decinfo->stego_image_fname, "w");
    // Do Error handling
    if (decinfo->fptr_stego_image == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", decinfo->stego_image_fname);

    	return e_failure;
    }

    // No failure return e_success
    return e_success;
}
Status decode_magic_string(decodeInfo *decinfo)
{
    fseek(decinfo)

}

