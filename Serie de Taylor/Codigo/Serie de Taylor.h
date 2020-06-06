/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* AUTORES: Ricardo Morales, Christian Novoa
* NRC: 6396                                                       *
******************************************************************/

#ifndef SERIE_DE_TAYLOR_H_INCLUDED
#define SERIE_DE_TAYLOR_H_INCLUDED

#include <iostream>

class Serie_Taylor{

public:
    template <typename T>
    double seno(T, int);
    template <typename T>
    double coseno(T, int);
    template <typename T>
    double tangente(T, int);
    double factorial(int);
    template <typename T>
    double potencia(T, int);
    void ingresaDecimales(char *, double *);
};

#endif // SERIE_DE_TAYLOR_H_INCLUDED
