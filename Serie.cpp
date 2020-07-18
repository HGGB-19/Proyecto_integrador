#include "Serie.h"

using namespace std;

Serie :: Serie() : Video()
{

}

Serie :: Serie(string tipo, string nombre, string genero, int anio, int duracion) : Video(tipo, nombre, genero, anio, duracion)
{

}

void Serie :: muestraDatos()
{
    cout << "Tipo de video =  " << tipo << endl;
    cout << "Nombre de la serie =  " << nombre << endl;
    cout << "Genero de la serie =  " << genero << endl;
    cout << "Anio de estreno =  " << anio << endl;
    cout << "Duracion =  " << duracion << endl;

}