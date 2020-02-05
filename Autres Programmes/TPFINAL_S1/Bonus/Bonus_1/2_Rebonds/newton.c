#include "balle.h"

int main(int argc, char **argv)
{
    if(argc>1){
        Balle info; 
        info = chargerBalle(argv[1]); 
        
        FILE *fichier;
        fichier = fopen(argv[2], "w"); //creation fichier csv
        if (fichier != NULL){
            float temps, dt = 0.01;
            for(temps=0; temps<3; temps += dt){ // ecriture dans le fichier csv des positions x et y pour une augmentation de temps dt
                fprintf(fichier, " %.4f ; %.4f ; %.4f\n", temps, info.position.x, info.position.y); 
                
                if(majPosition(&info, dt)==0) {} // test si majposition renvoit bien 0
                else
                    printf("probleme avec la balle"); 
            }
        }
            fclose(fichier);
        }
    else 
        printf("Il faut mettre les fichiers en argument");
        
    return 0;
}
