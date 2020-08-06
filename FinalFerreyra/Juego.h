#ifndef JUEGO_H
#define JUEGO_H
#include "Carta.h"


class Juego
{
     private:

         char *p[29]={"imagenes\\figura0.jpg",
            "imagenes\\margehomer.jpg",
            "imagenes\\figura02.jpg",
            "imagenes\\figura03.jpg",
            "imagenes\\figura04.jpg",
            "imagenes\\figura05.jpg",
            "imagenes\\figura06.jpg",
            "imagenes\\figura07.jpg",
            "imagenes\\figura08.jpg",
            "imagenes\\figura09.jpg",
            "imagenes\\figura10.jpg",
            "imagenes\\figura11.jpg",
            "imagenes\\figura12.jpg",
            "imagenes\\figura13.jpg",
            "imagenes\\figura14.jpg",
            "imagenes\\figura15.jpg",
            "imagenes\\num0.jpg", //16
            "imagenes\\num1.jpg",
            "imagenes\\num2.jpg",
            "imagenes\\num3.jpg",
            "imagenes\\num4.jpg",
            "imagenes\\num5.jpg",
            "imagenes\\num6.jpg",
            "imagenes\\num7.jpg",
            "imagenes\\num8.jpg",
            "imagenes\\num9.jpg",
            "imagenes\\errores.jpg", //26
            "imagenes\\homerWin.jpg",
            "imagenes\\fondoNegro.jpg"};

        char *w[4]={"wav\\me_vuelvo_chango.wav",
            "wav\\nerd.wav",
            "wav\\los_simpson.wav",
            "wav\\doh.wav"};
//            "wav\\audio5.wav",
//            "wav\\audio6.wav",
//            "wav\\audio7.wav",
//            "wav\\audio8.wav",
//            "wav\\audio9.wav"};

    public:
        void generar(Carta *c);
        int leer (Carta *c);
        int invertir (Carta *c);
        void buscar_id(Carta *c, int p);
        void jugar();
        Juego();
        virtual ~Juego();

    protected:


};

#endif // JUEGO_H
