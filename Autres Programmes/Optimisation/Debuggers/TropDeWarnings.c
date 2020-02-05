#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  int i;
  int rang;
  int init;
  int max= 0;
  int res = 0;
  //int var;
  printf("Terme initial?\n");
  scanf("%d", &res);
  init = res;
  printf("Rang de la suite?\n");
  scanf("%d", &rang);
  
  /* // Calcul du n-ieme terme */
  for(i=0; i<=rang; i++)
  {
    if (res%2 == 0)   // terme pair
      res /= 2;
    else
      res = 3*res + 1;
  }
  printf ("terme no %d = %d\n",rang, res);  
  
  
  // temps de vol et altitude max
  res = init;
  i = 0;
  max = res;
  while (res != 1)
  {
    if (res%2 == 0)   // terme pair
      res /= 2;
    else
      res = 3*res + 1;
    if (res > max)
      max = res;
    i++;
  }
  printf("temps de vol = %d\n", i);  
  printf("Altitude maximale = %d\n", max);
  
}
