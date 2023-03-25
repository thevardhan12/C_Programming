#include <stdio.h>
#include "encode.h"
#include "types.h"
#include "common.h"
#include <string.h>
//int width,length;

/* Function Definitions */
Status read_and_validate_encode_args(char *argv[], EncodeInfo *encInfo)
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
Status do_encoding(EncodeInfo *encInfo)
{
    if(open_files(encInfo)==e_success)
    {
        printf("Files are opened succesfully\n");
        if(check_capacity(encInfo)==e_success)
        {
            printf("capacity checked\n");
            {
                if(copy_bmp_header(encInfo->fptr_src_image,encInfo->fptr_stego_image)==e_success)
                {
                    printf("Header byte is copied successfully\n");
                    if(encode_magic_string(MAGIC_STRING,encInfo)==e_success)
                    {
                        printf("ENcoding magic string is completed\n");
                        if(encode_secret_file_ext_size(strlen(encInfo->extn_secret_file),encInfo)==e_success)
                        {
                            printf("file extension size is encoded\n");
                            if(encode_secret_file_extn(encInfo->extn_secret_file,encInfo)==e_success)
                            {
                                printf("secret file extension is encodded\n");
                                if(encode_secret_file_size(encInfo->size_secret_file,encInfo)==e_success)
                                {
                                    printf("secret file data is encoded\n");
                                    if(encode_secret_file_data(encInfo)==e_success)
                                    {
                                        printf("secret data is encoded\n");
                                        if(copy_remaining_img_data(encInfo)==e_success)
                                        {
                                            printf("remaining data is sucessfully copied\n");
                                        }
                                    }
                                }
                            }
                            

                        }

                    }

                }
            }
            
            
                



            


        }


    }
    else
    {
        printf("Encoding is failed\n");

    }



}
Status copy_remaining_img_data(EncodeInfo *encinfo)
{
    char ch;
    while (ch=getc(encinfo->fptr_src_image)!=EOF)
    {
        putc(ch,encinfo->fptr_stego_image);
        
    }
    putc(ch,encinfo->fptr_stego_image);
    return e_success;
    
}

Status encode_secret_file_data(EncodeInfo *encInfo)
{
    if(encode_data_to_image(encInfo->secret_data,encInfo->size_secret_file,encInfo)==e_success)
    return e_success;
    else
    return e_failure;


}

Status encode_secret_file_size(long file_size, EncodeInfo *encInfo)
{
    if(encode_int_to_lsb(file_size,encInfo)==e_success)
    {
        return e_success;
    }
    else
    return e_failure;
}
Status encode_secret_file_extn( const char *file_extn, EncodeInfo *encInfo)
{
    if(encode_data_to_image(file_extn,strlen(file_extn),encInfo)==e_success)
    return e_success;
    else
    return e_failure;
}

Status encode_secret_file_ext_size(int size,EncodeInfo *encInfo)
{
   if(encode_int_to_lsb(size,encInfo)==e_success)
   {
    return e_success;
   }
   else
   return e_failure;
}
Status encode_int_to_lsb(int size,EncodeInfo *encInfo)
{
    char str[32];
    fread(str,1,32,encInfo->fptr_src_image);
    uint mask=1<<31;
    for (int  i = 0; i < 32; i++)
    {
        str[i]=(str[i]&0xfe)|((size&mask>>(31-i)));
        mask=mask>>1;
    }
    fwrite(str,1,32,encInfo->fptr_stego_image);
}
Status encode_magic_string(const char *magic_string, EncodeInfo *encInfo)
{
    
    if(encode_data_to_image(magic_string,strlen(magic_string),encInfo)==e_success)
    return e_success;
    else
    return e_failure;
}
Status encode_data_to_image(char *data, int size,EncodeInfo *encInfo)
{
    for (int  i = 0; i < size; i++)
    {
        fread(encInfo->image_data,1,8,encInfo->fptr_src_image);
        encode_byte_to_lsb(data[i],encInfo->image_data);
        fwrite(encInfo->image_data,1,8,encInfo->fptr_stego_image);

    }
    return e_success;
}
Status encode_byte_to_lsb(char data, char *image_buffer)
{
    for (int i = 0; i < 8; i++)
    {
        image_buffer[i]=(image_buffer[i]&~1)|((1<<(7-i)&data))>>(7-i);
    }
}
Status check_capacity(EncodeInfo *encInfo)
{

    encInfo->image_capacity=get_image_size_for_bmp(encInfo->fptr_src_image);
    encInfo->size_secret_file=get_file_size(encInfo->fptr_secret);
    if(encInfo->image_capacity>((encInfo->size_secret_file+strlen(MAGIC_STRING)+32+strlen(encInfo->extn_secret_file)+4+4)*8))
    {
        return e_success;
    }
    else
    {
        return e_failure;
    }

}
Status copy_bmp_header(FILE *fptr_src_image, FILE *fptr_dest_image)
{
    char str[54];
    fread(str,1,54,fptr_src_image);
    fwrite(str,1,54,fptr_dest_image);
    return e_success;

}
uint get_file_size(FILE *fptr)
{

    int size_of_secret_file;
    fseek(fptr,0,SEEK_END);
    size_of_secret_file=ftell(fptr);
    return size_of_secret_file;
}


/* Get image size
 * Input: Image file ptr
 * Output: width * height * bytes per pixel (3 in our case)
 * Description: In BMP Image, width is stored in offset 18,
 * and height after that. size is 4 bytes
 */
uint get_image_size_for_bmp(FILE *fptr_image)
{
    uint width, height;
    // Seek to 18th byte
    fseek(fptr_image, 18, SEEK_SET);

    // Read the width (an int)
    fread(&width, sizeof(int), 1, fptr_image);
    printf("width = %u\n", width);

    // Read the height (an int)
    fread(&height, sizeof(int), 1, fptr_image);
    printf("height = %u\n", height);
    rewind(fptr_image);
    

    // Return image capacity
    return width * height * 3;
}

/* 
 * Get File pointers for i/p and o/p files
 * Inputs: Src Image file, Secret file and
 * Stego Image file
 * Output: FILE pointer for above files
 * Return Value: e_success or e_failure, on file errors
 */
Status open_files(EncodeInfo *encInfo)
{
    // Src Image file
    encInfo->fptr_src_image = fopen(encInfo->src_image_fname, "r");
    // Do Error handling
    if (encInfo->fptr_src_image == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", encInfo->src_image_fname);
    	return e_failure;
    }

    // Secret file
    encInfo->fptr_secret = fopen(encInfo->secret_fname, "r");
    // Do Error handling
    if (encInfo->fptr_secret == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", encInfo->secret_fname);

    	return e_failure;
    }

    // Stego Image file
    encInfo->fptr_stego_image = fopen(encInfo->stego_image_fname, "w");
    // Do Error handling
    if (encInfo->fptr_stego_image == NULL)
    {
    	perror("fopen");
    	fprintf(stderr, "ERROR: Unable to open file %s\n", encInfo->stego_image_fname);

    	return e_failure;
    }

    // No failure return e_success
    return e_success;
}

