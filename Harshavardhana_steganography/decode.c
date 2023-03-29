/*

Name : Harshavardhana B
Date : Mar 29 2023
Description : Image Steganography

*/
#include <stdio.h>
#include "decode.h"
#include "types.h"
#include "common.h"
#include <string.h>

/* Function Definitions */

/* Get image size
 * Input: Image file ptr
 * Output: width * height * bytes per pixel (3 in our case)
 * Description: In BMP Image, width is stored in offset 18,
 * and height after that. size is 4 bytes
 */

#include <stdio.h>
#include "decode.h"
#include "types.h"
#include <string.h>
Status read_and_validate_decode_args(char *argv[], DecodeInfo *decInfo)	//function to check the command line arg.	
{
     if(argv[2] == NULL)				//if argv[2] not passed then terminates the program 
     {
	  return e_failure;
     }
     else 
     {
	  short int sh;
	  decInfo->fptr_stego_image = fopen(argv[2],"r");
	  fread(&sh,sizeof(short int),1,decInfo->fptr_stego_image);
	  if(sh != 0x4d42)				//checks if 2nd arg is .bmp are not
	  {
	       return e_failure;
	  }
	  else
	  {
	       decInfo->stego_image_fname = argv[2];
	       //return e_success;
	  }
     }
     if(argv[3] == NULL)
     {
	  strcpy(decInfo->decode_image_fname , "decode");		//default name will be provided if argv[4] is not provided
     }
     else
     {
	  strcpy(decInfo->decode_image_fname , argv[3]);
     }
     return e_success;
}
Status do_decoding(DecodeInfo *decInfo)
{
     if(d_open_files( decInfo ) == e_failure)			//function to open the file
     {
	  return e_failure;
     }
     else
     {
	  if(decode_magic_string(MAGIC_STRING,strlen(MAGIC_STRING), decInfo->fptr_stego_image) == e_success)	//function calling
	  {
	       printf("magic string decoded is done\n");
	  }
	  if(decode_secret_file_extn( decInfo) == e_success)	//function calling
	  {
	       printf("secret file extension is Done\n");
	  }
	  decInfo->size_secret_file = decode_secret_file_size(0, decInfo);
	  decode_secret_file_data(decInfo);
	  return e_success;
     }
}
Status d_open_files(DecodeInfo *decInfo)		//function to open the files
{
     
     // Src Image file
     decInfo->fptr_stego_image = fopen(decInfo->stego_image_fname, "r");	//file will get open in read mode and stores the fptr_stego_image
     // Do Error handling
     if (decInfo->fptr_stego_image == NULL)
     {
	  perror("fopen");
	  fprintf(stderr, "ERROR: Unable to open file %s\n", decInfo->stego_image_fname);

	  return e_failure;
     }
     return e_success;
}
Status decode_magic_string(const char *magic_string,int size, FILE *fptr)	//function to decode the magice string
{
     char magic_arr[size+1];
     fseek(fptr,54,SEEK_SET);			//points to the 54th position
     decode_data_from_image(magic_arr, size, fptr);	//function calling
     magic_arr[size] = '\0';
     if(strcmp(magic_arr,MAGIC_STRING) == 0)	//compares if both are equal
     {
	  return e_success;
     }
     else
     {
	  return e_failure;
     }
}
Status decode_data_from_image(char *data, int size, FILE *fptr_stego_image)		//function to decode the data from image
{
     char buff[8];
     int i;
     data[size] = '\0';
     for(i = 0 ; i < size ; i++)
     {
	  data[i] = 0;
	  fread(buff,8,1,fptr_stego_image);
	  decode_byte_from_lsb(&data[i], buff);		//function calling
     }
}
Status decode_byte_from_lsb(char *data, char *image_buffer)	//function to decode the byte from lsb
{
     char ch=0;
     *data = 0;
     for( int i = 0 ; i < 8 ; i ++)
     {
	  ch = ((image_buffer[i] & 0x01) << (7 - i)) | ch;
     }
     *data = ch;
}
Status decode_secret_file_extn( DecodeInfo *decInfo)		//function to decode the secret file extention
{
     printf("Decoding Output File Extension\n");
     decInfo->size_secret_file_extn = decode_secret_file_extn_size(0,decInfo);
     decode_data_from_image(decInfo->extn_secret_file, decInfo->size_secret_file_extn, decInfo->fptr_stego_image); 
     decInfo->extn_secret_file[decInfo->size_secret_file_extn] ='\0';
     strcat(decInfo->decode_image_fname,decInfo->extn_secret_file);
     decInfo->fptr_de_secret = fopen(decInfo->decode_image_fname, "w");
     return e_success;
}
Status decode_secret_file_extn_size(int size, DecodeInfo *decInfo)		//function to decode the secret file extn size
{
     char ch ;
     for(int i = 0 ; i <  (sizeof(size)*8) ; i ++)	
     {
	  fread(&ch,1,1,decInfo->fptr_stego_image);
	  size |= ((ch & 1) << ((sizeof(size)*8)-1-i));				
     }
     return size;
}
Status decode_secret_file_size(long size_secret_file, DecodeInfo *decInfo)	//function to decode the file size
{
     printf("Decoding decode.txt File Size\n");
     char ch ;
     for( int i = 0 ; i < (sizeof(size_secret_file)*8) ; i++)
     {
	  fread(&ch,1,1,decInfo->fptr_stego_image);
	  size_secret_file |=((ch & 1) << ((sizeof(size_secret_file)*8)-1-i));
     }
     
     return size_secret_file;
}
Status decode_secret_file_data(DecodeInfo *decInfo)			//function to decode the secret file data
{
     printf("Decoding decode.txt File data\n");
     char ch[decInfo->size_secret_file];
     decode_data_from_image(ch,decInfo->size_secret_file + 1,decInfo->fptr_stego_image);
     ch[decInfo->size_secret_file] = '\0';
     fwrite(ch,1,decInfo->size_secret_file,decInfo->fptr_de_secret);	
     printf("Decoding Done Successfully\n");
}


