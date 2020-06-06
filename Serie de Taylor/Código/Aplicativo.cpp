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
#include "Serie de Taylor.h"
#include "Serie de Taylor.cpp"

using namespace std;

int main()
{
    Serie_Taylor series;
    double angulo;

    series.ingresaDecimales("Ingrese el ángulo [rad]: ", &angulo);
    cout << "\nseno: " << series.seno(angulo, 50) << endl;
    cout << "coseno: " << series.coseno(angulo, 50) << endl;
    cout << "tangente: " << series.tangente(angulo, 50) << endl;

    system("pause");
    return 0;
}
