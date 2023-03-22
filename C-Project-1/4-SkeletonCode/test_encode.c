#include <stdio.h>
#include "encode.h"
#include "types.h"
#include <string.h>

int main(int argc,char *argv[])
{
    if(check_operation_type(argv)==e_encode)
    {
        printf("selected Encode\n");
        EncodeInfo _encinfo;
        if(read_and_validate_encode_args(argv,&_encinfo)==e_success);
        {
            printf("Read and validate is successfull completed\n");

        }
    }
    else if (check_operation_type(argv)==e_decode)
    {
        printf("select Decode\n");

    }
    else
    {
        printf("Error ! please pass right argument\n");

    }
    
}
OperationType check_operation_type(char *argv[])
{
    if(strcmp((argv[1],"-e")==0))
    {
        return e_encode;

    }
    else if(strcmp((argv[1],"-d")==0))
    {
        return e_decode;
    }
    else
    {
        return e_unsupported;
    }
}
Status read_and_validate_encode_args(char *argv[], EncodeInfo *encInfo)
{
    int count=0;
    for (int  i = 0; argv[i]!=0; i++)
    {
        count++;
    }
    if(count>=4)
    {
        if(strmp(strstr(argv[2],"."),".bmp")==0)
        {
            printf("pass the correct file\n");
        }
        else
        {
            return e_success;
        }
        if(strmp(strstr(argv[3],"."),".txt")==0)
        {
            printf("pass the correct file\n");
        }
        else
        {
            return e_success;
            
        }

    }
    
    

}

