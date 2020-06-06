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
#include "Serie de Taylor.h"

using namespace std;

template <typename T>
double Serie_Taylor::seno(T radian, int i)
{
    if (3.1416 < radian) {
		while (3.1416 < radian) {
			radian -= 3.1416;
		}
	}
	else if (radian < 0) {
		while (radian < 0) {
			radian += 3.1416;
		}
	}

    if(i == 0) return radian;
    else{
        return (potencia(-1, i)) * (potencia(radian, 2 * i + 1)/
                factorial(2 * i + 1)) + seno(radian, i - 1);
    }
}

template <typename T>
double Serie_Taylor::coseno(T radian, int i)
{
    if (3.1416 < radian) {
		while (3.1416 < radian) {
			radian -= 3.1416;
		}
	}
	else if (radian < 0) {
		while (radian < 0) {
			radian += 3.1416;
		}
	}

    if(i == 0) return 1;
    else{
        return (potencia(-1, i)) * (potencia(radian, 2 * i)/
                factorial(2 * i)) + coseno(radian, i - 1);
    }
}

template <typename T>
double Serie_Taylor::tangente(T radian, int i)
{
    double sen, cosen;
    sen = seno(radian, i);
    cosen = coseno(radian, i);
    if (cosen == 0.00){
        cout << "La tangente no existe" << endl;
    }
    else{
        return sen/cosen;
    }
}

double Serie_Taylor::factorial(int num)
{
    if(num == 0){
        return 1;
    }
    else {
        return num * factorial(num - 1);
    }
}

template <typename T>
double Serie_Taylor::potencia(T base, int exponente)
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

void Serie_Taylor::ingresaDecimales(char *msg, double *val)
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
