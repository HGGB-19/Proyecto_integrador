#include "Capitulo.h"

Capitulo :: Capitulo()
{

}
Capitulo :: Capitulo(int id_capitulo, string nombre,int numeroCapitulo, int temporada, int calificacionCapitulo)  //Serie(calificacion)
{
    this -> id_capitulo = id_capitulo;
    this -> nombre = nombre;
    this -> numeroCapitulo = numeroCapitulo;
    this -> temporada = temporada;
    this -> calificacionCapitulo = calificacionCapitulo;
}
void Capitulo :: muestraDatos()
{
    cout << "------------------------" << endl;
    cout << "\nNombre del capitulo  " << nombre << endl;
    cout << "Numero del episodio =  " << numeroCapitulo << endl;
    cout << "temporada =  " << temporada << endl;
    cout << "------------------------" << endl;
    
}


