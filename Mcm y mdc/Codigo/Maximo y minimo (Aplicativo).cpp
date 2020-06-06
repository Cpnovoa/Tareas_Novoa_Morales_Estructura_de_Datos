/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos									  *
* Author:  Ricardo Morales, Christian Novoa		                  *
* NRC: 6396                                                       *
******************************************************************/

#include<iostream>
#include<conio.h>
#include "Operaciones.cpp"
#include "Arreglo.cpp"

using namespace std;

int main()
{
    Operaciones objOperaciones;
    Arreglo objArreglos;
    int tam;
    do{
        objArreglos.ingresaNumericos("Ingrese el numero de terminos",&tam);
        if (tam == 0){
            cout << "Debe tener un numero de terminos!" << endl;
        }
    }
    while (tam == 0);
    cout << "\n";
    int *vect = new int[tam];
    objArreglos.encerarArray(vect, tam);
    objArreglos.llenarArray("Ingrese el dato ", vect, tam);
    cout << "Arreglo: \n";
    objArreglos.imprimirArray(vect, tam);
    cout << "\n";
    objOperaciones.maximoComumDenom(vect, tam);
    objOperaciones.minimoComunMultiplo(vect, tam);

    system("pause");
    return 0;
}
