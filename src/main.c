/*
 * main.c
 * Main function for arg calc 
 * Note this calculator doesnt follow order of operations
 * numbers is the array that holds all the numbers given to the program.
 * numbers[0] is assumed to be the product 
 * operands is the array which keeps track of all the operations that will be happing to the product
 * All of the values for the mathemathical operations are stored in "libs.h"
 */

int main(int argc,char **argv){
  if(argc == 1 || strcmp(argv[1],"-h") == 0 ){
    printf("calc: arugment based calculator\nUSAGE ex 1 + 2 x 3\n+ to add, x to multiply,/ to divide and - to subtract\n");
    return 0;
  }
  float *numbers = (float *)malloc(sizeof(float)*argc);
  int *operands = proc_args(numbers,argv,argc - 1); 
  size_t i = 1; //iterator for the loop
  size_t opr_i = 0; // iterator for the operands array
  while(operands[opr_i] != END_OF_ARRAY){ // END_OF_ARRAY defined in libs.h operands array is terminated with a 0
    if (operands[opr_i] == MULT){
      numbers[0] *= numbers[i];
    }
    else if (operands[opr_i] == ADD){
      numbers[0] += numbers[i];
    }
    else if (operands[opr_i] == DIV){
      numbers[0] /= numbers[i];
    }
    else if (operands[opr_i] == SUB){
      numbers[0] -= numbers[i];
    }
    i++;
    opr_i++;
  }
  printf("%f\n",numbers[0]);
  return 0;
}

