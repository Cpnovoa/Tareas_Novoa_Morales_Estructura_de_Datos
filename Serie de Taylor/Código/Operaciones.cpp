/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* AUTORES: Ricardo Morales, Christian Novoa
* NRC: 6396                                                       *
******************************************************************/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctype.h>
#include <string>
#include "Operaciones.h"

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       factorial()
// Purpose:    Implementation of factorial()
// Return:     double
////////////////////////////////////////////////////////////////////////

double Operaciones::factorial(int num)
{
    if(num == 0){
        return 1;
    }
    else {
        return num * factorial(num - 1);
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       potencia()
// Purpose:    Implementation of potencia()
// Return:     double
////////////////////////////////////////////////////////////////////////

template <typename T>
double Operaciones::potencia(T base, int exponente)
{
    double resultado;

    if(exponente == 0) return 1;
    else{
        if(exponente > 0){
            return base * potencia(base, exponente - 1);
        }
        else if(exponente < 0){
            return base * potencia(base, exponente + 1);
        }
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       ingresaDecimales()
// Purpose:    Implementation of ingresaDecimales()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operaciones::ingresaDecimales(char *msg, double *val)
{
    int caracter = 0, cont = 0;
	puts(msg);
	int i=0;
	string valor;
	while((caracter=getch())!=13){
	    if(caracter == 46){
            cont++;
	    }
		if((caracter>=48 && caracter<=57) || (cont<=1 && caracter==46)){
			valor[i++]=caracter;
			printf("%c",caracter);
		}
	}
	*val=stod(valor);
}
