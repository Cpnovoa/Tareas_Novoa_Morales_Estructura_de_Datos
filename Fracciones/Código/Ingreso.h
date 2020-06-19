/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos
* Author:  Ricardo Morales, Christian Novoa                                    *
* NRC: 6396                                                       *
******************************************************************/
#include <iostream>
#include "Validacion.h"

using namespace std;

class Ingreso {

public:
	template <typename T1, typename T2>
	string leer(T1,T2);
};
template <typename T1, typename T2>
string Ingreso::leer(T1 mensage,T2 tipo) {
	Validacion validacion;
	string entrada;
	cout << mensage << endl;
	cin >> entrada;
	while (validacion.validar(entrada, tipo)) {
		cout << "Valor no valido reingrese" << endl;
		cin >> entrada;
	}
	return entrada;

}
