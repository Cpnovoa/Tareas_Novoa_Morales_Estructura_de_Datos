/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos									  *
* Author:  Ricardo Morales, Christian Novoa		                  *
* NRC: 6396                                                       *
******************************************************************/

#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED


using namespace std;

class Operaciones{
public:
    void potenciaMatriz(int** , int** , int);
    void encerar(int**, int);
    void llenarMatriz(string, int**, int);
    void llenarMatrizAleatoria(int**, int);
    void imprimir(int**, int);
    int** crearMatriz(int);
    void copiarMatriz(int **, int **, int );
    void ingresaNumericos(char *, int *);
};

#endif // OPERACIONES_H_INCLUDED
