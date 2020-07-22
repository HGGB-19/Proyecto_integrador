#include <iostream>
#include <string>
#include <fstream>
#include "Pelicula.h"
#include "Serie.h"


using namespace std;


void ver_pelicula(Pelicula* contenido_Pelicula[])//Esta funcion me ayuda a crear un arrglo de clase peliculas
{
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1;
        contenido_Pelicula[i] -> ver_contenido();
    }
}
void crear_Peliculas(Pelicula* contenido_Pelicula[])
{
    contenido_Pelicula[0] = new Pelicula ("Pelicula", "Thor", "ficcion", 7, 2020, 120);
    contenido_Pelicula[1] = new Pelicula ("Pelicula", "Ironman", "ficcion", 7, 2020, 120);
    contenido_Pelicula[2] = new Pelicula ("Pelicula", "CapitanAmerica", "ficcion", 8, 2020, 120);

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
    contenido_Serie[0] -> crear_capitulo(1111,"Prologo", 1, 1, 8);
    contenido_Serie[0] -> crear_capitulo(1111,"TE AMO", 2, 1, 8);
    contenido_Serie[1] -> crear_capitulo(2222,"EL INICIO", 3, 1, 9);
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
void opcion_3(Pelicula* contenido_Pelicula[])
{
    ver_pelicula(contenido_Pelicula);

    int numero_peli;
    cout << "\n Selecciona la pelicula a ver: ";
    cin >> numero_peli;

    numero_peli = numero_peli -1;

    contenido_Pelicula[numero_peli] -> muestraDatos();

}


void opcion_4(Serie* contenido_Serie[],Capitulo* contenido_Capitulo[])
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

    char opcion;
    string salida;
    string si;
    init(contenido_Serie, contenido_Pelicula);

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
                opcion_1(contenido_Pelicula,contenido_Serie);//FUNCIONA NO TOCAR
            break;
            }
        case 'B':
            {
                opcion_2(contenido_Pelicula);//FUNCIONA NO TOCAR
            break;
            }
        case 'C':
            {
                opcion_3(contenido_Pelicula);//FUNCIONA NO TOCAR
            break;
            }
        case 'D':
            {
                opcion_4(contenido_Serie, contenido_Capitulo);
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