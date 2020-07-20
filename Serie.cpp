#include "Serie.h"

using namespace std;

Serie :: Serie() : Video()
{

}
Serie :: Serie(int id_serie, string tipo, string nombre, string genero, int anio, int temporada) : Video(tipo, nombre, genero, anio)
{
    this -> id_serie = id_serie;
    this -> temporada = temporada;
}
void Serie :: setIdSerie(int id_serie)
{
    this -> id_serie = id_serie;
}
int Serie :: getIdSerie()
{
    return id_serie;
}

void Serie :: muestraDatos()
{
    cout << "Tipo de video =  " << tipo << endl;
    cout << "Nombre de la serie =  " << nombre << endl;
    cout << "Genero de la serie =  " << genero << endl;
    cout << "Anio de estreno =  " << anio << endl;
    cout << "Temporadas =  " << temporada << endl;

}
void Serie :: verSerie() 
{
    cout << " [+] " << nombre << " ---- " << temporada << " ---- " << genero << endl;
}