/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* AUTORES: Ricardo Morales, Christian Novoa
* NRC: 6396                                                       *
******************************************************************/
#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED

#include <iostream>

class Operaciones{
public:
    double factorial(int);
    template <typename T>
    double potencia(T, int);
    void ingresaDecimales(char *, double *);
};

#endif // OPERACIONES_H_INCLUDED
