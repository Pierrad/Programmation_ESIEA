#include <stdlib.h>
#include <stdio.h>

int main(){

int var = 4;

int *p_var = NULL;

p_var = &var;

printf ("var = %d, (*p_var) = %d\n", var, (*p_var));

var++;

printf("var = %d, (*p_var) = %d\n", var, (*p_var));

}
