#include "Pelicula.h"

using namespace std;

Pelicula :: Pelicula(string tipo, string nombre, string genero, int calificacion, int anio, int duracion) : Video(tipo, nombre, genero, calificacion, anio, duracion)
{

}

void Pelicula :: muestraDatos()
{
    cout << "Tipo de video =  " << tipo << endl;
    cout << "Nombre de la pelicula =  " << nombre << endl;
    cout << "Genero de la pelicula =  " << genero << endl;
    cout << "Calificacion =  " << calificacion << endl;   
    cout << "Anio de estreno =  " << anio << endl;
    cout << "Duracion =  " << duracion << endl;

}