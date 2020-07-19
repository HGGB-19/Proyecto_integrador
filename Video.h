#ifndef Video_h
#define Video_h

#include <iostream>
using namespace std;     

class Video
{
    protected:
        string tipo;
        string nombre;
        string genero;
        int calificacion;
        int anio;
        int duracion;
        
    public:
        Video();
        Video(string, string, string, int, int, int);
        Video(string, string, string, int, int);
        void calificaVideo(int);
        virtual void muestraDatos();
        void setTipo(string);
        string getTipo();
        void setNombre(string);
        string getNombre();
        void setGenero(string);
        string getGenero();
        void setCalificacion(int);
        int getCalificacion();
        void setAnio(int);
        int getAnio();
        void setDuracion(int);
        int getDuracion();
};

#endif