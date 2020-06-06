/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos									  *
* Author:  Ricardo Morales, Christian Novoa		                  *
* NRC: 6396                                                       *
******************************************************************/

#include <iostream>
#include <conio.h>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <sstream>
#include "Operaciones.h"

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       potenciaMatriz()
// Purpose:    Implementation of potenciaMatriz()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operaciones::potenciaMatriz(int** matriz, int** matrizResult, int tam)
{
	int num = 0, i, j, h, k;
    int** matrizAux; int** matrizAux2;

    matrizAux = crearMatriz(tam);
    encerar(matrizAux, tam);
    matrizAux2 = crearMatriz(tam);
    encerar(matrizAux2, tam);

	cout << "Ingrese el numero de veces que desea multiplicar la matriz: ";
	cin >> num;

	for (k = 0; k < num - 1; k++)
	{
		for (i = 0; i < tam; i++)
		{
			for (j = 0; j < tam; j++)
			{
				for (h = 0; h < tam; h++)
				{
				    if (k == 0)
                    {
                        *(*(matrizAux + i) + j) += *(*(matriz + i) + h) * *(*(matriz + h) + j);
                    }
					else
                    {
                        *(*(matrizAux + j) + i) += *(*(matriz + h) + i) * *(*(matrizAux2 + j) + h);
                    }
				}
			}
		}
		copiarMatriz(matrizAux, matrizAux2, tam);
		encerar(matrizAux, tam);
	}
	if (num == 1)
    {
        copiarMatriz(matriz, matrizResult, tam);
    }
    else
    {
        copiarMatriz(matrizAux2, matrizResult, tam);
    }

}

////////////////////////////////////////////////////////////////////////
// Name:       encerar()
// Purpose:    Implementation of encerar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operaciones::encerar(int **matriz, int tam)
{
	int i, j;
	for (i = 0; i < tam; i++)
	{
		for (j = 0; j < tam; j++)
		{
			*(*(matriz + i) + j) = 0;
		}
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       llenarMatriz()
// Purpose:    Implementation of llenarMatriz()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operaciones::llenarMatriz(string orden, int** matriz, int tam)
{
	int i, j, check = 0, val;
	string valor;
	for (i = 0; i < tam; i++)
	{
		for (j = 0; j < tam; j++)
		{
		    do{
                cout << orden << "[" << i << "," << j << "]" << endl;
                getline(cin, valor);

                try {
                    if (valor == ""){
                        cout << "No ha ingresado datos!" << endl;
                        throw 1;
                    }
                    for(int k = 0; k < valor.length(); k++){
                        if (!isdigit(valor[k])){
                            cout << "Dato incorrecto! Ingrese de nuevo" << endl;
                            throw 1;
                            break;
                        }
                    }
                }
                catch (int e){
                    check = 1;
                }
		    } while (check == 1);
		    val = stoi(valor);
		    *(*(matriz + i) + j) = val;
		}
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       llenarMatrizAleatoria()
// Purpose:    Implementation of llenarMatrizAleatoria()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operaciones::llenarMatrizAleatoria(int** matriz, int tam)
{
	srand(time(NULL));

	int i, j, valor;
	for (i = 0; i < tam; i++)
	{
		for (j = 0; j < tam; j++)
		{
			valor = 1 + rand() % (5 - 1);
			*(*(matriz + i) + j) = valor;
		}
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       imprimir()
// Purpose:    Implementation of imprimir()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operaciones::imprimir(int** matriz, int tam)
{
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			printf("%d", *(*(matriz + i) + j));
			printf("%*s", j + 5, "");
		}
		printf("\n");
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       crearMatriz()
// Purpose:    Implementation of crearMatriz()
// Return:     int**
////////////////////////////////////////////////////////////////////////

int** Operaciones::crearMatriz(int tam)
{
	int** matrizAux, j;
	matrizAux = (int**)malloc(tam * sizeof(int*));
	for (j = 0; j < tam; j++)
	{
		*(matrizAux + j) = (int*)malloc(tam * sizeof(int));
	}
	return matrizAux;
}

////////////////////////////////////////////////////////////////////////
// Name:       copiarMatriz()
// Purpose:    Implementation of copiarMatriz()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operaciones::copiarMatriz(int **matriz2, int **matriz1, int tam)
{
	for(int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            *(*(matriz1+i)+j) = *(*(matriz2+i)+j);
        }
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       ingresaNumericos()
// Purpose:    Implementation of ingresaNumericos()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operaciones::ingresaNumericos(char *msg, int *val){
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

