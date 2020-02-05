#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct Sbar {

    char name[100]; // Name of the bar (no space in the string)
    float dist; // Score associated to the distance
    float price; // Price of one shooter
    
}Bar;

/*************************** CreateTab() *****************************
Allocate a new tab and fill it with informations given by the 'path'
Returns the array, or NULL in case of failure
ARGS: char *path: path of the informations file
*********************************************************************/

Bar *CreateTab (char *path, int *taille);
void DisplayTab (Bar *tab, int taille);
void Lexico (Bar *Tab, int taille);
void BubbleSort (Bar *tab, int taille, int key);
void SelectionSort (Bar *tab, int taille, int key);
void InsertionSort (Bar *tab, int taille, int key);
void SmartSort (Bar *tab, int taille);