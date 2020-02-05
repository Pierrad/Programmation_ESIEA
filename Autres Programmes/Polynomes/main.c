#include "polynome.h"




int main (int argc, char **argv){
    if(argc>1)
    {
        Polynome Res;
        Polynome poly;
        Polynome poly2;
        int load = ChargerPolynome(argv[1], &poly);
        int load2 = ChargerPolynome(argv[2], &poly2);
        // int load3 = ChargerPolynome(argv[2], &Res);
        if (load != 0 && load2 != 0)
        {
           return 0;
        }
        AfficherPolynome(&poly);
        printf("\n");
        AfficherPolynome(&poly2);
        printf("\n");
       
        if(poly.deg>poly2.deg)
            Res = poly;
        else
            Res = poly2;
        AfficherPolynome(&poly);
        printf("\n");
        AfficherPolynome(&poly2);
        printf("\n");
        if(EgalitePolynome(&poly, &poly2))
            printf("Les polynomes sont egaux\n");
        else
            printf("Les polynomes ne sont pas egaux\n");
        
        AddPolynome (poly, poly2, &Res);
        MultPolynome(poly, poly2, &Res);
        AfficherPolynome(&poly);
        printf("\n");
        AfficherPolynome(&poly2);
        printf("\n");
        AfficherPolynome(&Res);
        printf("\n");
        
        LibererPolynome(&poly); 
        LibererPolynome(&poly2); 
        //LibererPolynome(&Res); 
        
        
    }
    else
        return 0;

}