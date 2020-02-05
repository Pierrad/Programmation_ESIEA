#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
    /*int tab[15] = {0};
    int i;
    for(i=0; i<16; i+=2)
    {
        tab[i]++;
    }
    for(i=1; i<15; i+=2)
    {
        tab[i]--;
    }
    for(i=0; i<15; i++)
        printf("%d\n", tab[i]);
    */
    
    /*
    void chercheMax (int *tab, int taille, int *max)
    {
        int i;
        int l = tab[0];
        for (i=0; i<taille; i++)
        {
            if(tab[i] > l)
            {
                l = tab[i];
            }
        }
        *max = l;
    }
    */
    
    char *LireFichier (FILE *pFile, int size)
    {
        int i;
        char *data = (char*)malloc(size*sizeof(char));
        for (i=0; i<size; i++)
        {
            fread(data, 1, size, pFile);
        }
        return data;
    }
    return 0;
    
}