#ifndef Capitulo_h
#define Capitulo_h

#include <iostream>
#include "Serie.h"

using namespace std;

class Capitulo : public Serie
{
    protected:
    int id_capitulo;
    string nombreCapitulo;
    int numeroCapitulo;
    int temporada;
    int calificacionCapitulo;

    public:
        Capitulo();
        Capitulo(int, string, int, int, int);
        void setId_Capitulo(int id_capitulo) {this -> id_capitulo = id_capitulo;}
        int getId_Capitulo() {return id_capitulo;}
        void setNombreCapitulo(string nombreCapitulo) {this -> nombreCapitulo = nombreCapitulo;}
        string getNombreCapitulo(){return nombreCapitulo;}
        void setNumeroCapitulo(int numeroCapitulo) {this -> numeroCapitulo = numeroCapitulo;}
        int getNumeroCapitulo() {return numeroCapitulo;}
        void setTemporada0(int temporada) {this -> temporada = temporada;}
        int getTemporada() {return temporada;}
        void muestraDatos();
};

#endif