#include <stdio.h>
#include <stdlib.h>

int SizeFile(char *path){
	FILE *pfile = NULL;
	//int qqchose = 0;
	pfile = fopen (path, "r");
	if(!pfile){                     
	printf("Impossible d'ouvrir le fichier %s\n", path);
	return EXIT_FAILURE;
	}
	if(pfile!=NULL){                     
	printf("success %s\n", path);
	
	}
	return 0;
	
}


int main() {
	SizeFile("text.txt");
}

