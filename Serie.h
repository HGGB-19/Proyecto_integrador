#ifndef Serie_h
#define Serie_h

#include <iostream>
#include "Video.h"

class Serie : public Video
{
    protected:
        int id_serie;
    public:
        Serie();
        Serie(int ,string , string, string, int, int);
        void setIdSerie(int);
        int getIdSerie();
        void muestraDatos();
        void  verSerie();
};

#endif