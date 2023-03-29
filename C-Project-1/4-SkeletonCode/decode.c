#include<stdio.h>
#include<string.h>
#include"decode.h"
#include "common.h"

Status read_and_validate_decode_args(int argc,char *argv[],decodeinfo *decinfo)
{
    if(argc>=4)
    {
        if(strcmp(strstr(argv[2],"."),".bmp")==0)
        {
            decinfo->stego_image_fname=argv[2];
        }
        else
        {
            return e_failure;
        }
    }
    return e_success;

}
Status do_decoding(decodeinfo *decinfo)
{
    if(open_files(decodeinfo *decinfo)==e_success)
    {
        printf("Files are opened succesfully\n");
        if(decode_magic_string(decinfo)==e_success)
    }
}
Status open_files(decodeinfo *decinfo)
{
    decinfo->fptr_stego_beautiful = fopen(decinfo->stego_image_fname, "r");
    if (decinfo->fptr_stego_beautiful == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", decinfo->stego_image_fname);

    	return e_failure;
    }
    return e_success;
}
Status decode_magic_string(decodeinfo *decinfo)
{
    fseek(decinfo->fptr_stego_beautiful,54,SEEK_SET);
    char magic[3];
    if(decode_data_from_image(decinfo,3,magic)==e_success)
    return e_success;
    else
    return e_failure;
    
}
Status decode_data_from_image(decodeinfo *decinfo,int size,char *magic)
{
    char data[8];
    for (int i = 0; i < 2; i++)
    {
        fread(data,1,1,decinfo->fptr_stego_beautiful)
        //decode_byte_from_lsb(data[i],magic,decinfo)
    
        
    }
    
}
Status decode_byte_from_lsb()