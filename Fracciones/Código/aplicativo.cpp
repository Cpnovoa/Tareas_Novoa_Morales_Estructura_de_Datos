/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos									  *
* Author:  Christian Novoa, Ricardo Morales						  *
* Modified: martes, 26 de mayo de 2020 05:03:27 p. m.			  *
* NRC: 6396                                                       *
******************************************************************/

#include <iostream>
#include <conio.h>
#include <sstream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include "Fraccion.cpp"
#include "Fraccion.h"
#include "Ingreso.h"

using namespace std;



int main()
{
	Fraccion objFraction1, objFraction2, resultado;
	Ingreso ingreso;
	
	int a, b, c, d;
	
	string dim;
	
    do{
    	dim=ingreso.leer("Ingrese a ",1);
    	istringstream (dim) >> a;
    }while(a<0);
	
		
	do{
    	dim=ingreso.leer("Ingrese b ",1);
    	istringstream (dim) >> b;
    }while(b<0);
	
	do{
    	dim=ingreso.leer("Ingrese c ",1);
    	istringstream (dim) >> c;
    }while(c<0);
    
    do{
    	dim=ingreso.leer("Ingrese d ",1);
    	istringstream (dim) >> d;
    }while(d<0);
	
	objFraction1.setNumerador(a);
	objFraction1.setDenominador(b);
	objFraction2.setNumerador(c);
	objFraction2.setDenominador(d);
	
	resultado=resultado.calcular(objFraction1, objFraction2);
	
	cout << resultado.getNumerador() << "/" << resultado.getDenominador()<<endl;
	
	
	system("pause");
	return 0;
}
