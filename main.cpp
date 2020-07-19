#include <iostream>
#include <string>
#include "Pelicula.h"
#include "Serie.h"

using namespace std;


int main()
{   
    
    Pelicula pelicula_1("Pelicula", "thor", "ficcion", 7, 2020, 120);
    Serie serie_1("serie", "HIMYM", "Comedia", 2020, 120);

    pelicula_1.muestraDatos();
    serie_1.muestraDatos();

    pelicula_1.calificaPelicula();
    pelicula_1.muestraDatos();
    
    return 0;

}