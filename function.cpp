#include "function.h"
#include "constant.h"
extern int macs;
void initialiser_M(int l,int h,SDL_Surface* ecran,SDL_Rect pos_grille)
{
    pos_grille.x=350;
    pos_grille.y=15;

    //chargement des fiandises dans le tableau
    T[0] = SDL_LoadBMP("croissant.bmp");
    T[1] = SDL_LoadBMP("Cupcake.bmp");
    T[2] = SDL_LoadBMP("Danish.bmp");
    T[3] = SDL_LoadBMP("Donut.bmp");
    T[4] = SDL_LoadBMP("Macaroon.bmp");
    T[5] = SDL_LoadBMP("SugarCookie.bmp");


    //chargement des fiandises rayer dans le tableau
    R[0] = SDL_LoadBMP("croissant_raye.bmp");
    R[1] = SDL_LoadBMP("Cupcake_raye.bmp");
    R[2] = SDL_LoadBMP("Danish_raye.bmp");
    R[3] = SDL_LoadBMP("Donut_raye.bmp");
    R[4] = SDL_LoadBMP("Macaroon_raye.bmp");
    R[5] = SDL_LoadBMP("SugarCookie_raye.bmp");

    //declaration de la matrice

    for(int i=0; i<h; i++)
    {
        for(int j=0; j<l; j++)
            M[i][j]=-1;
    }

    srand((unsigned) time(&t));
    pos.x=pos_grille.x;
    pos.y=pos_grille.y;
    M[0][0]=rand()%6;
    M[0][1]=rand()%6;
    M[1][0]=rand()%6;
    M[1][1]=rand()%6;
    for(int i=0; i<2; i++)
    {
        for (int j=2; j<l; j++)
        {
            do
                M[i][j]=rand()%6;
            while((M[i][j]==M[i][j-1])&&(M[i][j]==M[i][j-2]));
        }
    }

    for(int j=0; j<2; j++)
    {
        for (int i=2; i<h; i++)
        {
            do
                M[i][j]=rand()%6;
            while((M[i][j]==M[i-1][j])&&(M[i][j]==M[i-2][j]));
        }
    }
    for(int i=2; i<h; i++)
    {
        for(int j=2; j<l; j++)
        {
            do
                M[i][j]=rand()%6;
            while(((M[i][j]==M[i-1][j])&&(M[i][j]==M[i-2][j]))||((M[i][j]==M[i][j-1])&&(M[i][j]==M[i][j-2])));
        }
    }

    for(int i=0; i<h; i++)
    {
        for(int j=0; j<l; j++)
        {
            pos.x=pos_grille.x+j*90;
            pos.y=pos_grille.y+i*90;
            SDL_SetColorKey(T[M[i][j]], SDL_SRCCOLORKEY, SDL_MapRGB(T[M[i][j]]->format, 0, 0, 255));
            SDL_BlitSurface(T[M[i][j]], NULL, ecran, &pos);
            SDL_Delay(20);
            SDL_Flip(ecran);
        }
    }

}

void swp(SDL_Surface* ecran,int a,int b,int c,int d,SDL_Surface * niv)
{
    // SDL_SetAlpha(grille_5X5, SDL_SRCALPHA, 128);
    SDL_Rect position_nive;
    position_nive.x=0;
    position_nive.y=0;
    SDL_BlitSurface(niv,NULL,ecran,&position_nive);
    pos_grille.x=350 ;
    pos_grille.y=15;
    SDL_Surface * grille_5X5= IMG_Load("grille_5x5.bmp");
    SDL_SetAlpha(grille_5X5, SDL_SRCALPHA, 128);
    SDL_BlitSurface(grille_5X5,NULL,ecran,&pos_grille);
    SDL_Surface  *return_button;
    SDL_Rect pos_return;
    pos_return.x=20;
    pos_return.y=30;
    return_button=IMG_Load("return_button.bmp");
    SDL_SetColorKey(return_button, SDL_SRCCOLORKEY, SDL_MapRGB(return_button->format, 0, 0, 255));
    SDL_BlitSurface(return_button,NULL,ecran,&pos_return);
    SDL_Flip(ecran);
    for( int i=0; i<6; i++)
    {
        for( int j=0; j<6; j++)
        {
            if(i==a&&j==b)
            {
                pos_grille.x=350 +90*b;
                pos_grille.y=15+ 90*a;
                SDL_BlitSurface(T[M[c][d]], NULL, ecran, &pos_grille);
            }

            else if(i==c&&j==d)

            {
                pos_grille.x=350+ d*90;
                pos_grille.y=15+ c*90;
                SDL_BlitSurface(T[M[a][b]], NULL, ecran, &pos_grille);
            }

            else
            {
                pos_grille.x =350;
                pos_grille.y =15;
                pos.x=pos_grille.x+j*90;
                pos.y=pos_grille.y+i*90;
                SDL_SetColorKey(T[M[i][j]], SDL_SRCCOLORKEY, SDL_MapRGB(T[M[i][j]]->format, 0, 0, 255));
                SDL_BlitSurface(T[M[i][j]], NULL, ecran, &pos);
            }
        }
    }

    SDL_Flip(ecran);
    permute(M[a][b],M[c][d]);

}

int verifier (SDL_Surface *ecran)
{
    SDL_Rect posgri;
    pos.x=350;
    pos.y=15;
    int nb =1,d=0;
    int nd=0;
    for (int i=0; i<6; i++)
    {
        for (int j =0; j<5; j++)
        {
            if(M[i][j]==M[i][j+1])
                nb++;
            else
                nb=1;
            if (nb==3)
            {
                if (M[i][j+1]==M[i][j+2])
                    nb++;
                else
                {
                    d+=100;
                    int h = i;
                    while(h>0)
                    {
                        M[h][j-1]=M[h-1][j-1];
                        blite(ecran,h,j-1);
                        M[h][j]=M[h-1][j];
                        blite(ecran,h,j);
                        M[h][j+1]=M[h-1][j+1];
                        blite(ecran,h,j+1);
                        h--;
                    }
                    M[0][j-1]=rand()%6;
                    blite(ecran,0,j-1);
                    nd=rand()%6;
                    while(nd==M[0][j-1])
                        nd=rand()%6;
                    M[0][j]=nd;
                    blite(ecran,0,j);
                    nd=rand()%6;
                    while(nd==M[0][j])
                        nd=rand()%6;
                    M[0][j+1]=nd;
                    blite(ecran,0,j+1);
                    nb=1;
                }
            }
            if(nb==4)
            {
                d+=200;
                int h = i ;
                int x = M[i][j];
                while(h>0)
                {
                    M[h][j-1]=M[h-1][j-1];
                    blite(ecran,h,j-1);
                    M[h][j]=M[h-1][j];
                    blite(ecran,h,j);
                    M[h][j+1]=M[h-1][j+1];
                    blite(ecran,h,j+1);
                    M[h][j+2]=M[h-1][j+2];
                    blite(ecran,h,j+2);
                    h--;
                }
                M[0][j-1]=rand()%6;
                blite(ecran,0,j-1);
                nd=rand()%6;
                while(nd==M[0][j-1])
                    nd=rand()%6;
                M[0][j]=nd;
                blite(ecran,0,j);
                nd=rand()%6;
                while(nd==M[0][j])
                    nd=rand()%6;
                M[0][j+1]=nd;
                blite(ecran,0,j+1);
                M[0][j+2]=rand()%6;
                blite(ecran,0,j+2);
                pos.x+=90*i;
                pos.y+=90*j;
                SDL_SetColorKey(R[M[i][j]], SDL_SRCCOLORKEY, SDL_MapRGB(R[M[i][j]]->format, 0, 0, 255));
                SDL_BlitSurface(R[M[i][j]], NULL, ecran, &pos);

                nb=1;

            }
        }
    }
    for (int j=0; j<6; j++)
    {
        for (int i =0; i<5; i++)
        {
            if(M[i][j]==M[i+1][j])
                nb++;
            else
                nb=1;
            if (nb==3)
            {
                if (M[i+1][j]==M[i+2][j])
                    nb++;
                else
                {
                    d+=100;
                    int h = i;
                    while(h>1)
                    {
                        M[h+1][j]=M[h-2][j];
                        blite(ecran,h+1,j);
                        h--;
                    }
                    M[0][j]=rand()%6;
                    blite(ecran,0,j);
                    M[1][j]=rand()%6;
                    blite(ecran,1,j);
                    nd=rand()%6;
                    while(nd==M[1][j])
                        nd=rand()%6;
                    M[2][j]=rand()%6;
                    blite(ecran,2,j);

                    nb=1;
                }
            }
            if(nb==4)
            {
                d+=200;
                int h = i ;
                int x = M[i][j];
                while(h>2)
                {
                    M[h+2][j]=M[h-2][j];
                    blite(ecran,h+2,j);
                    h--;
                }


                M[0][j]=rand()%6;
                blite(ecran,0,j);
                nd=rand()%6;
                while(nd==M[0][j])
                    nd=rand()%6;
                M[1][j]=nd;
                blite(ecran,1,j);
                nd=rand()%6;
                while(nd==M[1][j])
                    nd=rand()%6;
                M[2][j]=nd;
                blite(ecran,2,j);
                M[3][j]=rand()%6;
                blite(ecran,3,j);
                pos.x+=90*i;
                pos.y+=90*j;
                SDL_SetColorKey(R[x], SDL_SRCCOLORKEY, SDL_MapRGB(R[x]->format, 0, 0, 255));
                SDL_BlitSurface(R[x], NULL, ecran, &pos);
                nb=1;
            }
        }
    }
    return d;
}

void blite (SDL_Surface *ecran,int i,int j)
{
    SDL_Rect pos ,posgri;
    pos.x=350;
    pos.y=15;
    pos.x+=90*j;
    pos.y+=90*i;
    SDL_SetColorKey(T[M[i][j]], SDL_SRCCOLORKEY, SDL_MapRGB(T[M[i][j]]->format, 0, 0, 255));
    SDL_BlitSurface(T[M[i][j]], NULL, ecran, &pos);
}

void permute(int& a,int& b )
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int cas(int i,int j,SDL_Event event)
{
    SDL_Rect pos;
    pos.x=350;
    pos.y=15;
    if(event.button.y>pos.y+(90*i)&& event.button.y<pos.y+90*(i+1)&&
            event.button.x>pos.x+(90*j)&& event.button.x<pos.x+90*(j+1) )
        return 1;
    else
        return 0;
}

void curs(int i,int j ,SDL_Surface* ecran)
{
    SDL_Surface *cursor=NULL ;
    cursor = IMG_Load("cursor.png");
    SDL_Rect pos;
    pos.x=350;
    pos.y=15;
    pos.x+=90*j;
    pos.y+=90*i;
    SDL_BlitSurface(cursor, NULL, ecran,&pos);
}

void swaap(SDL_Surface* ecran,int a,int b,int c,int d,SDL_Surface *niv)
{
    int co;
    dep++;
    Mix_Music *muswp = Mix_LoadMUS("Drip.wav");
    Mix_Music *mureswp = Mix_LoadMUS("Scrape.wav");
    swp(ecran,a,b,c,d,niv);
    Mix_PlayMusic(muswp, 1);
    co=verifier(ecran);
    if (co==0)
    {
        swp(ecran,c,d,a,b,niv);
        Mix_PlayMusic(mureswp, 1);
    }
    else
        sco+=co;
    swp(ecran,0,0,0,0,niv);
    score(ecran,sco);
    nbdepla(ecran,dep,macs);
}
void score(SDL_Surface* ecran,int scr)
{
    SDL_Surface  *texte = NULL,*imgscr=NULL;
    SDL_Rect position;
    SDL_Event event;
    TTF_Font *police = NULL;
    SDL_Color couleurNoire = {255, 0, 255};
    imgscr=IMG_Load("score.png");
    position.x = 2;
    position.y = 500;
    SDL_SetColorKey(imgscr, SDL_SRCCOLORKEY, SDL_MapRGB(imgscr->format, 0, 0, 254));
    //SDL_SetColorKey(imgscr, SDL_SRCCOLORKEY, SDL_MapRGB(imgscr->format, 0, 0, 255));
    //SDL_BlitSurface(imgscr, NULL, ecran, &position);
    char tab[20] = "";
    TTF_Init();
    police = TTF_OpenFont("cambria.ttc", 65);
    sprintf(tab, "score", scr);
    texte = TTF_RenderText_Blended(police, tab, couleurNoire);
    position.x = 2;
    position.y = 500;
    SDL_BlitSurface(texte, NULL, ecran, &position);
    sprintf(tab, "%d", scr);
    texte = TTF_RenderText_Blended(police, tab, couleurNoire);
    position.x = 60;
    position.y = 560;
    SDL_BlitSurface(texte, NULL, ecran, &position);
}
void nbdepla(SDL_Surface* ecran,int dep,int macs)
{
    SDL_Surface  *texte = NULL,*imgscr;
    SDL_Rect position;
    SDL_Event event;
    TTF_Font *police = NULL;
    imgscr=IMG_Load("moves.bmp");
    position.x = 980;
    position.y =20;
    SDL_SetColorKey(imgscr, SDL_SRCCOLORKEY, SDL_MapRGB(imgscr->format, 0, 0, 255));
    SDL_BlitSurface(imgscr, NULL, ecran, &position);
    SDL_Color couleurNoire = {123, 87, 51};
    char tab[20] = "";
    TTF_Init();
    police = TTF_OpenFont("cambria.ttc", 65);
    sprintf(tab, "%d",macs- dep);
    texte = TTF_RenderText_Blended(police, tab, couleurNoire);
    position.x = 1070;
    position.y = 70;
    SDL_BlitSurface(texte, NULL, ecran, &position);
}
void finale(SDL_Surface* ecran,int scr)
{
    SDL_Surface  *texte = NULL,*over;
    SDL_Rect position;
    SDL_Event event;
    TTF_Font *police = NULL;
    over=IMG_Load("game_over.jpg");
    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0,0, 255));
    position.x = 200;
    position.y = 0;
    SDL_SetColorKey(over, SDL_SRCCOLORKEY, SDL_MapRGB(over->format, 0, 0, 255));
    SDL_BlitSurface(over, NULL, ecran, &position);
    SDL_Color couleurDoree= {220,150,0};
    char tab[20] = "";
    TTF_Init();
    police = TTF_OpenFont("poligras.TTF", 140);
    sprintf(tab, " your score : %d", scr);
    texte = TTF_RenderText_Blended(police, tab, couleurDoree);
    position.x = 180;
    position.y = 450;
    SDL_BlitSurface(texte, NULL, ecran, &position);
    if (scr<1200)
    {
        sprintf(tab, " you lose ");
        texte = TTF_RenderText_Blended(police, tab, couleurDoree);
        position.x = 180;
        position.y = 320;
        SDL_BlitSurface(texte, NULL, ecran, &position);
    }
    else
        sprintf(tab, " waohw you win ");
    texte = TTF_RenderText_Blended(police, tab, couleurDoree);
    position.x = 180;
    position.y = 320;
    SDL_BlitSurface(texte, NULL, ecran, &position);
}
void faut()
{
    Mix_Music *mufaut = Mix_LoadMUS("points.wav");
    Mix_PlayMusic(mufaut, 1);
}
