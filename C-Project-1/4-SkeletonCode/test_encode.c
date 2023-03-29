#include <stdio.h>
#include "encode.h"
#include "decode.h"
#include "types.h"
#include<string.h>

int main(int argc, char *argv[])
{
    int option = check_operation_type(argv);                                  //call function to check the operation type                                    
    if (option == e_encode)                                                   //if option == e_encode then select encoding                                                                         
    {
	printf("Selected encoding\n");                          //declare encInfo EncodeInfo structure variable                     

	EncodeInfo encInfo;                                                         
	if (read_and_validate_encode_args(argv,&encInfo) == e_success)           //call function to read and validata encode arguments
	{
	    printf("Read and validate arguments for encoding is success\n");
	    if (do_encoding(&encInfo)==e_success)                               //call function to do encoding
	    {
		printf(" Encoding is Successfull \n");
	    }
	    else
	    {
		printf("Encoding is Failure\n");
	    }
	}
	else
	{
	    printf("Read and validate arguments for encoding failure\n");
	}
    }
    else if (option == e_decode)                                                //if option == e_decode then select decoding
    {
	printf("Selected decoding\n");
	DecodeInfo decInfo;                                                     //declare decInfo DecodeInfo structure variable
	if(read_and_validate_decode_args(argv,&decInfo) == e_success)            //call function to read and validate decode arguments
	{
	    printf("Read and validate arguments for decoding success\n");       
	    if (do_decoding(&decInfo)==e_success)                                 //call function to do decoding 
	    {
		printf(" Decoding is Successfull \n");
	    }
	    else
	    {
		printf("Decoding secret data failure\n");
	    }
	}
	else
	{
	    printf("Read and validate arguments for decoding failure\n");
	}
    }
    else
    {
	printf("Please pass the valid option -e or -d\n");
    }
    return 0;
}
OperationType check_operation_type(char *argv[])                                   //defining function to check the operation type
{
    if (argv[1] != NULL)
    {
	if (!(strcmp(argv[1],"-e")))                                              //if argv[1] contains -e then return e_encode
	{
	    return e_encode;
	}
	else if (!(strcmp(argv[1],"-d")))                                         //if argv[1] contains -d then return e_decode
	{
	    return e_decode;
	}
	else
	{
	    return e_unsupported;						  //if argv[1] doesn't contain -e or -d then return e_unsupported
	}
    }
    else
    {
	return e_unsupported;
    }
}


