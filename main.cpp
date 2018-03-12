#include <iostream>
#include<ctime>
#include <SDL/SDL.h>
#include <SDL_image.h>
#include<SDL_mixer.h>
#include"function.h"
#include "niveau.h"
#include "play.h"
#include "constantes.h"
extern int sco,dep;
SDL_Surface * niv_1= IMG_Load("niv_1.png");
SDL_Surface * niv_2= IMG_Load("niv_2.jpg");
SDL_Surface * niv_3= IMG_Load("niv_3.png");
int continuer = 1;
int etat,macs;
SDL_Event event;
using namespace std;
int main(int argc, char *argv[])
{
    //variables globales:
    Mix_Music *musique;
    etat=0;
    int ind=0;
    int test=0;
    /*variables de l'interface d'acceuil+menu*/
    SDL_Surface *ecran = NULL, *interface_acceuil = NULL, *play_button=NULL,*menu=NULL,*easy= NULL,*hard= NULL,*medium= NULL,*hard_red=NULL,*easy_red=NULL,*medium_red=NULL,*play_button_red=NULL,*mute_acc=NULL,*cont_mus=NULL,*son_niv,*mute_niv;
    SDL_Rect pos_grille, position_interface_acceuil,position_play_button,pos_med,pos_easy,pos_hard,pos_return,pos_mute;
    SDL_Init(SDL_INIT_VIDEO);
    SDL_WM_SetIcon(IMG_Load("logo_ensi.jpg"), NULL);//chargement de l'icon
    ecran = SDL_SetVideoMode(1200, 640, 32, SDL_HWSURFACE| SDL_RESIZABLE |SDL_DOUBLEBUF);//le redimentionnellement page 303
    SDL_WM_SetCaption("candy crush @ensi", NULL);
    // Chargement de l'interface d'acceuil+menu
    interface_acceuil = SDL_LoadBMP("interface_acceuil.bmp");
    menu= SDL_LoadBMP("menu.jpg");

    //chargement de bouton play+boutons_niveaux
    play_button= IMG_Load("play_button.bmp");
    play_button_red= IMG_Load("play_button_red.bmp");
    easy= IMG_Load("easy.jpg");
    easy_red= IMG_Load("easy_red.jpg");
    hard= IMG_Load("hard.jpg");
    hard_red= IMG_Load("hard_red.jpg");
    medium= IMG_Load("medium.jpg");
    medium_red= IMG_Load("medium_red.jpg");
    menu=IMG_Load("menu.png");
    mute_acc=IMG_Load("mute_acc.bmp");
    cont_mus=IMG_Load("cont_mus.bmp");
    mute_niv=IMG_Load("mute_niv.bmp");
    son_niv=IMG_Load("son_niv.bmp");
    // positions des differents images
    position_interface_acceuil.x = 0;
    position_interface_acceuil.y = 0;
    pos_hard.x=560;
    pos_hard.y=550;
    pos_med.x=695;
    pos_med.y=474;
    pos_easy.x=610;
    pos_easy.y=400;
    pos_return.x=20;
    pos_return.y=30;
    pos_mute.x=1081;
    pos_mute.y=0;

    position_play_button.x= ecran->w / 2 - play_button->w / 2+30;
    position_play_button.y= ecran->h / 2 - play_button->h / 2+80;

    //chargement du son
    if(Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024) == -1) //Initialisation de l'API Mixer
    {
        cout<<Mix_GetError();
    }
    musique = Mix_LoadMUS("candy.mp3");
    Mix_PlayMusic(musique, -1); //Jouer infiniment la musique
    SDL_BlitSurface(interface_acceuil, NULL, ecran, &position_interface_acceuil); // On place l'interface d'acceuil à sa nouvelle position
    SDL_BlitSurface(play_button, NULL, ecran, &position_play_button); // On place le boutton du lancement du jeu à sa nouvelle position
    while (continuer)
    {
        //gestion des evenements:
        SDL_WaitEvent(&event);
        switch(event.type)
        {
        case SDL_QUIT:
            continuer = 0;
            break;

        case SDL_MOUSEMOTION:
        {

            if((etat==0)&&(ind==0))
            {
                if((event.motion.x<=position_play_button.x+180)&&(event.motion.x>=position_play_button.x+20)&&(event.motion.y>=position_play_button.y)&&(event.motion.y<=position_play_button.y+102))
                    SDL_BlitSurface(play_button_red, NULL, ecran, &position_play_button);
                else
                    SDL_BlitSurface(play_button, NULL, ecran, &position_play_button);
            }
            if(etat==1&&test==0)
            {
                if((event.button.x<=pos_med.x+353)&&(event.button.x>=pos_med.x)&&(event.button.y>=pos_med.y)&&(event.button.y<=pos_med.y+60))
                    SDL_BlitSurface(medium_red, NULL, ecran, &pos_med);
                else if((event.button.x<=pos_hard.x+353)&&(event.button.x>=pos_hard.x)&&(event.button.y>=pos_hard.y)&&(event.button.y<=pos_hard.y+63))
                    SDL_BlitSurface(hard_red, NULL, ecran, &pos_hard);
                else if((event.button.x<=pos_easy.x+353)&&(event.button.x>=pos_easy.x)&&(event.button.y>=pos_easy.y)&&(event.button.y<=pos_easy.y+63))
                    SDL_BlitSurface(easy_red, NULL, ecran, &pos_easy);
                else
                {
                    SDL_BlitSurface(easy, NULL, ecran, &pos_easy);
                    SDL_BlitSurface(medium, NULL, ecran, &pos_med);
                    SDL_BlitSurface(hard, NULL, ecran, &pos_hard);
                }
            }
        }

        case SDL_MOUSEBUTTONUP:
        {
            if (event.button.button == SDL_BUTTON_LEFT)
                switch(etat)
                {
                case 0:
                {
                    if((event.button.x<=position_play_button.x+206)&&(event.button.x>=position_play_button.x)&&(event.button.y>=position_play_button.y)&&(event.button.y<=position_play_button.y+102))
                    {
                        etat=1;
                        ind=1;
                        position_play_button.x=20;
                        position_play_button.y=30;
                        //chargement menu
                        SDL_BlitSurface(menu, NULL, ecran, &position_interface_acceuil);
                        SDL_BlitSurface(easy, NULL, ecran, &pos_easy);
                        SDL_BlitSurface(medium, NULL, ecran, &pos_med);
                        SDL_BlitSurface(hard, NULL, ecran, &pos_hard);
                        SDL_SetColorKey(son_niv, SDL_SRCCOLORKEY, SDL_MapRGB(son_niv->format, 0, 0, 255));
                        SDL_BlitSurface(son_niv, NULL, ecran, &pos_mute);
                        // position_play_button.x=pos_return.x;
                        // position_play_button.y=pos_return.y;
                    }
                    //music button
                    if((event.button.x<=pos_mute.x+92)&&(event.button.x>=pos_mute.x)&&(event.button.y>=pos_mute.y)&&(event.button.y<=pos_mute.y+82))
                    {
                        if(Mix_PausedMusic()==1)
                        {
                            SDL_BlitSurface(interface_acceuil, NULL, ecran, &position_interface_acceuil);
                            SDL_BlitSurface(play_button, NULL, ecran, &position_play_button);
                            Mix_ResumeMusic();
                        }
                        else
                        {
                            SDL_BlitSurface(mute_acc, NULL, ecran, &pos_mute);
                            Mix_PauseMusic();
                        }
                        // SDL_Flip(ecran);
                    }
                }
                break;
                case 1:
                {
                    //music control
                    if((event.button.x<=pos_mute.x+92)&&(event.button.x>=pos_mute.x)&&(event.button.y>=pos_mute.y)&&(event.button.y<=pos_mute.y+82))
                    {
                        if(Mix_PausedMusic()==1)
                        {
                            //SDL_BlitSurface(, NULL, ecran, &position_interface_acceuil);
                            SDL_SetColorKey(son_niv, SDL_SRCCOLORKEY, SDL_MapRGB(son_niv->format, 0, 0, 255));
                            SDL_BlitSurface(menu, NULL, ecran, &position_interface_acceuil);
                            SDL_BlitSurface(easy, NULL, ecran, &pos_easy);
                            SDL_BlitSurface(medium, NULL, ecran, &pos_med);
                            SDL_BlitSurface(hard, NULL, ecran, &pos_hard);
                            SDL_BlitSurface(son_niv, NULL, ecran, &pos_mute);
                            Mix_ResumeMusic();
                        }
                        else
                        {
                            SDL_SetColorKey(mute_niv, SDL_SRCCOLORKEY, SDL_MapRGB(mute_niv->format, 0, 0, 255));
                            SDL_BlitSurface(mute_niv, NULL, ecran, &pos_mute);
                            Mix_PauseMusic();
                        }
                    }


                    if((event.button.x<=pos_easy.x+353)&&(event.button.x>=pos_easy.x)&&(event.button.y>=pos_easy.y)&&(event.button.y<=pos_easy.y+63))
                    {
                        test=1;
                        macs=12;
                        niveau_1(ecran);//l'appui sur le bouton easy engendre le passage au premier niveau
                        initialiser_M(6,6,ecran,pos_grille);
                        play(ecran,niv_1,12);
                        finale(ecran, sco);
                    }

                    else if((event.button.x<=pos_med.x+353)&&(event.button.x>=pos_med.x)&&(event.button.y>=pos_med.y)&&(event.button.y<=pos_med.y+60))
                    {
                        test=1;
                        macs=10;
                        niveau_2(ecran);
                        initialiser_M(6,6,ecran,pos_grille);
                        play(ecran,niv_2,10);
                        finale(ecran, sco);
                    }
                    else if((event.button.x<=pos_hard.x+353)&&(event.button.x>=pos_hard.x)&&(event.button.y>=pos_hard.y)&&(event.button.y<=pos_hard.y+63))
                    {
                        test=1;
                        macs=8;
                        niveau_3(ecran);
                        initialiser_M(6,6,ecran,pos_grille);
                        play(ecran,niv_3,8);
                        finale(ecran, sco);
                    }

                }
                break;
                }
        }
        break;
        }
        SDL_Flip(ecran);
    }

//clean up memory
    SDL_FreeSurface(interface_acceuil);
    SDL_FreeSurface(play_button);
    Mix_FreeMusic(musique);//liberation de la musique
    Mix_CloseAudio(); //Fermeture de l'API
    return EXIT_SUCCESS;
}






