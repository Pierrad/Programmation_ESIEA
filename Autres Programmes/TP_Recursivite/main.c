#include <stdio.h>
#include <string.h>
#include "recursif.h"

int main(){	
	int nb,res,res2,n;;
	//char* sol=NULL;
	char str1[]="fedcbafedcba";
	int cpt=strlen(str1);
	char str2[cpt];
	char occ='j';
    printf("Bonjour !");
	printf("Tapez 1 pour connaitre la parite du nombre\nTapez 2 pour voir quelle chaine apparait en premier dans le dictionnaire !\n");
	printf("Tapez 3 pour connaitre le nombre doccurences 1 lettre dans un mot !\nTapez 4 pour inverser le mot !\n");
	
	scanf("%d",&res);
	if(res < 1 || res > 4)
		return 0;
	switch(res){
		
		case 1:
			printf("Entrez un nombre et je vous dirais s\'il est pair !\n");
			scanf("%d",&nb);
			res=pair(nb);
			if(res==1)
				printf("%d est pair !\n",nb);
			else	
				printf("%d est pas pair\n",nb);
		break;
		
		case 2:			
			res=CompareChaine(str1,str2);
			switch(res){
				
				case 0:
					printf("Les chaines sont au meme endroit !\n");
					break;
				
				case 1:
					printf("%s est avant %s dans le dictionnaire !\n",str2,str1);
					break;
					
				case -1:
					printf("%s est avant %s dans le dictionnaire !\n",str1,str2);
					break;
			}				
		break;
		
		case 3:			
			res=NbOcc(str1,occ);			
			printf("Il y a %d %c dans le mot %s\n", res, occ, str1);		
		break;

		case 4:						
			str2[cpt-1]=InverserMot(str1,str2,cpt-2);			
			printf("%s\n",str2);
		break;
		
		
	}				
	return 0;
}
