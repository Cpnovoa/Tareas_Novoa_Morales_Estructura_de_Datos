/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos									   *
* Author:  Christian Novoa										   *
* Modified: lunes, 01 de junio de 2020 11:32:27 p. m.			   *
* NRC: 6396                                                       *
******************************************************************/

#include <iostream>
#include <conio.h>
#include <string>
#include "MatrizOperaciones.cpp"

using namespace std;

int main()
{
	int** matriz, ** matrizResult;

	matriz = crearMatriz(3);
	matrizResult = crearMatriz(3);
	encerar(matriz, 3);
	encerar(matrizResult, 3);

	llenarMatriz("Ingrese el numero de: ",matriz, 3);
	system("cls");
	imprimir(matriz, 3);
	cout << "\n";
	proceso(matriz, matrizResult, 3);
	cout << "La matriz resultante es: \n";
	imprimir(matrizResult, 3);
	cout << "\n";

    free(matrizResult);
	system("pause");
	return 0;
}
