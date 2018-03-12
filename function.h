#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL_ttf.h>
#include <SDL_image.h>
void initialiser_M(int l,int h,SDL_Surface* ecran,SDL_Rect pos_grille);
///initialiser la grille sur l'ecran a partir la position pos_grille
void permute(int&,int&);
///fonction permute deux entier
void swaap(SDL_Surface* ecran,int a,int b,int c,int d,SDL_Surface*);
///permuter les friandisesde case (a,b)avec celles (c,d) avec verfication de l'alignement
void swp(SDL_Surface* ecran,int a,int b,int c,int d,SDL_Surface*);
///permuter les friandises de case (a,b)avec celles (c,d) sans verfication de l'alignement
int verifier (SDL_Surface *ecran);
///verfication de l'alignement de plus que trois friandises
void blite (SDL_Surface *ecran,int i,int j);
///blite une friandise a la position (i,j)
int cas(int i,int j,SDL_Event event);
/// retourne vrai si on clique  sur la friandise (i,j) faux sinon
void curs(int i,int j ,SDL_Surface* ecran);
///bliter la cursor ala position de la friandise (i,j)
void faut();
///gerer une musique d'erreur si la 2 eme clique sur une autre friandise n'est pas à coté de la prémiere friandise
void score(SDL_Surface* ,int );
/// afficer le score atteind
void nbdepla(SDL_Surface* ecran,int dep,int);
///afficher les nombre de deplacement possible à jouer
void finale(SDL_Surface* ecran,int scr);
///affiche game over +score finale
#endif // FUNCTION_H_INCLUDED
