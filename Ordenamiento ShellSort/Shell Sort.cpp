/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos									  *
* Author:  Ricardo Morales, Christian Novoa		                  *
* NRC: 6396                                                       *
******************************************************************/

#include "Shell Sort.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       shellSort(T*, T2*, float, int, int)
// Purpose:    Implementation of shellSort(T*, T2*, float, int, int)
// Return:     void
////////////////////////////////////////////////////////////////////////

template <typename T, typename T2>
void ShellSort::shellSort(T* vect, T2* vectp, float n, int tam, int tipo)
{
    if (tipo == 1) {
        shellSortNumber(vect, n, tam);
    }
    else if (tipo == 2)
    {
        //shellSortString(vectp, n, tam);
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       insertionSort(T*, float, int)
// Purpose:    Implementation of insertionSort(T*, float, int)
// Return:     void
////////////////////////////////////////////////////////////////////////

template <typename T>
void ShellSort::insertionSort(T* vect, float n, int tam)
{
    float aux;
    int i;
    if(n == tam-1){
        return;
    }
    else{
        insertionSort(vect, n+1, tam);
        i = n;
        aux = *(vect + i);
        for(int j = n+1; j < tam; j++){
            if(aux > *(vect + j)){
                *(vect + (j-1)) = *(vect + j);
                *(vect + j) = aux;
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       shellSortNumber(T*, float, int)
// Purpose:    Implementation of shellSortNumber(T*, float, int)
// Return:     void
////////////////////////////////////////////////////////////////////////

template <typename T>
void ShellSort::shellSortNumber(T* vect, float n, int tam)
{
    if(tam <= 0){
        return;
     }
     if (n < tam){
        insertionSort(vect, n, tam);
        shellSortNumber(vect, n+1, tam);
     }
     else {
        shellSortNumber(vect, 0, tam/2);
     }
}

////////////////////////////////////////////////////////////////////////
// Name:       shellSortString(T*, float, int)
// Purpose:    Implementation of shellSortString(T*, float, int)
// Return:     void
////////////////////////////////////////////////////////////////////////

template <typename T>
void shellSortString(T* vect, float n, int tam)
{
    if(tam <= 0){
        return;
     }
     if (n < tam){
        insertionSortString(vect, n, tam);
        shellSortString(vect, n+1, tam);
     }
     else {
        shellSortString(vect, 0, tam/2);
     }
}

////////////////////////////////////////////////////////////////////////
// Name:       insertionSortString(T*, float, int);
// Purpose:    Implementation of insertionSortString(T*, float, int);
// Return:     void
////////////////////////////////////////////////////////////////////////

template <typename T>
void insertionSortString(T* vect, float n, int tam)
{
    string aux;
    int i;
    if(n == tam-1){
        return;
    }
    else{
        insertionSortString(vect, n+1, tam);
        i = n;
        strcpy(*(vect + i), aux);
        for(int j = n+1; j < tam; j++){
            if(strcmp(aux,*(vect + j))<0){
                *(vect + (j-1)) = *(vect + j);
                *(vect + j) = aux;
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       llenarArreglo(string, T*, T2*, int)
// Purpose:    Implementation of llenarArreglo(string, T*, T2*, int)
// Return:     int
////////////////////////////////////////////////////////////////////////

template <typename T, typename T2>
int ShellSort::llenarArreglo(string orden, T* vect, T2* vect2, int tam)
{
    int i, check = 0, contNum = 0, contPunt = 0, contLet = 0, cont = 0;
	float val;
	string valor;
	for (i = 0; i < tam; i++)
	{
        do{
            cout << orden << i + 1 << " : ";
            getline(cin, valor);
            try{
                if (valor == ""){
                    cout << "\nNo ha ingresado datos!" << endl;
                    throw 1;
                }
                for (int i = 0; i < valor.length(); i++)
                {
                    if (isdigit(valor[i])) contNum++;
                    if (isalpha(valor[i])) contLet++;
                    if (!isalpha(valor[i]) && (!isdigit(valor[i]) && valor[i] != '.')) contLet++;
                    if (valor[i] == '.' ) contPunt++;
                }
            }
            catch (int e){
                check = 1;
            }
        } while (check == 1);
        if (contNum >= 1 && contLet == 0 && contPunt <= 1 && (cont == 0 || cont == 1))
        {
            val = stof(valor);
            *(vect + i) = val;
            cont = 1;
        }
        else if ((contLet > 0 || contPunt > 1 || contNum >= 1) && cont != 1)
        {
            *(vect2 + i) = valor;
            cont = 2;
        }
        else if ((contLet > 0 || contPunt >= 1 || contNum >= 1) && cont == 1)
        {
            i--;
            cout << "\nAhora debe ingresar solo datos numéricos! Ingrese de nuevo" << endl;
        }
        contLet = 0;
        contNum = 0;
        contPunt = 0;
	}
	if (cont == 0 || cont == 1){
        return 1;  // 1 para identificar números enteros o decimales
	}
	else return 2; // 2 para letras o palabras
}

////////////////////////////////////////////////////////////////////////
// Name:       imprimirArray(T*, T2*, int, int)
// Purpose:    Implementation of imprimirArray(T*, T2*, int, int)
// Return:     void
////////////////////////////////////////////////////////////////////////

template <typename T, typename T2>
void ShellSort::imprimirArray(T* vect, T2* vectp, int tam, int tipo)
{
    if (tipo == 1) {
        for (int i = 0; i < tam; i++)
        {
            cout << *(vect + i) << ", ";
        }
        cout << "\n";
    }
    else if (tipo == 2)
    {
        for (int i = 0; i < tam; i++)
        {
            cout << *(vectp + i) << ", ";
        }
        cout << "\n";
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       ingresaNumericos(char *, int *)
// Purpose:    Implementation of ingresaNumericos(char *, int *)
// Return:     void
////////////////////////////////////////////////////////////////////////

void ShellSort::ingresaNumericos(char *msg, int *val)
{
	int caracter = 0;
	puts(msg);
	int i=0;
	char valor[5];
	while((caracter=getch())!=13){
		if(caracter>=48 && caracter<=57){
			valor[i++]=caracter;
			printf("%c",caracter);
		}
	}
	*val=atoi(valor);
}

