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
#include "Validaciones.h"

bool Validar::validarNumeroString(string datoString)
{
    int contp = 0;

    try{
        if (datoString == "") throw 1;
        for (int i = 0; i < datoString.length(); i++){
			if (!isdigit(datoString[i]) && datoString[i] != '.' && datoString[i] != '-') throw 1;
			if (isalpha(datoString[i])) throw 1;
			if (datoString[i] == '.' ) contp++;
			if ((contp > 1)) throw 1;
		}
    }
    catch(int e)
    {
        return false;
    }
    return true;
}
