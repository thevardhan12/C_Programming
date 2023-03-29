#include <stdio.h>
#include "encode.h"
#include "types.h"
#include "decode.h"
#include <string.h>

int main(int argc,char *argv[])
{
    if(check_operation_type(argv)==e_encode)
    {
        printf("selected Encode\n");
        EncodeInfo _encinfo;
        if(read_and_validate_encode_args(argc,argv,&_encinfo)==e_success);
        {
            printf("Read and validate is successfull completed\n");
            if(do_encoding(&_encinfo)==e_success)
            {
                printf("encoding is done succesfully\n");
                
            }
            else
            {
                printf("Error\n");
            }
        }
    }       
    else if (check_operation_type(argv)==e_decode)
    {
        printf("selected Decode\n");
        decodeinfo decinfo;
        if(read_and_validate_decode_args(argc,argv,&decinfo)==e_success);
        {
            printf("Read and validate is successfull completed\n");
            if(do_decoding(&decinfo)==e_success)
            {
                printf("decoding is done succesfully\n");
                if()

            }
            else
            {
                printf("Error\n");

            }




        }*/
    }
    else
    {
        printf("Error ! please pass right argument\n");

    }
    
}
OperationType check_operation_type(char *argv[])
{
    if(!strcmp(argv[1],"-e"))
    {
        return e_encode;

    }
    else if(!strcmp(argv[1],"-d"))
    {
        return e_decode;
    }
    else
    {
        return e_unsupported;
    }
}

    
    


