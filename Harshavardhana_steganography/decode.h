/*

Name : Harshavardhana B
Date : Mar 29 2023
Description : Image Steganography

*/

#ifndef DECODE_H
#define DECODE_H
#include "common.h"
#include "types.h" // Contains user defined types

/* 
 * Structure to store information required for
 * encoding secret file to source Image
 * Info about output and intermediate data is
 * also stored
 */

#define MAX_SECRET_BUF_SIZE 1
#define MAX_IMAGE_BUF_SIZE (MAX_SECRET_BUF_SIZE * 8)
#define MAX_FILE_SUFFIX 5

typedef struct _DecodeInfo
{
    /* Source Image info */
    char *stego_image_fname;
    FILE *fptr_stego_image;
    uint image_capacity;
    uint bits_per_pixel;
    char image_data[MAX_IMAGE_BUF_SIZE];

    /* Secret File Info */
    char *secret_de_fname;
    FILE *fptr_de_secret;
    char extn_secret_file[MAX_FILE_SUFFIX];
    char secret_data[MAX_SECRET_BUF_SIZE];
    long size_secret_file;
    int size_secret_file_extn;

    /* decode Image Info */
    char decode_image_fname[10];
    FILE *fptr_decode_image;

} DecodeInfo;

/* Decoding function prototype */

/* Check operation type */
//OperationType check_operation_type(char *argv[]);

/* Read and validate Encode args from argv */
Status read_and_validate_decode_args(char *argv[], DecodeInfo *decInfo);

/* Perform the encoding */
Status do_decoding(DecodeInfo *decInfo);

/* Get File pointers for i/p and o/p files */
Status d_open_files(DecodeInfo *decInfo);

/* check capacity */
//Status check_capacity(EncodeInfo *encInfo);

/* Get image size */
//uint get_image_size_for_bmp(FILE *fptr_image);

/* Get file size */
//uint get_file_size(FILE *fptr);

/* Copy bmp image header */
//Status copy_bmp_header(FILE *fptr_src_image, FILE *fptr_stego_image);

/* Store Magic String */
Status decode_magic_string(const char *magic_string,int size, FILE *fptr);

/* Encode secret file extenstion */
Status decode_secret_file_extn( DecodeInfo *decInfo);

/* Encode secret file size */
Status decode_secret_file_extn_size(int size, DecodeInfo *decInfo);

Status decode_secret_file_size(long size, DecodeInfo *decInfo);
/* Encode secret file data*/
Status decode_secret_file_data(DecodeInfo *decInfo);

/* Encode function, which does the real encoding */
Status decode_data_from_image(char *data, int size, FILE *fptr_stego_image);

/* Encode a byte into LSB of image data array */
Status decode_byte_from_lsb(char *data, char *image_buffer);

/* Copy remaining image bytes from src to stego image after encoding */
//Status copy_remaining_img_data(FILE *fptr_src, FILE *fptr_dest);

#endif




