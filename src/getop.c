#include <stdio.h>
#include <stdlib.h>
#include "libs.h"
/*
  * getop.c 
  * Processes the given argv[] string and returns a defined value in libs.h 
  */
int getop(char *string){
  if(string[0] == 'x'){
    return MULT;
  }
  else if(string[0] == '+'){
    return ADD; 
  }
  else if(string[0] == '/'){
    return DIV;
  }
   else if(string[0] == '-'){
    return SUB;
  }
  else{ // kills the program if none of the above condtions are met.
    printf("INPUT ERROR\n%s is not a valid mathematical operator! use -h for help\n",string);
    exit(1);
  }
}
