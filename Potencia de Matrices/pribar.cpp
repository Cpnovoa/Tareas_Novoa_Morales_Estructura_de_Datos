#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <string>
#include <istream>
#include <string.h>

using namespace std;

template <typename Tipo1, typename Tipo2>
void operacionSuma(Tipo1 valor1, Tipo2 valor2)
{
    cout << "el resultado es: " << valor1 + valor2 << endl;
}

template <typename Tipo1, typename Tipo2>
void operacionResta(Tipo1 valor1, Tipo2 valor2)
{
    cout << "el resultado es: " << valor1 - valor2 << endl;
}

template <typename Tipo1, typename Tipo2>
void operacionDivision(Tipo1 valor1, Tipo2 valor2)
{
    cout << "el resultado es: " << valor1 + valor2 << endl;
}

template <typename Tipo1, typename Tipo2>
void operacionMultiplicacion(Tipo1 valor1, Tipo2 valor2)
{
    cout << "el resultado es: " << valor1 + valor2 << endl;
}

bool validacionDigito(string &valor) {

    int i;
    int auxinicio = 0;
    int auxpunto = 0;
    int auxvalor = 0;

    if (valor.length() == 0)
        return 0;

    for (i = auxinicio; i < valor.length(); i++)
    {
        if (valor[i] == '.')
        {
            auxpunto++;
        }

    }
    for (i = auxinicio; i < valor.length(); i++)
    {
        if ((! isdigit(valor[i])) && auxpunto != 1) {
            return 0;
        }
    }
    return 1;
}

int validacionDatos(string &valor)
{
    int auxDecimales = 0;
    bool verificacion = false;

    for (int i = 0; i < valor.length(); i++)
    {
        if (valor[i] == '.')
        {
            verificacion = true;
        }

        if (verificacion == true)
        {
            auxDecimales++;
        }
    }

    if (auxDecimales <= 2 && auxDecimales > 0) //float
    {
        return 1;
    }
    else if (auxDecimales > 2) //double
    {
        return 2;
    }
    else if (auxDecimales == 0)
    {
        return 3;
    }
}


void ingresoDatos(string &valor1, string &valor2)
{
    cout << "ingrese el valor 1: " << endl;
    getline(cin, valor1);
    cout << "ingrese el valor 2: " << endl;
    getline(cin, valor2);
}

bool tipoIntValido(string);

int main()
{
    string valor1 = "";
    string valor2 = "";
    float valor1f = 0;
    double valor1d = 0;
    int valor1i = 0;
    float valor2f = 0;
    double valor2d = 0;
    int valor2i = 0;


    int bandera1 = 0;
    int bandera = 0;
    int bandera2 = 0;

    bool esValidoValor1 = false;
    bool esValidoValor2 = false;

    ingresoDatos( valor1, valor2);

    esValidoValor1 = validacionDigito(valor1);
    esValidoValor2 = validacionDigito(valor2);

    if (esValidoValor1 == true && esValidoValor2 == true)
    {
        //para valor1
        bandera = validacionDatos(valor1);
        if (bandera == 1)
        {
            valor1f = stof(valor1);

        }
        else if (bandera == 2)
        {
            valor1d = stod(valor1);
        }
        else if(bandera ==3)
        {
            valor1i = stoi(valor1);
        }

        //para valor 2
        bandera1 = validacionDatos(valor2);
        if (bandera1 == 1)
        {
            valor2f = stof(valor2);
        }
        else if (bandera1 == 2)
        {
            valor2d = stod(valor2);
        }
        else if (bandera1 == 3)
        {
            valor2i = stoi(valor2);
        }



        if (valor1f != 0 && valor2f != 0) operacionSuma(valor1f, valor2f);
        else if (valor1f != 0 && valor2d != 0) operacionSuma(valor1f, valor2d);
        else if (valor1f != 0 && valor2i != 0) operacionSuma(valor1f, valor2i);
        else if (valor1d != 0 && valor2f != 0) operacionSuma(valor1d, valor2f);
        else if (valor1d != 0 && valor2d != 0) operacionSuma(valor1d, valor2d);
        else if (valor1d != 0 && valor2i != 0) operacionSuma(valor1d, valor2i);
        else if (valor1i != 0 && valor2f != 0) operacionSuma(valor1i, valor2f);
        else if (valor1i != 0 && valor2d != 0) operacionSuma(valor1i, valor2d);
        else if (valor1i != 0 && valor2i != 0) operacionSuma(valor1i, valor2i);



    }
    else if (esValidoValor1 == false && esValidoValor2 == true)
    {
        cout << "el valor 1: " << valor1 << " no se admite para la operación" << endl;
    }

    else if (esValidoValor1 == true && esValidoValor2 == false)
    {
        cout << "el valor 2: " << valor2 << " no se admite para la operación" << endl;
    }

    else
    {
       cout << "el valor 1: " << valor1 << " y el valor 2: " << valor2 << " no se admite para la operación" << endl;

    }

    return 0;
}
