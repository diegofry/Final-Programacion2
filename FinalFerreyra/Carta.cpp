#include "Carta.h"

Carta::Carta()
{
   id = 0;
   bandera = 0;
}

void Carta::asignar_id(int d)
{
    id = d;
}
int Carta::mostrar_id()
{
    return id;
}
void Carta::probar_id(int d)
{
    if(d==id)
    {
        bandera=0;
    }
}
 void Carta::cargar_imagen(char *p[16])
{
    if (bandera!=1)
    {
        estado(p[0]);
    }
}
int Carta::voltear(char *p[16])
{
    if (bandera!=1&&prueba(p[id]))
    {
      bandera=1;
      return id;
    }
    else
        return 0;
}
void Carta::setBandera(int bandera)
{
    this->bandera = bandera;
}
int Carta::getBandera()
{
    return this->bandera;
}
void Carta::setId(int id)
{
    this->id = id;
}
int Carta::getId()
{
    return this->id;
}


Carta::~Carta()
{
    //dtor
}
