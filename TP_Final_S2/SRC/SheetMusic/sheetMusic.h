
#ifndef SCORE_H
#define SCORE_H

#include "midiFile.h"
#include <stdio.h>

typedef struct Note_s
{
    int   value;
    int   stringIdx;
    float appearingBeat;
    float durationBeat;
    float appearingTime;
    float durationTime;
} Note;

typedef struct Tempo_s
{
    int msPerBeat;
    float appearingBeat;
    float appearingTime;
} Tempo;

typedef struct SheetMusic_s
{
    int    nbStrings;
    int    nbStaves; // Nombre de portées
    int   *nbNotes;
    Note **notes;

    int    nbTempos; // Nombre de variation de tempo
    Tempo *tempos;
} SheetMusic;

//
// allouer, remplir, liberer la partition
//
SheetMusic* newSheetMusic(FILE *midiFile); //pas de modification necessaire
void freeSheetMusic(SheetMusic *sheet); //pas de modification necessaire

//
// afficher sur le terminal une note, une portee, une partition
// permet de verifier que le placement est coherent
//
void fprintNoteValue(FILE *file, Note *note); 
void fprintStaff(FILE *file, SheetMusic *sheet, int staffIdx);
void fprintSheetMusic(FILE *file, SheetMusic *sheet);

void printNoteValue(Note *note);
void printStaff(SheetMusic *sheet, int staffIdx);
void printSheetMusic(SheetMusic *sheet);

#endif