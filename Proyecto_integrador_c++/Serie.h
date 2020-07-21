#ifndef Serie_h
#define Serie_h

#include <iostream>
#include "Video.h"

class Serie : public Video
{
    protected:
        int id_serie;
        int temporada;
    public:
        Serie();
        Serie(int ,string , string, string, int, int);
        void setIdSerie(int);
        int getIdSerie();
        void setTemporada(int temporada){this -> temporada = temporada;}
        int getTemporada(){return temporada;}
        void muestraDatos();
        void ver_contenido();
        
};

#endif