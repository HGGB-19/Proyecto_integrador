#ifndef Serie_h
#define Serie_h

#include <iostream>
#include <vector>
#include "Video.h"
#include "Capitulo.h"

class Serie : public Video
{
    private:
        vector <Capitulo*> contenido_capitulos;
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
        void ver_capitulos();
        void ver_contenido();
        void crear_capitulo(int, string, int, int, int);
};

#endif