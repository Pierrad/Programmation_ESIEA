
#ifndef _ANALYSIS_INCLUDED_
#define _ANALYSIS_INCLUDED_

#include "sheetMusic.h"

#define LVL_MAX 5

void placeNotes(SheetMusic *sheet); // Appel a l'algo de Plus/Moins
void placeNotesStaff(Note *notes, int nbNotes, int nbStrings); // Algorithme de Plus/Moins 
void clearChords(SheetMusic *sheet, int staffIdx);

#endif