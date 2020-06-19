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

using namespace std;

class Operaciones{
public:
    template <typename T, typename T2>
    void potenciaMatriz(T** , T2** , int);
    template <typename T>
    void encerar(T**, int);
    template <typename T>
    void llenarMatriz(string, T**, int);
    template <typename T>
    void llenarMatrizAleatoria(T**, int);
    template <typename T>
    void imprimir(T**, int);
    int** crearMatriz(int);
    template <typename T, typename T2>
    void copiarMatriz(T **, T2 **, int );
    void ingresaNumericos(char *, int *);
};

#endif // OPERACIONES_H_INCLUDED
