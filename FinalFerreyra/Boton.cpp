#include "Boton.h"
#include<graphics.h>
//#define WM_BUTTONDOWN
#include<winuser.h>
Boton::Boton()
{
    //ctor
}
void Boton::posicion(int a, int b,int c, int d)
{
    xi=a;
    xf=c;
    yi=b;
    yf=d;
}


 int Boton::prueba(char *nom)
{
    if(mousex()>xi&&mousex()<xf&&mousey()>yi&&mousey()<yf&&ismouseclick(WM_LBUTTONDOWN))
    {
        clearmouseclick(WM_LBUTTONDOWN);
        readimagefile (nom,xi,yi,xf,yf);
        return 1;
    }
    else{return 0;}
}


 void Boton::estado(char *nom)
{
    readimagefile(nom,xi,yi,xf,yf);
}
Boton::~Boton()
{
    //dtor
}
