/*

Name : Harshavardhana B
Date : Mar 29 2023
Description : Image Steganography

*/
#include <stdio.h>
#include <string.h>
#include "encode.h"
#include "types.h"
#include "common.h"

/* Function Definitions */

/* Get image size
 * Input: Image file ptr
 * Output: width * height * bytes per pixel (3 in our case)
 * Description: In BMP Image, width is stored in offset 18,
 * and height after that. size is 4 bytes
 */
uint get_image_size_for_bmp(FILE *fptr_image)			//function to check the .bmp image size
{
     printf("Checking for secret.txt size\n");
     uint width, height;					//declaration of unsigned int 
     // Seek to 18th byte
     fseek(fptr_image, 18, SEEK_SET);				//points to the 18th byte of the .bmp image
     // Read the width (an int)
     fread(&width, sizeof(int), 1, fptr_image);			//reads the width 
     //printf("width = %u\n", width);
     // Read the height (an int)
     fread(&height, sizeof(int), 1, fptr_image);		//reads height
     //printf("height = %u\n", height);
     // Return image capacity
     return width * height * 3;					//returns the pixcel value
}

OperationType check_operation_type(char *argv[])		//function to check the 1st arg.
{
     if(argv[1][0] == '-' && argv[1][1] == 'e')			//checks whether argv[1] equals -e
	  return e_encode;
     else if(argv[1][0] == '-' && argv[1][1] == 'd')		//checks whether argv[1] equals -d
	  return e_decode;
     else
	  return e_unsupported;
}

Status read_and_validate_encode_args(char *argv[], EncodeInfo *encInfo)	//function to check the command line arg.
{
     short sh;
     char *src_image_fname;
     if(argv[2] == NULL)					//if argv[2] not passed then terminates the program 
     {
	  return e_failure;
     }
     else
     {
	  if(strstr(argv[2], ".bmp") != NULL)			//checks if 2nd arg is .bmp are not
	  {
	       encInfo->fptr_src_image = fopen(argv[2],"r");	//opens the file in read mode
	       fread(&sh, sizeof(sh), 1, encInfo->fptr_src_image);
	       if(sh == 0x4d42)					//checks the first 2 bytes
		    encInfo->src_image_fname = argv[2];		//if condition true then the file will to copied to src_image_fname
	  }
	  else
	  {
	      	//prints msg if it is not .bmp file
	       return e_failure;
	  }
     }
     if(argv[3] == NULL)
	  return e_failure;
     else
     {
	  if(strstr(argv[3],".") != NULL)		
	  {
	       strcpy(encInfo->extn_secret_file ,strstr(argv[3], "."));		//copies the file extention
	       encInfo->secret_fname = argv[3];
	  }
     }
     if(argv[4] == NULL)
     {
	  encInfo->stego_image_fname = "stego.bmp";		//default name will be provided if argv[4] is not provied
	  
     }
     else
     {
	  encInfo->stego_image_fname = argv[4];			//if output file name is provied then the file name will be assigned to that name
     }
     return e_success;
}

Status do_encoding(EncodeInfo *encInfo)			//function for encoding
{
     if(open_files(encInfo) == e_failure)		//opens the files by function calling
     {
	  return e_failure;
     }
     else
     {
	  printf("Encoding Started\n");
	  check_capacity(encInfo);			//function calling to check the image capacity
     }
     encode_magic_string(MAGIC_STRING, encInfo);	//encode magic string function call
     if(encode_secret_file_extn(encInfo->extn_secret_file, encInfo) == e_success)	//function calling
     {	
	  printf("secret file extension is Done\n");
     }
     if(encode_secret_file_size(encInfo->size_secret_file, encInfo) == e_success)	//function calling
     {
	  printf("secret file encoding Done\n");
     }
     if(encode_secret_file_data(encInfo) == e_success)		//function calling
     {
	  printf("secret file encoding is Done\n");
     }
     if(copy_remaining_img_data(encInfo->fptr_src_image, encInfo->fptr_stego_image) == e_success)	//function calling
     {
          printf("remaining data is copied\n");
	  
	  printf("Encoding done successfully\n");
     }
}

Status check_capacity(EncodeInfo *encInfo)		//function to check the capacity of the image
{
     int min_byte;
     encInfo->image_capacity = get_image_size_for_bmp(encInfo->fptr_src_image);	
     encInfo->size_secret_file = get_file_size(encInfo->fptr_secret);	//stores the secret file size after function calling
     /*if((encInfo->size_secret_file) != 0)
     {
	  printf("INFO: Done. Not Empty\n");
     }*/
     //printf("Checking for beautiful.bmp capacity to handle secret.txt\n");
     min_byte = (54 + (sizeof(MAGIC_STRING) + sizeof(encInfo->extn_secret_file) + sizeof(int) + sizeof(encInfo->size_secret_file) + encInfo->size_secret_file) * 8);		
     if(encInfo->image_capacity >= min_byte)		//checks the condition
     {
	  
	  if(copy_bmp_header(encInfo->fptr_src_image, encInfo->fptr_stego_image) == e_success)		//function calling 
	  {
	       printf("bmp header is Done\n");
	       return e_success;
	  }
     }
     else
	  return e_failure;
}

uint get_file_size(FILE *fptr)
{
     fseek(fptr,0,SEEK_SET);		//points to the first byte
     fseek(fptr, 0, SEEK_END);		//points to the last byte
     return ftell(fptr);		//returns the size
}

Status copy_bmp_header(FILE *fptr_src_image, FILE *fptr_dest_image)
{
     printf("Copying Image Header\n");
     char arr[54];
     fseek(fptr_src_image, 0, SEEK_SET);	
     fread(arr, 1, 54, fptr_src_image); 	//reads the 1st 54 bytes
     fwrite(arr, 1, 54, fptr_dest_image);	//writes the 1st 54 bytes to arr
     return e_success;
}

Status encode_magic_string(const char *magic_string, EncodeInfo *encInfo)
{
     printf("Encoding Magic String Signature\n");
     if(encode_data_to_image((char *)magic_string, strlen(magic_string), encInfo->fptr_src_image, encInfo->fptr_stego_image) == e_success)		//function calling
     {
	  printf("magic string is Done\n");
     }
}

Status encode_data_to_image(char *data, int size, FILE *fptr_src_image, FILE *fptr_stego_image)
{
     int i;
     //printf("encode image\n");
     char str[8];
     for(i = 0; i < size; i++)
     {
	  fread(str, 8, 1, fptr_src_image);
	  encode_byte_to_lsb(data[i], str);
	  fwrite(str, 8, 1, fptr_stego_image);
     }
     return e_success;
}

Status encode_byte_to_lsb(char data, char *image_buffer)
{
     int i;
     for(i = 0 ; i < 8; i++)
     {
	  image_buffer[i] = ((image_buffer[i] & 0xFE) | ((data & ((unsigned int) 0x80 >> i)) >> (7 - i)));	//encodes the byte to image
     }
}

Status encode_secret_file_extn(const char *file_extn, EncodeInfo *encInfo)		//function to encode secret file extention
{
     printf("Encoding secret.txt File Extention\n");
     char ch;
     int i, size;
     size = strlen(file_extn);
     for(i = 0; i < 32; i++)
     {
	  fread(&ch, sizeof(ch), 1, encInfo->fptr_src_image);
	  ch = (ch & 0xFE) | ((size & (1 << (sizeof(size) * 8) - 1 - i)) >> (sizeof(size) * 8) - 1 - i);
	  fwrite(&ch, sizeof(ch), 1, encInfo->fptr_stego_image);
     }
     encode_data_to_image((char *)file_extn, size, encInfo->fptr_src_image, encInfo->fptr_stego_image);
     return e_success;
}

Status encode_secret_file_size(long file_size, EncodeInfo *encInfo)	//function to encode the secret file size
{
     printf("Encoding secret.txt File Size\n");
     char ch;
     int i;
     for(i = 0; i < (sizeof(file_size) * 8); i++)			//loop will run 
     {
	  fread(&ch, sizeof(ch), 1, encInfo->fptr_src_image);		//reads the byte 
	  ch = (ch & 0xFE) | ((file_size & (1 << (sizeof(file_size) * 8) - 1 - i)) >> (sizeof(file_size) * 8) - 1 - i);								//encoding takes place
	  fwrite(&ch, sizeof(ch), 1, encInfo->fptr_stego_image);	//writes the byte
     }
     return 0;
}

Status encode_secret_file_data(EncodeInfo *encInfo)	//function to encode the secret file data
{
     printf("Encoding secret.txt File data\n");
     char ch, str[8];
     fseek(encInfo->fptr_secret,0,SEEK_SET);
     for( int i = 0 ; i < encInfo->size_secret_file ; i++)
     {
	  fread(&ch,sizeof(ch),1,encInfo->fptr_secret);
	  fread(str,8,1,encInfo->fptr_src_image);
	  encode_byte_to_lsb(ch,str);
	  fwrite(str,8,1,encInfo->fptr_stego_image);		
     }
     return e_success;
}

Status copy_remaining_img_data(FILE *fptr_src, FILE *fptr_dest)
{
     printf("Copying left over data\n");
     char ch;
     while ((fread (&ch, 1,1, fptr_src) ) > 0)
     {
	  fwrite(&ch, 1, 1, fptr_dest);			//writes the remaining data to the fptr_dest file
     }
     return e_success;
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
