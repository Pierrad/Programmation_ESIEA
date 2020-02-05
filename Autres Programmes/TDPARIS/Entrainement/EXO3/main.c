#include <stdlib.h>
#include <stdio.h>

int main() {
int var = 7;
int tmp;
int *p_var = &var;

printf ("var = %d, (*p_var) = %d\n", var, (*p_var));

tmp = (*p_var) + 5;
printf ("var = %d, (*p_var) = %d, tmp = %d\n", var, (*p_var), tmp);

(*p_var) = tmp;
printf ("var = %d, (*p_var) = %d, tmp = %d\n", var, (*p_var), tmp);

}
