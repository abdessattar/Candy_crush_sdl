#ifndef DECLARED_H_INCLUDED
#define DECLARED_H_INCLUDED
#include <iostream>
#include <SDL/SDL.h>
#include<SDL_mixer.h>
#include <SDL_image.h>
#include<ctime>
#include "play.h"
SDL_Surface *grille_5X5=NULL, *ecran = NULL, *play_button=NULL;
SDL_Rect position_niv_1, pos_grille,pos;
int compteur;
int sco=0;///variable initialiser à 0 sert à enregistrer le score atteint
int dep=0;///variable initialiser à 0 sert à enregistrer le nombre de deplacement fait
int M[6][6];///grille d'entier
SDL_Surface* T[6];///tableau contient les 6 friandise
SDL_Surface* R[6];///tableau contient les 6 friandise rayeé
time_t t;///time
#endif // DECLARED_H_INCLUDED

