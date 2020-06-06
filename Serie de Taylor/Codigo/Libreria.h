#ifndef LIBRERIA_H_INCLUDED
#define LIBRERIA_H_INCLUDED

#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
template <class T>
double seno(T valor);
template<typename T>
double serieTaylorSeno(T valor, int valorprecision);
template <typename T>
double _check_angle(T base) {
	if (3.1416 < base) {
		while (3.1416 < base) {
			base -= 3.1416;
		}
	}
	else if (base < 0) {
		while (base < 0) {
			base += 3.1416;
		}
	}
	return base;
}
double ingresoDatos()
{
	printf("\t\t Programa para sacar seno, coseno y tangente mediante Taylor\n");
	printf("\t\t El programa obtendra el valor seno, coseno y tangente usando taylor y recursividad.\n");
	printf("\t\t Intrucciones\n");
	printf("\t\t 1-ingrese el angulo que desea en radianes\n");
	printf("\t\t 2-presione ENTER\n");

	double x;
	printf("Ingrese su angulo por favor:");
	scanf("%lf", &x);
	return x;
}
template <typename T>
double seno(T valor) {
	try {
		if (valor <= 0 || valor <= valor) {
			throw valor;
		}
	}
	catch (T e) {
		valor = -(_check_angle(valor));
	}

	return valor;
}


template <typename T>
double cos(T valor) {
	try {
		if (valor <= 0 || 3.1416 <= valor) {
			throw valor;
		}
	}
	catch (T e) {
		valor = _check_angle(valor);

		if (0 <= (valor) || (valor) <= 3.1416 / 2) {
			return serieTaylorCoseno(valor, 12);
		}
	}
	return serieTaylorCoseno(valor, 10);
}
int factorial(int valor)
{
	if (valor <= 1) {
		return 1;
	}
	else {
		return valor * factorial(valor - 1);
	}
}
void imprimirDatos(double dato,double dato1)
{
	printf("El seno de el valor ingresado es :%lf\n", dato);
	printf("El coseno de el valor ingresado es :%lf\n", dato1);
}
template<typename T>
double serieTaylorSeno(T valor, int valorprecision)
{
	double j;

	if (valorprecision <= 1) {
		return -valor;
	}
	else {
		j = -serieTaylorSeno(valor, valorprecision - 2) - pow(valor, valorprecision) / factorial(valorprecision);
		//imprimirDatos(j);
		return j;

	}

}
template<typename T>
double serieTaylorCoseno(T valor, int valorpresicion)
{
	if (valorpresicion <= 0) {
		return -1;
	}
	else {
		return pow(valor, valorpresicion) / factorial(valorpresicion) - serieTaylorCoseno(valor, valorpresicion - 2);
	}
}
double ajusteDePrecision(double valor)
{
	if (valor >= -0.001 && valor <= 0.001)
	{
		return 0;
	}
	else
	{
		return valor;
	}
}
void valorTangente(double seno, double coseno)
{
	double tangente;
	try {
		if (coseno == 0.00)
			throw coseno;
		else
		{
			tangente=seno / coseno;
			printf("la tangente es %lf", tangente);
		}
	}
	catch(double e)
	{
		printf("no existe la tangente");
	}
}



#endif // LIBRERIA_H_INCLUDED
