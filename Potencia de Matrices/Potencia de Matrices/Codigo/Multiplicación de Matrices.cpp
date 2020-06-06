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
#include "Operaciones.cpp"

using namespace std;

int main()
{
    Operaciones objO;
	int** matriz, ** matrizResult;
	int tam;

    do{
        objO.ingresaNumericos("Ingrese el tamanio de la matriz",&tam);
        if (tam == 0){
            cout << "Debe tener un tamaño!" << endl;
        }
    }
    while (tam == 0);

	matriz = objO.crearMatriz(tam);
	matrizResult = objO.crearMatriz(tam);
	objO.encerar(matriz, tam);
	objO.encerar(matrizResult, tam);

	//objO.llenarMatriz("\nIngrese el numero de: ",matriz, tam);
	objO.llenarMatrizAleatoria(matriz, tam);
	system("cls");
	objO.imprimir(matriz, tam);
	cout << "\n";
	objO.potenciaMatriz(matriz, matrizResult, tam);
	cout << "La matriz resultante es: \n";
	objO.imprimir(matrizResult, tam);
	cout << "\n";

    free(matrizResult);
	system("pause");
	return 0;
}
