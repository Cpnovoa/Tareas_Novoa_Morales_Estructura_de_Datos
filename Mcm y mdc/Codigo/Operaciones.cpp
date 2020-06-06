/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos									  *
* Author:  Ricardo Morales, Christian Novoa		                  *
* NRC: 6396                                                       *
******************************************************************/

#include "Operaciones.h"

////////////////////////////////////////////////////////////////////////
// Name:       minimoComunMultiplo()
// Purpose:    Implementation of minimoComunMultiplo()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operaciones::minimoComunMultiplo(int *vect, int tam)
{
	int i,len;
    int intMcm = 1;
	i = 0;
	len = arregloMax(vect,tam);
	for(int i = 2; i <= len; i++){
		while( verificarDivisibilidad(vect,tam,i) ){
			intMcm *= i;
		}
	}
	cout << "El minimo comun multiplo es: " << intMcm << endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       verificarDivisibilidad()
// Purpose:    Implementation of verificarDivisibilidad()
// Return:     bool
////////////////////////////////////////////////////////////////////////
bool Operaciones::verificarDivisibilidad(int *vect, int tam, int indice){
	bool divisible = false;
	for(int i = 0; i < tam; i++){
		if( *(vect+i) % indice == 0){
			divisible = true;
			*(vect+i) = *(vect+i)/tam;
		}
	}
	return divisible;
}

////////////////////////////////////////////////////////////////////////
// Name:       arregloMax()
// Purpose:    Implementation of arregloMax()
// Return:     int
////////////////////////////////////////////////////////////////////////
int Operaciones::arregloMax(int *vect, int tam){
	int maxi = -1;
	if( tam > 1 ){
		maxi = *(vect+0);
		for(int i = 1; i < tam; i++){
			if ( maxi < *(vect+i) )
				maxi = *(vect+i);
		}
	}
	return maxi;
}

////////////////////////////////////////////////////////////////////////
// Name:       maximoComumDenom()
// Purpose:    Implementation of maximoComumDenom()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Operaciones::maximoComumDenom(int *vect, int tam)
{
    int mcd, res, aux;

    for (int i = 0; i < tam; i++)
    {
        aux = *(vect + i);

        if (i == 0)
        {
            mcd = aux;
        }

        do{
            res = mcd % aux;
            mcd = aux;
            aux = res;
        }while (res != 0);
     }
     cout << "El maximo comun denominador es: " << mcd << endl;
}

