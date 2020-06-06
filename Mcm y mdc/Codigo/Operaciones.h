#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED

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

class Operaciones{
public:
    void maximoComumDenom(int *, int);
    void minimoComunMultiplo(int *, int );
    bool verificarDivisibilidad(int *, int , int );
    int arregloMax(int *, int );
};

#endif // OPERACIONES_H_INCLUDED
