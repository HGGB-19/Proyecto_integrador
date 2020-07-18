#include <iostream>
#include "Video.h"
using namespace std;


//creacion de set y get
void Video :: setTipo(string tipoVideo)
{
    this -> tipo = tipo;
}
string Video :: getTipo()
{
    return tipo;
}
void Video :: setNombre(string nombre)
{
    this -> nombre = nombre;
}
string Video :: getNombre()
{
    return nombre;
}
void Video :: setGenero(string genero)
{
    this -> genero = genero;
}
string Video :: getGenero()
{
    return genero;
}
void Video :: setCalificacion(int calificacion)
{
    this -> calificacion = calificacion;
}
int Video :: getCalificacion()
{
    return calificacion;
}
void Video :: setAnio(int anio)
{
    this -> anio = anio;
}
int Video :: getAnio()
{
    return anio;
}
void Video :: setDuracion(int duracion)
{
    this -> duracion = duracion;
}
int Video :: getDuracion()
{
    return duracion;
}

//constructor_1
Video :: Video(string tipo, string nombre, string genero, int calificacion, int anio, int duracion)
{
    this -> tipo = tipo;
    this -> nombre = nombre;
    this -> genero = genero;
    this -> calificacion = calificacion;
    this -> anio = anio;
    this -> duracion = duracion;

}
//constructor_2
Video :: Video(string tipo, string nombre, string genero, int anio, int duracion)
{
    this -> tipo = tipo;
    this -> nombre = nombre;
    this -> genero = genero;
    this -> anio = anio;
    this -> duracion = duracion;
}
void Video :: calificaVideo(int calificacion_1)
{
    calificacion = calificacion_1;
}
void Video :: muestraDatos()
{


}
Video :: Video ()
{

}

