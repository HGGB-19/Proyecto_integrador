#include <iostream>
#include <string>
#include "Pelicula.h"
#include "Capitulo.h"

using namespace std;


int main()
{   
    
    Pelicula pelicula_1("Pelicula", "thor", "ficcion", 7, 2020, 120);
    Serie serie_1(1234, "serie", "HIMYM", "Comedia", 2020, 120);
    Capitulo capitulo_1(1234,"prologo", 1, 1);

    pelicula_1.muestraDatos();
    serie_1.muestraDatos();
    capitulo_1.muestraDatos();







    
    return 0;
}