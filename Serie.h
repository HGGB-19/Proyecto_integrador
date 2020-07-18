#ifndef Serie_h
#define Serie_h

#include <iostream>
#include "Video.h"

class Serie : public Video
{
    public:
        Serie();
        Serie(string tipo, string nombre, string genero, int anio, int duracion);
        void muestraDatos();
    
};

#endif