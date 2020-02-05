#include "balle.c"

int main(int argc, char **argv)
{
    if(argc>1){
        Balle info; 
        info = chargerBalle(argv[1]);

        FILE *fichier;
        fichier = fopen(argv[2], "w");
        if (fichier != NULL){
            float temps;
            for(temps=0; temps<3; temps += 0.10){
            fprintf(fichier, " %.2f ; %.2f ; %.2f\n", temps, info.position.x, info.position.y);
            fclose(fichier);
            }
        }
    }
    else 
        printf("Il faut mettre les fichiers en argument");
        
    return 0;
}
