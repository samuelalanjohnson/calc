#include <stdio.h>
#include <stdlib.h>
#include "libs.h"

/*
  proc_args.c 
  Processes the arguments to be used in the main function
  Stores the operators in a int array to be processed in the main function
  check libs.h to see the int values of the operatations 
  
*/

 int *proc_args(float *numbers,char **argv,int argc){
  size_t num_count = 0;
  size_t oprnd_count = 0;
  int *ret_array = (int *)malloc(sizeof(int)*argc);
  for(int i = 1; i <= argc ;i++){ // start with 1 to avoid program name 
    if (*argv[i] == '0'){ //if argv == the ascii code for 0 go ahead and convert it to 0 in int form 
      numbers[num_count] = atoi(argv[i]);
      num_count++;
    }
    else if(atof(argv[i]) == 0.0){ // assuming the argument is a operator if atof returns 0
      ret_array[oprnd_count] = getop(argv[i]); // function defined in getop.c
      oprnd_count++;
    }
    else{
      numbers[num_count] = atof(argv[i]); // stores the numbers of the equation into this array
      num_count++;
    }
  }
  return ret_array; 
}
