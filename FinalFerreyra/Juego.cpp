#include "Juego.h"
#include "Carta.h"
#include<time.h>
#include<stdlib.h>
#include<iostream>
#include<graphics.h>
#include<winbgim.h>
#include<windows.h>
#include<MMSystem.h>
using namespace std;
Juego::Juego()
{
    //ctor
}
void Juego::generar(Carta *c)
{
    int v,b;
    for(int p=0;p<30;)
    {
        v=1+rand()%30;
        b=1;
        for (int t=0;t<30;t++)
        {
            if(v==c[t].mostrar_id())
            {
                b=0;
                break;
            }
        }
        if(b)
        {
            b=1;
            c[p].asignar_id(v);
            p++;
        }
    }
    for(int t=0 ; t<30 ; t++)
    {
        if(c[t].mostrar_id()>15)
        {
            c[t].asignar_id(c[t].mostrar_id() - 15);
        }
    }

}
int Juego::leer(Carta *c)
{
    int a;
    while(true)
    {
        for(int t=0;t<30;t++)
        {
            a=c[t].voltear(p);
            if(a!=0)
            {
                return a;
            }
        }
    }

}
int Juego::invertir(Carta *c)
{
     for(int t=0;t<30;t++)
     {
         c[t].cargar_imagen(p);
     }
}
void Juego::buscar_id(Carta *c, int p)
{
     for(int t=0;t<30;t++)
     {
         c[t].probar_id(p);
     }
}
void Juego::jugar()
{

    srand (time(NULL));
    initwindow (800,800,"Juego de Memoria",200,100);
    int a,b,cont=0,cantidadErrores=0;


    while(true)
    {

        readimagefile(p[28],0,0,800,800);
        readimagefile(p[26],500,10,700,50);
        readimagefile(p[16],550,60,650,200);
        cantidadErrores = 0;
        cont=0;
        FreeConsole();
        Carta c[6][5];
        generar(c[0]);

        for (int t=0,x=10;t<6;t++,x+=75)
        for(int p=0,y=10;p<5;p++,y+=95)
        {
            c[t][p].posicion(x,y,x+70,y+90);
            c[t][p].cargar_imagen(this->p);
        }
        while(cantidadErrores < 30 && cont < 15)
        {
            a=leer(c[0]);
            b=leer(c[0]);
            if(a-b==0)
            {
                cont++;
              PlaySound(w[1],NULL,SND_ASYNC);
            }
            else
            {

              buscar_id(&c[0][0],a);
              buscar_id(&c[0][0],b);
              PlaySound(w[3],NULL,SND_ASYNC);
              cantidadErrores++;
              switch(cantidadErrores)
              {
                case 1:
                    readimagefile(p[17],550,60,650,200);
                    break;
                case 2:
                    readimagefile(p[18],550,60,650,200);
                    break;
                case 3:
                    readimagefile(p[19],550,60,650,200);
                    break;
                case 4:
                    readimagefile(p[20],550,60,650,200);
                    break;
                case 5:
                    readimagefile(p[21],550,60,650,200);
                    break;
                case 6:
                    readimagefile(p[22],550,60,650,200);
                    break;
                case 7:
                    readimagefile(p[23],550,60,650,200);
                    break;
                case 8:
                    readimagefile(p[24],550,60,650,200);
                    break;
                case 9:
                    readimagefile(p[25],550,60,650,200);
                    break;
                case 10:
                    readimagefile(p[17],500,60,600,200);
                    readimagefile(p[16],600,60,700,200);
                    break;
                case 11:
                    readimagefile(p[17],500,60,600,200);
                    readimagefile(p[17],600,60,700,200);
                    break;
                case 12:
                    readimagefile(p[17],500,60,600,200);
                    readimagefile(p[18],600,60,700,200);
                    break;
                case 13:
                    readimagefile(p[17],500,60,600,200);
                    readimagefile(p[19],600,60,700,200);
                    break;
                case 14:
                    readimagefile(p[17],500,60,600,200);
                    readimagefile(p[20],600,60,700,200);
                    break;
                case 15:
                    readimagefile(p[17],500,60,600,200);
                    readimagefile(p[21],600,60,700,200);
                    break;
                case 16:
                    readimagefile(p[17],500,60,600,200);
                    readimagefile(p[22],600,60,700,200);
                    break;
                case 17:
                    readimagefile(p[17],500,60,600,200);
                    readimagefile(p[23],600,60,700,200);
                    break;
                case 18:
                    readimagefile(p[17],500,60,600,200);
                    readimagefile(p[24],600,60,700,200);
                    break;
                case 19:
                    readimagefile(p[17],500,60,600,200);
                    readimagefile(p[25],600,60,700,200);
                    break;
                case 20:
                    readimagefile(p[18],500,60,600,200);
                    readimagefile(p[16],600,60,700,200);
                    break;
                case 21:
                    readimagefile(p[18],500,60,600,200);
                    readimagefile(p[17],600,60,700,200);
                    break;
                case 22:
                    readimagefile(p[18],500,60,600,200);
                    readimagefile(p[18],600,60,700,200);
                    break;
                case 23:
                    readimagefile(p[18],500,60,600,200);
                    readimagefile(p[19],600,60,700,200);
                    break;
                case 24:
                    readimagefile(p[18],500,60,600,200);
                    readimagefile(p[20],600,60,700,200);
                    break;
                case 25:
                    readimagefile(p[18],500,60,600,200);
                    readimagefile(p[21],600,60,700,200);
                    break;
                case 26:
                    readimagefile(p[18],500,60,600,200);
                    readimagefile(p[22],600,60,700,200);
                    break;
                case 27:
                    readimagefile(p[18],500,60,600,200);
                    readimagefile(p[23],600,60,700,200);
                    break;
                case 28:
                    readimagefile(p[18],500,60,600,200);
                    readimagefile(p[24],600,60,700,200);
                    break;
                case 29:
                    readimagefile(p[18],500,60,600,200);
                    readimagefile(p[25],600,60,700,200);
                    break;
                default:
                    break;
              }
            }
            Sleep(400);
            invertir(c[0]);
            if(cont==15)
            {
                readimagefile(p[27],300,10,731,620);
                PlaySound(w[2],NULL,SND_ASYNC);
                getch();
                clearmouseclick(WM_LBUTTONDOWN);
                PlaySound(NULL,NULL,0);
            }
        }
        if(cantidadErrores == 30)
        {
            PlaySound(w[0],NULL,SND_ASYNC);
        }
    }
}

Juego::~Juego()
{
    //dtor
}
