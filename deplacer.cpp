#include "play.h"
#include "function.h"
extern int dep;
void play(SDL_Surface* ecran)
{
    int continuer=1;
    SDL_Event event;
    SDL_Rect posgri,pos;
    posgri.x=350;
    posgri.y=15;
    int po=0, compt =0, x=0;
    SDL_Rect c;
    SDL_Surface *cursor=NULL ;
    cursor = IMG_Load("cursor.png");
    score(ecran,0);
    nbdepla(ecran,0);
    while (3-dep>0)
    {
        //gestion des evenements:
        SDL_WaitEvent(&event);
        switch(event.type)
        {
        case SDL_QUIT:
            continuer = 0;
            exit;
            break;

        case SDL_MOUSEBUTTONUP:

            if (event.button.button == SDL_BUTTON_LEFT)
                //line 0 col 0
            {
                if(po==0&&cas(0,0,event) )

                {
                    po=1;
                    curs(0,0,ecran);
                }
                if(po==1&& cas(1,0,event) )
                {
                    swaap(ecran,0,0,1,0);
                    po=-1;
                }
                if(po==1&& cas(0,1,event) )

                {
                    swaap(ecran,0,0,0,1);
                    po=-1;
                }
                if(po==1&&!cas(0,0,event))
                   faut();
                //line 0 col 1

                if(po==0&& cas(0,1,event) )
                {
                    curs(0,1,ecran);
                    po=2;
                }

                if (po==2 && cas(0,0,event) )

                {
                    swaap(ecran,0,1,0,0);
                    po=-1;
                }
                if(po==2&& cas(1,1,event) )
                {
                    swaap(ecran,0,1,1,1);
                    po=-1;
                }
                if(po==2&& cas(0,2,event) )
                {
                    swaap(ecran,0,1,0,2);
                    po=-1;
                }
				if(po==2&&!cas(0,1,event))
                   faut();

//line 0 col 2
                if(po==0&&cas(0,2,event) )
                {
                    po=3;
                    curs(0,2,ecran);
                }
                if (po==3 && cas(0,1,event) )

                {
                    swaap(ecran,0,2,0,1);
                    po=-1;
                }
                if(po==3&&cas(1,2,event) )
                {
                    swaap(ecran,0,2,1,2);
                    po=-1;
                }
                if(po==3&& cas(0,3,event) )
                {
                    swaap(ecran,0,2,0,3);
                    po=-1;
                }
				if(po==3&&!cas(0,2,event))
                   faut();
                //line 0 col 3
                if(po==0&&cas(0,3,event) )
                {
                    po=4;
                    curs(0,3,ecran);
                }
                if (po==4 && cas(0,2,event) )

                {
                    swaap(ecran,0,3,0,2);
                    po=-1;
                }
                if(po==4&&  cas(1,3,event) )
                {
                    swaap(ecran,0,3,1,3);
                    po=-1;
                }
                if(po==4&& cas(0,4,event) )
                {
                    swaap(ecran,0,3,0,4);
                    po=-1;
                }
				if(po==4&&!cas(0,3,event))
                   faut();
                //line 0 col 4
                if(po==0&& cas(0,4,event) )
                {
                    curs(0,4,ecran);
                    po=5;
                }
                if (po==5 &&  cas(0,3,event) )
                {
                    swaap(ecran,0,4,0,3);
                    po=-1;
                }
                if(po==5&&cas(1,4,event) )
                {
                    swaap(ecran,0,4,1,4);
                    po=-1;
                }
                if(po==5&& cas(0,5,event) )
                {
                    swaap(ecran,0,4,0,5);
                    po=-1;
                }
				if(po==5&&!cas(0,4,event))
                   faut();
                //line 0 col 5
                if(po==0&&cas(0,5,event) )
                {
                    curs(0,5,ecran);
                    po=6;
                }
                if (po==6 &&cas(0,4,event) )
                {
                    swaap(ecran,0,5,0,4);
                    po=-1;
                }
                if(po==6&& cas(1,5,event) )
                {
                    swaap(ecran,0,5,1,5);
                    po=-1;
                }
				if(po==6&&!cas(0,5,event))
                   faut();
                //line 1 col 0
                if(po==0&&cas(1,0,event))
                {
                    curs(1,0,ecran);
                    po=7;
                }
                if(po==7&&cas(0,0,event) )
                {
                    swaap(ecran,1,0,0,0);
                    po=-1;
                }
                if(po==7&& cas(2,0,event) )
                {
                    swaap(ecran,1,0,2,0);
                    po=-1;
                }
                if(po==7&& cas(1,1,event) )
                {
                    swaap(ecran,1,0,1,1);
                    po=-1;
                }
				if(po==7&&!cas(1,0,event))
                   faut();
                //line 1 col 1
                if(po==0&&cas(1,1,event))
                {
                    curs(1,1,ecran);
                    po=8;
                }
                if (po==8 &&cas(0,1,event) )
                {
                    swaap(ecran,1,1,0,1);
                    po=-1;
                }
                if(po==8&&cas(1,0,event) )
                {
                    swaap(ecran,1,1,1,0);
                    po=-1;
                }
                if(po==8&&cas(2,1,event) )
                {
                    swaap(ecran,1,1,2,1);
                    po=-1;
                }
                if(po==8&&cas(1,2,event) )
                {
                    swaap(ecran,1,1,1,2);
                    po=-1;
                }
				if(po==8&&!cas(1,1,event))
                   faut();
                //line 1 col 2
                if(po==0&&cas(1,2,event) )
                {
                    curs(1,2,ecran);
                    po=9;
                }
                if (po==9 && cas(0,2,event) )
                {
                    swaap(ecran,1,2,0,2);
                    po=-1;
                }
                if(po==9&&cas(1,1,event) )
                {
                    swaap(ecran,1,2,1,1);
                    po=-1;
                }
                if(po==9&& cas(2,2,event) )
                {
                    swaap(ecran,1,2,2,2);
                    po=-1;
                }
                if(po==9&& cas(1,3,event) )
                {
                    swaap(ecran,1,2,1,3);
                    po=-1;
                }
				if(po==9&&!cas(1,2,event))
                   faut();
                //line 1 col 3
                if(po==0&&cas(1,3,event) )
                {
                    curs(1,3,ecran);
                    po=10;
                }
                if (po==10 &&cas(0,3,event) )
                {
                    swaap(ecran,1,3,0,3);
                    po=-1;
                }
                if(po==10&& cas(1,2,event) )
                {
                    swaap(ecran,1,3,1,2);
                    po=-1;
                }
                if(po==10&&cas(2,3,event))
                {
                    swaap(ecran,1,3,2,3);
                    po=-1;
                }
                if(po==10&& cas(1,4,event) )
                {
                    swaap(ecran,1,3,1,4);
                    po=-1;
                }
				if(po==10&&!cas(1,3,event))
                   faut();
                //line 1 col 4
                if(po==0&&cas(1,4,event) )
                {
                    curs(1,4,ecran);
                    po=11;
                }
                if (po==11 &&cas(0,4,event) )
                {
                    swaap(ecran,1,4,0,4);
                    po=-1;
                }
                if(po==11&& cas(1,3,event) )
                {
                    swaap(ecran,1,4,1,3);
                    po=-1;
                }
                if(po==11&&cas(2,4,event) )
                {
                    swaap(ecran,1,4,2,4);
                    po=-1;
                }
                if(po==11&& cas(1,5,event))
                {
                    swaap(ecran,1,4,1,5);
                    po=-1;
                }
				if(po==11&&!cas(1,4,event))
                   faut();
                ////line 1 col 5
                if(po==0&&cas(1,5,event) )
                {
                    curs(1,5,ecran);
                    po=12;
                }
                if (po==12 &&cas(0,5,event) )
                {
                    swaap(ecran,1,5,0,5);
                    po=-1;
                }
                if(po==12&& cas(1,4,event) )
                {
                    swaap(ecran,1,5,1,4);
                    po=-1;
                }
                if(po==12&& cas(2,5,event) )
                {
                    swaap(ecran,1,5,2,5);
                    po=-1;
                }
				if(po==12&&!cas(1,5,event))
                   faut();
                //line 2 col 0
                if(po==0&&cas(2,0,event) )
                {
                    curs(2,0,ecran);
                    po=13;
                }
                if(po==13&& cas(1,0,event) )
                {
                    swaap(ecran,2,0,1,0);
                    po=-1;
                }
                if(po==13&& cas(3,0,event) )
                {
                    swaap(ecran,2,0,3,0);
                    po=-1;
                }
                if(po==13&& cas(2,1,event) )
                {
                    swaap(ecran,2,0,2,1);
                    po=-1;
                }
				if(po==13&&!cas(2,0,event))
                   faut();
                //line 2 col 1
                if(po==0&&cas(2,1,event) )
                {
                    po=14;
                    curs(2,1,ecran);
                }
                if (po==14 && cas(1,1,event))
                {
                    swaap(ecran,2,1,1,1);
                    po=-1;
                }
                if(po==14&&cas(2,0,event))
                {
                    swaap(ecran,2,1,2,0);
                    po=-1;
                }
                if(po==14&&cas(3,1,event) )
                {
                    swaap(ecran,2,1,3,1);
                    po=-1;
                }
                if(po==14&& cas(2,2,event) )
                {
                    swaap(ecran,2,1,2,2);
                    po=-1;
                }
				if(po==14&&!cas(2,1,event))
                   faut();
                //line 2 col 2
                if(po==0&&cas(2,2,event) )
                {
                    po=15;
                    curs(2,2,ecran);
                }
                if (po==15 && cas(1,2,event))
                {
                    swaap(ecran,2,2,1,2);
                    po=-1;
                }
                if(po==15&& cas(2,1,event))
                {
                    swaap(ecran,2,2,2,1);
                    po=-1;
                }
                if(po==15&& cas(3,2,event) )
                {
                    swaap(ecran,2,2,3,2);
                    po=-1;
                }
                if(po==15&& cas(2,3,event))
                {
                    swaap(ecran,2,2,2,3);
                    po=-1;
                }
				if(po==15&&!cas(2,2,event))
                   faut();
                //line 2 col 3
                if(po==0&&cas(2,3,event) )
                {
                    po=16;
                    curs(2,3,ecran);
                }
                if (po==16 &&cas(1,3,event))
                {
                    swaap(ecran,2,3,1,3);
                    po=-1;
                }
                if(po==16&&cas(2,2,event) )
                {
                    swaap(ecran,2,3,2,2);
                    po=-1;
                }
                if(po==16&& cas(3,3,event) )
                {
                    swaap(ecran,2,3,3,3);
                    po=-1;
                }
                if(po==16&&cas(2,4,event) )
                {
                    swaap(ecran,2,3,2,4);
                    po=-1;
                }
				if(po==16&&!cas(2,3,event))
                   faut();
                //line 2   col 4
                if(po==0&&cas(2,4,event))
                {
                    po=17;
                    curs(2,4,ecran);
                }
                if (po==17 &&cas(1,4,event) )
                {
                    swaap(ecran,2,4,1,4);
                    po=-1;
                }
                if(po==17&& cas(2,3,event) )
                {
                    swaap(ecran,2,4,2,3);
                    po=-1;
                }
                if(po==17&&cas(3,4,event))
                {
                    swaap(ecran,2,4,3,4);
                    po=-1;
                }
                if(po==17&& cas(2,5,event) )
                {
                    swaap(ecran,2,4,2,5);
                    po=-1;
                }
				if(po==17&&!cas(2,4,event))
                   faut();
                ////line 2 col 5
                if(po==0&&cas(2,5,event))
                {
                    po=18;
                    curs(2,5,ecran);
                }
                if (po==18 && cas(1,5,event) )
                {
                    swaap(ecran,2,5,1,5);
                    po=-1;
                }
                if(po==18&&cas(2,4,event))
                {
                    swaap(ecran,2,5,2,4);
                    po=-1;
                }
                if(po==18&& cas(3,5,event) )
                {
                    swaap(ecran,2,5,3,5);
                    po=-1;
                }
				if(po==18&&!cas(2,5,event))
                   faut();
                //line 3 col 0
                if(po==0&& cas(3,0,event))

                {
                    po=19;
                    curs(3,0,ecran);
                }
                if(po==19&& cas(2,0,event) )
                {
                    swaap(ecran,3,0,2,0);
                    po=-1;
                }

                if(po==19&& cas(3,1,event) )

                {
                    swaap(ecran,3,0,3,1);
                    po=-1;
                }
                if(po==19&&cas(4,0,event) )
                {
                    swaap(ecran,3,0,4,0);
                    po=-1;
                }
				if(po==19&&!cas(3,0,event))
                   faut();
                // ligne 3 colonne 1
                if(po==0&&cas(3,1,event) )
                {
                    po=20;
                    curs(3,1,ecran);
                }
                if(po==20&&cas(2,1,event) )
                {
                    swaap(ecran,3,1,2,1);
                    po=-1;
                }
                if(po==20&& cas(3,0,event) )
                {
                    swaap(ecran,3,1,3,0);
                    po=-1;
                }
                if(po==20&&cas(4,1,event) )
                {
                    swaap(ecran,3,1,4,1);
                    po=-1;
                }
                if(po==20&&cas(3,2,event))
                {
                    swaap(ecran,3,1,3,2);
                    po=-1;
                }
				if(po==20&&!cas(3,1,event))
                   faut();
                //ligne 3 colonne 2
                if(po==0&&cas(3,2,event) )
                {
                    po=21;
                    curs(3,2,ecran);
                }
                if(po==21&& cas(2,2,event) )
                {
                    swaap(ecran,3,2,2,2);
                    po=-1;
                }
                if(po==21&& cas(3,1,event) )
                {
                    swaap(ecran,3,2,3,1);
                    po=-1;
                }
                if(po==21&& cas(4,2,event))
                {
                    swaap(ecran,3,2,4,2);
                    po=-1;
                }
                if(po==21&&cas(3,3,event) )
                {
                    swaap(ecran,3,2,3,3);
                    po=-1;
                }
				if(po==21&&!cas(3,2,event))
                   faut();
                //ligne 3 colonne 3
                if(po==0&&cas(3,3,event) )
                {
                    po=22;
                    curs(3,3,ecran);
                }
                if(po==22&&cas(2,3,event) )
                {
                    swaap(ecran,3,3,2,3);
                    po=-1;
                }
                if(po==22&&cas(3,2,event) )
                {
                    swaap(ecran,3,3,3,2);
                    po=-1;
                }
                if(po==22&& cas(4,3,event) )
                {
                    swaap(ecran,3,3,4,3);
                    po=-1;
                }
                if(po==22&& cas(3,4,event) )
                {
                    swaap(ecran,3,3,3,4);
                    po=-1;
                }
				if(po==22&&!cas(3,3,event))
                   faut();
                //ligne 3 colonne 4
                if(po==0&&cas(3,4,event) )
                {
                    po=23;
                    curs(3,4,ecran);
                }
                if(po==23&&cas(2,4,event) )
                {
                    swaap(ecran,3,4,2,4);
                    po=-1;
                }
                if(po==23&&cas(3,3,event))
                {
                    swaap(ecran,3,4,3,3);
                    po=-1;
                }
                if(po==23&&cas(4,4,event) )
                {
                    swaap(ecran,3,4,4,4);
                    po=-1;
                }
                if(po==23&& cas(3,5,event) )
                {
                    swaap(ecran,3,4,3,5);
                    po=-1;
                }
				if(po==23&&!cas(3,4,event))
                   faut();
                //ligne 3 colonne 5
                if(po==0&&cas(3,5,event) )
                {
                    po=24;
                    curs(3,5,ecran);
                }
                if(po==24&& cas(2,5,event) )
                {
                    swaap(ecran,3,5,2,5);
                    po=-1;
                }
                if(po==24&& cas(3,4,event) )
                {
                    swaap(ecran,3,5,3,4);
                    po=-1;
                }
                if(po==24&& cas(4,5,event) )
                {
                    swaap(ecran,3,5,4,5);
                    po=-1;
                }
				if(po==24&&!cas(3,5,event))
                   faut();
                //ligne 4 colonne 0
                if(po==0&&cas(4,0,event) )
                {
                    po=25;
                    curs(4,0,ecran);
                }
                if(po==25&&cas(3,0,event) )
                {
                    swaap(ecran,4,0,3,0);
                    po=-1;
                }
                if(po==25&&cas(4,1,event) )
                {
                    swaap(ecran,4,0,4,1);
                    po=-1;
                }
                if(po==25&& cas(5,0,event) )
                {
                    swaap(ecran,4,0,5,0);
                    po=-1;
                }
				if(po==25&&!cas(4,0,event))
                   faut();
// ligne 4 colonne 1
                if(po==0&&cas(4,1,event) )
                {
                    po=26;
                    curs(4,1,ecran);
                }
                if(po==26&&cas(3,1,event) )
                {
                    swaap(ecran,4,1,3,1);
                    po=-1;
                }
                if(po==26&&cas(4,0,event) )
                {
                    swaap(ecran,4,1,4,0);
                    po=-1;
                }
                if(po==26&& cas(5,1,event) )
                {
                    swaap(ecran,4,1,5,1);
                    po=-1;
                }
                if(po==26&&cas(4,2,event) )
                {
                    swaap(ecran,4,1,4,2);
                    po=-1;
                }
				if(po==26&&!cas(4,1,event))
                   faut();
                //ligne 4 colonne 2
                if(po==0&&cas(4,2,event) )
                {
                    po=27;
                    curs(4,2,ecran);
                }
                if(po==27&&cas(3,2,event) )
                {
                    swaap(ecran,4,2,3,2);
                    po=-1;
                }
                if(po==27&&cas(4,1,event) )
                {
                    swaap(ecran,4,2,4,1);
                    po=-1;
                }
                if(po==27&& cas(5,2,event) )
                {
                    swaap(ecran,4,2,5,2);
                    po=-1;
                }
                if(po==27&& cas(4,3,event) )
                {
                    swaap(ecran,4,2,4,3);
                    po=-1;
                }
				if(po==27&&!cas(4,2,event))
                   faut();
                //ligne 4 colonne 3
                if(po==0&&cas(4,3,event) )
                {
                    po=28;
                    curs(4,3,ecran);
                }
                if(po==28&& cas(3,3,event) )
                {
                    swaap(ecran,4,3,3,3);
                    po=-1;
                }
                if(po==28&& cas(4,2,event) )
                {
                    swaap(ecran,4,3,4,2);
                    po=-1;
                }
                if(po==28&&cas(5,3,event))
                {
                    swaap(ecran,4,3,5,3);
                    po=-1;
                }
                if(po==28&& cas(4,4,event) )
                {
                    swaap(ecran,4,3,4,4);
                    po=-1;
                }
				if(po==28&&!cas(4,3,event))
                   faut();
                //ligne 4 colonne 4
                if(po==0&&cas(4,4,event) )
                {
                    po=29;
                    curs(4,4,ecran);
                }
                if(po==29&& cas(3,4,event) )
                {
                    swaap(ecran,4,4,3,4);
                    po=-1;
                }
                if(po==29&&cas(4,3,event))
                {
                    swaap(ecran,4,4,4,3);
                    po=-1;
                }
                if(po==29&& cas(5,4,event))
                {
                    swaap(ecran,4,4,5,4);
                    po=-1;
                }
                if(po==29&&cas(4,5,event) )
                {
                    swaap(ecran,4,4,4,5);
                    po=-1;
                }
				if(po==29&&!cas(4,4,event))
                   faut();
                //ligne 4 colonne 5
                if(po==0&&cas(4,5,event) )
                {
                    po=30;
                    curs(4,5,ecran);
                }
                if(po==30&& cas(3,5,event) )
                {
                    swaap(ecran,4,5,3,5);
                    po=-1;
                }
                if(po==30&& cas(4,4,event) )
                {
                    swaap(ecran,4,5,4,4);
                    po=-1;
                }
                if(po==30&& cas(5,5,event) )
                {
                    swaap(ecran,4,5,5,5);
                    po=-1;
                }
				if(po==30&&!cas(4,5,event))
                   faut();
                //ligne 5 colonne 0
                if(po==0&&cas(5,0,event) )
                {
                    po=31;
                    curs(5,0,ecran);
                }
                if(po==31&& cas(4,0,event) )
                {
                    swaap(ecran,5,0,4,0);
                    po=-1;
                }
                if(po==31&& cas(5,1,event) )
                {
                    swaap(ecran,5,0,5,1);
                    po=-1;
                }
				if(po==31&&!cas(5,0,event))
                   faut();
                // ligne 5 colonne 1
                if(po==0&&cas(5,1,event) )
                {
                    po=32;
                    curs(5,1,ecran);
                }
                if(po==32&& cas(4,1,event) )
                {
                    swaap(ecran,5,1,4,1);
                    po=-1;
                }
                if(po==32&& cas(5,0,event))
                {
                    swaap(ecran,5,1,5,0);
                    po=-1;
                }
                if(po==32&&cas(5,2,event) )
                {
                    swaap(ecran,5,1,5,2);
                    po=-1;
                }
				if(po==32&&!cas(5,1,event))
                   faut();
                //ligne 5 colonne 2
                if(po==0&&cas(5,2,event) )
                {
                    po=33;
                    curs(5,2,ecran);
                }
                if(po==33&& cas(4,2,event) )
                {
                    swaap(ecran,5,2,4,2);
                    po=-1;
                }
                if(po==33&&cas(5,1,event) )
                {
                    swaap(ecran,5,2,5,1);
                    po=-1;
                }
                if(po==33&&cas(5,3,event) )
                {
                    swaap(ecran,5,2,5,3);
                    po=-1;
                }
				if(po==33&&!cas(5,2,event))
                   faut();
                //ligne 5 colonne 3
                if(po==0&&cas(5,3,event) )
                {
                    po=34;
                    curs(5,3,ecran);
                }
                if(po==34&&cas(4,3,event) )
                {
                    swaap(ecran,5,3,4,3);
                    po=-1;
                }
                if(po==34&&cas(5,2,event) )
                {
                    swaap(ecran,5,3,5,2);
                    po=-1;
                }
                if(po==34&& cas(5,4,event) )
                {
                    swaap(ecran,5,3,5,4);
                    po=-1;
                }
				if(po==34&&!cas(5,3,event))
                   faut();
                //ligne 5 colonne 4
                if(po==0&&cas(5,4,event) )
                {
                    po=35;
                    curs(5,4,ecran);
                }
                if(po==35&& cas(4,4,event) )
                {
                    swaap(ecran,5,4,4,4);
                    po=-1;
                }
                if(po==35&& cas(5,3,event) )
                {
                    swaap(ecran,5,4,5,3);
                    po=-1;
                }
                if(po==35&&cas(5,5,event) )
                {
                    swaap(ecran,5,4,5,5);
                    po=-1;
                }
				if(po==35&&!cas(5,4,event))
                   faut();
                //ligne 5 colonne 5
                if(po==0&&cas(5,5,event))
                {
                    po=36;
                    curs(5,5,ecran);
                }
                if(po==36&& cas(4,5,event) )
                {
                    swaap(ecran,5,5,4,5);
                    po=-1;
                }
                if(po==36&&cas(5,4,event) )
                {
                    swaap(ecran,5,5,5,4);
                    po=-1;
                }
                if(po==36&&!cas(5,5,event))
                   faut();
            }
            if (po==-1)
                po=0;
            break;
        }
        //compt +=verifier (ecran);
        //swp(ecran,7,7,7,7);
        //timer(ecran);
        //compteur= scor(ecran,compteur);
        x=verifier(ecran);
        if(x!=0)
        swp(ecran,7,7,7,7);
        SDL_Flip(ecran);
    }
}
