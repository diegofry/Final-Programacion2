#ifndef BOTON_H
#define BOTON_H


class Boton
{
    private:
        int xi,xf,yi,yf;
    public:
        void posicion (int a,int b, int c, int d);
        int prueba(char * nom);
        void estado(char *nom);
        Boton();
        virtual ~Boton();

    protected:

    private:
};

#endif // BOTON_H
