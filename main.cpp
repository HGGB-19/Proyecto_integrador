#include <iostream>
#include <string>
#include <fstream>
#include "Video.h"
#include "Pelicula.h"
#include "Serie.h"

using namespace std;


int main()
{   

    
    Pelicula pelicula_1("Pelicula", "thor", "ficcion", 7, 2020, 120);
    Serie pelicula_2("serie", "HIMYM", "Comedia", 2020, 120);

    pelicula_1.muestraDatos();
    pelicula_2.muestraDatos();
    
    return 0;

}