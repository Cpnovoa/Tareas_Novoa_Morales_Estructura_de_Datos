/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos									  *
* Author:  Ricardo Morales, Christian Novoa		                  *
* NRC: 6396                                                       *
******************************************************************/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <time.h>
#include "Shell Sort.h"
#include "Shell Sort.cpp"

using namespace std;

int main()
{
    srand(time(NULL));
    ShellSort obj;
    int tam, tipo=1;
    do{
        obj.ingresaNumericos("Ingrese el numero de terminos",&tam);
        if (tam == 0){
            cout << "\nDebe tener un numero de terminos!" << endl;
        }
    }
    while (tam == 0);
    cout << endl;
    string *vectp = new string[tam];
    float *vect = new float[tam];

    /*for(int i = 0; i < tam; i++)
    {
        *(vect + i) = 1 + rand() % (101+1) + 0.24;
    }*/
    tipo = obj.llenarArreglo("Ingrese el dato ", vect, vectp, tam);
    cout<< endl;
    cout<<"Arreglo: ";
    obj.imprimirArray(vect, vectp, tam, tipo);
    cout<<"Arreglo Ordenado: ";
    obj.shellSort(vect, vectp, 0, tam, tipo);
    obj.imprimirArray(vect, vectp, tam, tipo);
    cout<<"\n";
    delete(vect);
    delete(vectp);

    system("pause");
    return 0;
}
