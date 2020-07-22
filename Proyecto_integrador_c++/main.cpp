//Hector Gustavo Gutierrez Bernstorff
//A00827174
//Profesora: Rosa Guadalupe Paredes Juarez
//Proyecto INTEGRADOR : SITEMAS DE STREAMING
#include <iostream>
#include <string>
#include <fstream>
#include "Pelicula.h"
#include "Serie.h"


using namespace std;


void ver_pelicula(Pelicula* contenido_Pelicula[])//Esta funcion me ayuda a crear un arrglo de clase peliculas
{
    for (int i = 0; i < 9; i++)
    {
        cout << i + 1;
        contenido_Pelicula[i] -> ver_contenido();
    }
}
void crear_Peliculas(Pelicula* contenido_Pelicula[])
{
    contenido_Pelicula[0] = new Pelicula ("Pelicula", "IRONMAN", "Ficcion", 7, 2009, 115);
    contenido_Pelicula[1] = new Pelicula ("Pelicula", "BATMAN", "Ficcion", 9, 2010, 130);
    contenido_Pelicula[2] = new Pelicula ("Pelicula", "HACHIKO", "Drama", 10, 2007, 120);
    contenido_Pelicula[3] = new Pelicula ("Pelicula", "LA TEORIA DE TODO", "Drama", 7, 2011, 105);
    contenido_Pelicula[4] = new Pelicula ("Pelicula", "ROCKY", "Accion", 6, 1999, 95);
    contenido_Pelicula[5] = new Pelicula ("Pelicula", "COMO ENTRENAR A TU DRAGON", "Aventura", 8, 2012, 120);
    contenido_Pelicula[6] = new Pelicula ("Pelicula", "TITANIC", "Drama", 8, 2000, 120);
    contenido_Pelicula[7] = new Pelicula ("Pelicula", "ANABELLE", "Terror", 5, 2013, 110);
    contenido_Pelicula[8] = new Pelicula ("Pelicula", "CHUCKY", "Terror", 6, 2006, 130);

}
void ver_serie(Serie* contenido_Serie[])//Esta funcion me ayuda a crear objetos de tipo serie
{
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1;
        contenido_Serie[i] -> ver_contenido();
    }

}
void crear_Series(Serie* contenido_Serie[])//ESTA FUNCION ME AYUDA A CREAR LA SERIE Y GUARDAR SUS CAPITULOS 
{
    contenido_Serie[0] = new Serie(1111, "Serie", "HIMYM","Comedia", 2015, 8);
    contenido_Serie[1] = new Serie(2222, "Serie", "Friends","Comedia", 2010, 4);
    contenido_Serie[2] = new Serie(3333, "Serie", "BNX","Anime", 2020, 1);

    //CREACION DE CAPITULOS
    contenido_Serie[0] -> crear_capitulo(1111,"Prologo", 1, 1, 7);
    contenido_Serie[0] -> crear_capitulo(1111,"TE AMO", 2, 2, 8);
    contenido_Serie[0] -> crear_capitulo(1111,"THE ROBIN", 12, 7, 9);
    contenido_Serie[0] -> crear_capitulo(1111,"LA VIE EN ROSE", 22, 8, 10);
    contenido_Serie[1] -> crear_capitulo(2222,"EL COMIENZO", 1, 1, 9);
    contenido_Serie[1] -> crear_capitulo(2222,"THE PURPLE DOOR", 5, 3, 8);
    contenido_Serie[1] -> crear_capitulo(2222,"THE FATHER", 5, 5, 6);
    contenido_Serie[1] -> crear_capitulo(2222,"BROTHERS", 18, 8, 7);
    contenido_Serie[2] -> crear_capitulo(3333,"THE CITY", 1, 1, 6);
    contenido_Serie[2] -> crear_capitulo(3333,"THE POWER", 2, 1, 8);
    contenido_Serie[2] -> crear_capitulo(3333,"ANIMALS", 3, 1, 7);
    contenido_Serie[2] -> crear_capitulo(3333,"WOLF", 12, 1, 9);
}
void init(Serie* contenido_Serie[], Pelicula* contenido_Pelicula[])
{
    crear_Peliculas(contenido_Pelicula);
    crear_Series(contenido_Serie);
}



void opcion_1(Pelicula* contenido_Pelicula[],Serie* contenido_Serie[])//Esta funcion me ayuda a crear la primera opcion del menu 
{
    
    cout << "Lista de Peliculas y Videos" << endl;
    cout << "-----------------------\n" << endl;
    cout << "      Tipo ---- Pelicula ---- Genero ---- Calificacion" << endl;
    ver_pelicula(contenido_Pelicula);
    cout << "\n      Tipo ---- Serie ---- Temporada ---- Genero" << endl;
    ver_serie(contenido_Serie);

}
void opcion_2(Pelicula* contenido_Pelicula[])
{
    //FALTA PODER CALIFICAR UNA PELICULA
    ver_pelicula(contenido_Pelicula);

    int numero_peli;
    cout << "\n Selecciona la pelicula a calificar: ";
    cin >> numero_peli;

    numero_peli = numero_peli -1;

    int calificacion;
    cout << "ingrese la calificacion: ";
    cin >> calificacion;
    contenido_Pelicula[numero_peli] -> calificaPelicula(calificacion);

//https://codingornot.com/cuando-se-utiliza-paso-por-referencia-y-cuando-paso-por-valor LINK QUE ME AYUDO LA MAESTRA

}
void opcion_3(Pelicula* contenido_Pelicula[])//Esta funcion me ayuda para ver el contenido de una pelicula
{
    ver_pelicula(contenido_Pelicula);

    int numero_peli;
    cout << "\n Selecciona la pelicula a ver: ";
    cin >> numero_peli;

    numero_peli = numero_peli -1;

    contenido_Pelicula[numero_peli] -> muestraDatos();

}

void opcion_4(Serie* contenido_Serie[],Capitulo* contenido_Capitulo[])//Esta funcion me ayuda a ver los capitulos de una serie
{
    ver_serie(contenido_Serie);

    int numero_Serie;
    cout << "\nQue Serie te gustaria ver: ";
    cin >> numero_Serie;

    numero_Serie = numero_Serie - 1;

    contenido_Serie[numero_Serie] -> muestraDatos();

    contenido_Serie[numero_Serie] -> ver_capitulos();

}


int main()
{   
    Pelicula* contenido_Pelicula[100];
    Serie* contenido_Serie[100];
    Capitulo* contenido_Capitulo[100];

    int opcion;
    string salida;
    string si;
    init(contenido_Serie, contenido_Pelicula);

    cout << "-------Bienvenido a GrootMovie------" << endl;
    cout << "_____________________________________\n" << endl;
    do
    {
        cout << "1.- Ver Contenido \n";
        cout << "2.- Calificar una pelicula \n";
        cout << "3.- Ver Peliculas \n";
        cout << "4.- Ver Series \n";
        cout << "5.- SALIR \n";
        cout << "---------------------\n";
        cout << "Escoga una opcion : ";
        cin >> opcion;
        cout << "---------------------\n";

        switch (opcion)
        {
        case 1:
            {
                opcion_1(contenido_Pelicula,contenido_Serie);//FUNCIONA NO TOCAR
            break;
            }
        case 2:
            {
                opcion_2(contenido_Pelicula);//FUNCIONA NO TOCAR
            break;
            }
        case 3:
            {
                opcion_3(contenido_Pelicula);//FUNCIONA NO TOCAR
            break;
            }
        case 4:
            {
                opcion_4(contenido_Serie, contenido_Capitulo);//FUNCIONA NO TOCAR
            break;
            }
        case 5:
            {
                cout << "seguro que quiere salir de la aplicacion?[si/no]: ";
                cin >> salida;
                cout << "------------------------------------------" << endl;
                cout << "\nGroot le desea un bonito dia  \n";
            }
        }
        
        cout << "\n------------------------------------------ \n" << endl;
        
    } while (salida != "si");
    
    return 0;
}