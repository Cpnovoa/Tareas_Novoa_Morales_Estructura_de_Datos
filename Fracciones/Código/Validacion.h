/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos
* Author:  Ricardo Morales, Christian Novoa                                    *
* NRC: 6396                                                       *
******************************************************************/
#include <iostream>
#include <ctype.h>
#include <string.h>

using namespace std;

class Validacion {
public:
	template <typename T1, typename T2>
	bool validar(T1, T2);
};



/**
	@param tipo 1 para enteros 2 para flotantes
*/
template <typename T1, typename T2>
bool Validacion::validar(T1 entrada, T2 tipo) {
	int contador = 0;
	try {
		for (int i = 0; i < entrada.length(); i++) {
			if (isalpha(entrada[i])) {
				throw 1;
			}
			if (!isdigit(entrada[i]) && tipo == 1) {
				throw 1;
			}
			if (entrada[i] == '.') {
				contador++;
			}
			if ((isdigit(entrada[i]) == 0 && entrada[i] != '.') || (contador>1)) {				
				throw 1;
			}			
		}	
	}
	catch (int e) {
		return true;
	}	
	return false;
}
