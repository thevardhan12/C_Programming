#include<stdio.h>
#include<string.h>
#include"types.h"
#include"common.h"
typedef struct _Decodeinfo
{
    //decoding file members
    char *stego_image_fname;
    FILE *fptr_stego_beautiful.bmp;
    
    //secret file details
    long file_ext_size;
    long secret_size;
    //output file details
    char output_file_name[30];
    FILE *fptr_output_file;
    char *output_fname;

}decodeinfo;

Status read_and_validate_decode_args(int,char *argv[],decodeinfo *decinfo);
Status do_decoding(decodeinfo *decinfo);
Status open_files(decodeinfo *decinfo);
Status decode_magic_string(decodeinfo *decinfo);
Status decode_data_from_image(decodeinfo *decinfo,int size,char *magic);
Status decode_byte_from_lsb();
