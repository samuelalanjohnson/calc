#ifndef LIBS_H
#define LIBS_H
#define DIV 4
#define MULT 1
#define ADD 2
#define SUB 5
#define END_OF_ARRAY 0 // operand array terminated with a zero
int getop(char *string);
int *proc_args(float *numbers,char **argv,int argc);


#endif
