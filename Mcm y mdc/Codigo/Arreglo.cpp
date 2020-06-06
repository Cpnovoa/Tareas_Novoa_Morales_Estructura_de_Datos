/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos									  *
* Author:  Ricardo Morales, Christian Novoa		                  *
* NRC: 6396                                                       *
******************************************************************/

#include "Arreglo.h"

////////////////////////////////////////////////////////////////////////
// Name:       encerarArray()
// Purpose:    Implementation of encerarArray()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Arreglo::encerarArray(int *vect, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        *(vect+i) = 0;
    }
}

////////////////////////////////////////////////////////////////////////
// Name:       llenarArray()
// Purpose:    Implementation of llenarArray()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Arreglo::llenarArray(string orden, int *vect, int tam)
{
    int i, check = 0, val;
	string valor;
	for (i = 0; i < tam; i++)
	{
        do{
            cout << orden << i + 1 << endl;
            getline(cin, valor);
            try{
                if (valor == ""){
                        cout << "No ha ingresado datos!" << endl;
                        throw 1;
                    }
                for(int j = 0; j < valor.length(); j++){
                    if (!isdigit(valor[j])){
                        cout << "Dato incorrecto, ingrese de nuevo" << endl;
                        throw 1;
                        break;
                    }
                }
            }
            catch (int e){
                check = 1;
            }
        } while (check == 1);
        val = stoi(valor);
        *(vect + i) = val;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       llenarAleatorioArray()
// Purpose:    Implementation of llenarAleatorioArray()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Arreglo::llenarAleatorioArray(int *vect, int tam)
{
    srand(time(NULL));
    int i, valor;
	for (i = 0; i < tam; i++)
	{
        valor = 1 + rand() % (5 - 1);
        *(vect + i) = valor;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       imprimirArray()
// Purpose:    Implementation of imprimirArray()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Arreglo::imprimirArray(int *vect, int tam)
{
    for (int i = 0; i < tam; i++)
	{
		cout << *(vect + i) << ",";
	}
	cout << "\n";
}

////////////////////////////////////////////////////////////////////////
// Name:       ingresaNumericos()
// Purpose:    Implementation of ingresaNumericos()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Arreglo::ingresaNumericos(char *msg, int *val){
	int caracter = 0;
	puts(msg);
	int i=0;
	char valor[5];
	while((caracter=getch())!=13){
		if(caracter>=48 && caracter<=57){
			valor[i++]=caracter;
			printf("%c",caracter);
		}
	}
	*val=atoi(valor);
}
