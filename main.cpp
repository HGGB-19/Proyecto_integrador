#include <iostream>
#include <string>
#include <fstream>
#include "Pelicula.h"
#include "Capitulo.h"


using namespace std;


void ver_pelicula(Pelicula* contenido_Pelicula[])//Esta funcion me ayuda a crear un arrglo de clase peliculas
{

    contenido_Pelicula[0] = new Pelicula ("Pelicula", "Thor", "ficcion", 7, 2020, 120);
    contenido_Pelicula[1] = new Pelicula ("Pelicula", "Ironman", "ficcion", 7, 2020, 120);
    contenido_Pelicula[2] = new Pelicula ("Pelicula", "CapitanAmerica", "ficcion", 7, 2020, 120);

    for (int i = 0; i < 3; i++)
    {
        cout << i + 1;
        contenido_Pelicula[i] -> ver_contenido();
    }
}
void ver_serie(Serie* contenido_Serie[])//Esta funcion me ayuda a crear objetos de tipo serie
{

    contenido_Serie[0] = new Serie(1234, "Serie", "HIMYM","Comedia", 2020, 8);
    contenido_Serie[1] = new Serie(1234, "Serie", "Friends","Comedia", 2020, 4);
    contenido_Serie[2] = new Serie(1234, "Serie", "BNX","Anime", 2020, 1);

    for (int i = 0; i < 3; i++)
    {
        contenido_Serie[i] -> ver_contenido();
    }

}
void ver_capitulos()
{
    Capitulo* contenido[3];

    contenido[0] = new Capitulo(1234,"Prologo", 1, 1);
    contenido[1] = new Capitulo(1234,"TE AMO", 2, 1);
    contenido[2] = new Capitulo(1234,"CONOCI A TU MADRE", 3, 1);
}


void opcion_1(Pelicula* contenido_Pelicula[],Serie* contenido_Serie[])//Esta funcion me ayuda a crear la primera opcion del menu 
{
    char opcion;

    cout << "¿ Que te gustaria ver ?" << endl;
    cout << "-----------------------\n" << endl;
    cout << "A) Peliculas" << endl;
    cout << "B) Series" << endl;
    cout << "Ingrese su opcion: ";
    cin >> opcion;
    if (opcion == 'A')
    {
        cout << "---Aqui esta la lista de peliculas---" << endl;
        cout << "----------------------------------" << endl;
        cout << "Pelicula ---- Genero ---- Calificacion\n" << endl;
        ver_pelicula(contenido_Pelicula);
        
    }
    else
    {
        cout << "---Aqui esta la lista de Series---" << endl;
        cout << "----------------------------------" << endl;
        cout << "Serie ---- Temporada ---- Genero\n" << endl;
        ver_serie(contenido_Serie);
    }
}
void opcion_2()
{
    //FALTA PODER CALIFICAR UNA PELICULA
}
void opcion_3(Pelicula* contenido_Pelicula[])
{
    ver_pelicula(contenido_Pelicula);

    int numero_peli;
    cout << "\n Selecciona la pelicula a ver: ";
    cin >> numero_peli;

    numero_peli = numero_peli -1;

    contenido_Pelicula[numero_peli] -> muestraDatos();

}






int main()
{   
    Pelicula* contenido_Pelicula[100];
    Serie* contenido_Serie[100];
    Capitulo* contenido_Capitulo[100];

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
                opcion_1(contenido_Pelicula,contenido_Serie);//FUNCIONA, NO TOCAR
            break;
            }
        case 'B':
            {
                //opcion_2();
            break;
            }
        case 'C':
            {
                opcion_3(contenido_Pelicula);//FUNCIONA NO TOCAR
            break;
            }
        case 'D':
            {
                //opcion_4();
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