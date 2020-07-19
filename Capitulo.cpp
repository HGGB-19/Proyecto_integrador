#include "Capitulo.h"

Capitulo :: Capitulo()
{

}
Capitulo :: Capitulo(int id_serie, string nombre,int numeroCapitulo, int temporada)
{
    this -> id_serie = id_serie;
    this -> nombre = nombre;
    this -> numeroCapitulo = numeroCapitulo;
    this -> temporada = temporada;
}
void Capitulo :: muestraDatos()
{
    cout << " nombre del capitulo  " << nombre << endl;
    cout << "Numero del episodio =  " << numeroCapitulo << endl;
    cout << "temporada =  " << temporada << endl;
    
}