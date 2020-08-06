#ifndef CARTA_H
#define CARTA_H
#include "Boton.h"
#include<time.h>

class Carta: public Boton
{

    private:
        bool bandera;
        int id;


    public:


        int mostrar_id();
        void asignar_id( int d);
        void probar_id( int d);
        void cargar_imagen(char *p[16]);
        int voltear(char *p[16]);
        void setId(int id);
        int getId();
        void setBandera(int bandera);
        int getBandera();
        Carta();
        virtual ~Carta();

    protected:


};

#endif // CARTA_H
