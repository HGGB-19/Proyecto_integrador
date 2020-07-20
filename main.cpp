#include <iostream>
#include <string>
#include <fstream>
#include "Pelicula.h"
#include "Capitulo.h"


using namespace std;


void ver_serie()
{
    Serie* contenido[3];

    contenido[0] = new Serie(1234, "Serie", "HIMYM","Comedia", 2020, 120);
    contenido[1] = new Serie(1234, "Serie", "Friends","Comedia", 2020, 120);
    contenido[2] = new Serie(1234, "Serie", "BNX","Anime", 2020, 120);

    for (int i = 0; i < 3; i++)
    {
        contenido[i] -> verSerie();
    }

}
void ver_pelicula()//Esta funcion me ayuda a crear un arrglo de clase peliculas
{
    Pelicula* contenido[3];

    contenido[0] = new Pelicula ("Pelicula", "Thor", "ficcion", 7, 2020, 120);
    contenido[1] = new Pelicula ("Pelicula", "Ironman", "ficcion", 7, 2020, 120);
    contenido[2] = new Pelicula ("Pelicula", "CapitanAmerica", "ficcion", 7, 2020, 120);

    for (int i = 0; i < 3; i++)
    {
        contenido[i] -> verPelicula();
    }
}
void opcion_1()//Esta funcion me ayuda a crear la primera opcion del menu 
{
    char opcion;

    cout << "¿ Que te gustaria ver ?" << endl;
    cout << "-----------------------\n" << endl;
    cout << "A) Peliculas" << endl;
    cout << "B) Series" << endl;
    cout << "Ingrese su opcion: " << endl;
    cin >> opcion;
    if (opcion == 'A')
    {
        cout << "---Aqui esta la lista de peliculas---" << endl;
        ver_pelicula();
    }
    else
    {
        ver_serie();
    }
}


int main()
{   
    char opcion;
    string salida;
    string si;

    cout << "-------Bienvenido a GrootMovie------" << endl;
    cout << "_____________________________________\n" << endl;
    do
    {
        cout << "A) Ver Contenido \n";
        cout << "B) Calificar una pelicula \n";
        cout << "C) Ver Peliculas \n";
        cout << "D) Ver Series \n";
        cout << "---------------------\n";
        cout << "Escoga una opcion : ";
        cin >> opcion;
        cout << "---------------------\n";

        switch (opcion)
        {
        case 'A':
            {
                opcion_1();
            break;
            }
        }
        cout << "Desea realizar otro movimiento?[si/no]: ";
        cin >> salida;
        cout << "------------------------------------------" << endl;
        cout << "Fue un placer atenderlo \n";
    } while (salida != "no");
    
    return 0;
}