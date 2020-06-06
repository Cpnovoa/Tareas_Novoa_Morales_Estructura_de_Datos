#ifndef ARREGLO_H_INCLUDED
#define ARREGLO_H_INCLUDED

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
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <time.h>
#include <stdio.h>

using namespace std;

class Arreglo{
public:
    void encerarArray(int *, int );
    void llenarArray(string, int *, int);
    void llenarAleatorioArray(int *, int);
    void imprimirArray(int *, int);
    void ingresaNumericos(char *, int *);
};

#endif // ARREGLO_H_INCLUDED
