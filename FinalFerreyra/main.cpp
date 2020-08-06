#include <iostream>
#include<time.h>
#include<graphics.h>
#include<Juego.h>

using namespace std;

int main()
{
    Juego * juego = new Juego();
    juego->jugar();

    return 0;
}
