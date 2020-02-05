#include "matrice.h"

int main(int argc, char **argv)
{
    int choix;
    Matrice *matrice, *matrice2, *matrice3;
    if (argc > 2)
    {
        if(argc == 3)
        {
            
            printf("Choix :\nTapez 1 pour realiser la trace\nTapez 2 pour realiser le produit par un scalaire\nTapez 3 pour mettre a la puissance n la matrice\nTapez 4 pour echelonner la matrice\n");
            scanf("%d", &choix);
            switch(choix)
            {
                case 1:
                    matrice = ChargerMatrice(argv[1]);
                    assert(matrice->height==matrice->width);
                    printf("La trace de la matrice vaut %.1lf\n", Trace(matrice));
                    
                
                break;
                case 2:
                    printf("Entrez un scalaire: ");
                    double s;
                    scanf("%lf",&s);
                    matrice = ChargerMatrice(argv[1]);
                    matrice2 = ProduitExterne(matrice, s);
                    assert(AfficherMatrice(matrice2));
                    assert(EcrireMatrice(argv[2], matrice2));
                break;
                case 3:
                    printf("Entrez une puissance: ");
                    int s;
                    scanf("%d",&s);
                    matrice = ChargerMatrice(argv[1]);
                    matrice2 = Puissance(matrice, s);
                    assert(AfficherMatrice(matrice2));
                    assert(EcrireMatrice(argv[2], matrice2));
                break;
                case 4:
                    
                
                
                
                break;
            }
            
        }
        else
        {
            printf("Choix :\nTapez 1 pour realiser l'addition des matrices\nTapez 2 pour realiser la soustrations des matrices\nTapez 3 pour realiser le produit des matrices\n");
            scanf("%d", &choix);
            switch(choix)
            {
                case 1 :
                    matrice = ChargerMatrice(argv[1]);
                    matrice2 = ChargerMatrice(argv[2]);
                    assert((matrice->height==matrice2->height)&&(matrice->width==matrice2->width));
                    matrice3 = Addition(matrice, matrice2);
                    assert(AfficherMatrice(matrice3));
                    assert(EcrireMatrice(argv[3], matrice3));
                break;
                case 2:
                    matrice = ChargerMatrice(argv[1]);
                    matrice2 = ChargerMatrice(argv[2]);
                    assert((matrice->height==matrice2->height)&&(matrice->width==matrice2->width));
                    matrice3 = Soustraction(matrice, matrice2);
                    assert(AfficherMatrice(matrice3));
                    assert(EcrireMatrice(argv[3], matrice3));
                break;
                case 3:
                    matrice = ChargerMatrice(argv[1]);
                    matrice2 = ChargerMatrice(argv[2]);
                    assert(matrice->width == matrice2->height);
                    matrice3 = ProduitInterne(matrice, matrice2);
                    assert(AfficherMatrice(matrice3));
                    assert(EcrireMatrice(argv[3], matrice3));
                    
                break;
            
            
            }
        }
    }
    else
    {
        printf("pas assez d'arguments\n");
    }
    /*
            matrice=ChargerMatrice(argv[1]);
            EcrireMatrice(argv[2],matrice);
            AfficherMatrice(matrice);
            LibererMatrice(matrice);
    */  
        return 0;
}


