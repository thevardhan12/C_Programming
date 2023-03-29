/*

Name : Harshavardhana B
Date : Mar 29 2023
Description : Image Steganography

*/


#include <stdio.h>
#include "encode.h"
#include "decode.h"
#include "types.h"
#include "common.h"

int main(int argc, char *argv[])		//main function with command line arguments
{
     int i, ret, ret1;
     EncodeInfo encInfo;			//structure variable name
     DecodeInfo decInfo;			//structure variable name
     uint img_size;
     if(argc <= 1)				//if no arguments are passed then enters inside the if condition
     {
	  
	  return 0;				//if arguments are not passed in cla then terminate the program
     }
     ret = check_operation_type(argv);		//calling the function 

     if(ret == e_unsupported)			//checks the condition
     {
	  return 0;
     }
     else if(ret == e_encode)
     {
	  ret1 = read_and_validate_encode_args(argv, &encInfo);		//calling the function
	  if(ret1 == e_failure)			
	  {
	       return 0;
	  }
	  else
	  {
		
	       do_encoding(&encInfo);		//function calling
	  }
     }
     else if(ret == e_decode)
     {
	  printf(" Decoding is Started \n");
	  ret1 = read_and_validate_decode_args(argv, &decInfo);		
	  if(ret1 == e_failure)
	  {
	       return e_failure;
	  }
	  else
	  {
	       do_decoding(&decInfo);
	  }
     }
}












