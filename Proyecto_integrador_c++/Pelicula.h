#ifndef Pelicula_h
#define Pelicula_h

#include <iostream>
#include "Video.h"

class Pelicula : public Video
{
    public:
        Pelicula(string, string, string, int, int, int);
        void muestraDatos();
        void ver_contenido();
        int calificaPelicula(int);
        
};

#endif

