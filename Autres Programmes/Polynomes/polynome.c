#include "polynome.h"


int ChargerPolynome (char *path, Polynome *p){
    int i;
    FILE *fichier = fopen(path,"r"); // Lecture des donnees du fichier path.txt
    if (fichier != NULL ) // On verifie que le pointeur sur fichier est valide
    {
        fscanf(fichier, "%d\n", &p->deg);
        p->coeffs = (float*) calloc (p->deg, sizeof(float));
        for (i=p->deg-1;i>=0;i--)
        {
            fscanf(fichier, "%f ", &p->coeffs[i]);
        }
        fclose(fichier); 
        return 0;
    }
    else 
    {
        printf("Probleme avec l'ouverture du fichier");
        return -1;
    }
}

void LibererPolynome(Polynome *p){
    
    free(p->coeffs);
    
}
void AfficherPolynome(Polynome *p){
    
    int i;
    for(i=0; i<p->deg; i++)
    {
        printf("%.2f\n", p->coeffs[i]);
    }
    
}

int EgalitePolynome(Polynome *p, Polynome *q){
    
    int i;
    for (i=0; i<p->deg;i++)
    {
        if(p->coeffs[i] == q->coeffs[i])
        {
                
        }
        else 
            return 0;
    }
    
    return 1;
}

int AddPolynome (Polynome P, Polynome Q, Polynome *Res){
    
    
        int i;
        for (i=0; i<P.deg; i++)
        {
            Res->coeffs[i]=P.coeffs[i]+Q.coeffs[i];
        }
        return 0;
    
}


int MultPolynome (Polynome P, Polynome Q, Polynome *Res){
    int i,j;
    for (i=0; i<=P.deg;i++)
    {
        for (j=0; j<i;j++)
        Res->coeffs[i]=P.coeffs[j]*Q.coeffs[i-j];
    }
    
    return 0;
    
}