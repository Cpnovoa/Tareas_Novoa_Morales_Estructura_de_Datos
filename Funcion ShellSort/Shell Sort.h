/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos									  *
* Author:  Ricardo Morales, Christian Novoa		                  *
* NRC: 6396                                                       *
******************************************************************/

#ifndef SHELL_SORT_H_INCLUDED
#define SHELL_SORT_H_INCLUDED

#include <string>
using namespace std;

class ShellSort
{
private:
public:
    template <typename T, typename T2>
    void shellSort(T*, T2*, float, int, int);
    template <typename T>
    void insertionSort(T*, float, int);
    template <typename T>
    void insertionSortString(T*, float, int);
    template <typename T>
    void shellSortNumber(T*, float, int);
    template <typename T>
    void shellSortString(T*, float, int);
    template <typename T, typename T2>
    int llenarArreglo(string, T*, T2*, int);
    template <typename T, typename T2>
    void imprimirArray(T*, T2*, int, int);
    void ingresaNumericos(char *, int *);
};

#endif // SHELL_SORT_H_INCLUDED
