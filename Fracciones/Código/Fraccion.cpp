/***********************************************************************
 * Module:  Fraccion.cpp
 * Author:  Ricardo Morales, Christian Novoa
 * Modified: jueves, 18 de junio de 2020 22:15:24
 * Purpose: Implementation of the class Fraccion
 ***********************************************************************/

#include "Fraccion.h"

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getNumerador()
// Purpose:    Implementation of Fraccion::getNumerador()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fraccion::getNumerador(void)
{
   return numerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setNumerador(int newNumerador)
// Purpose:    Implementation of Fraccion::setNumerador()
// Parameters:
// - newNumerador
// Return:     void
////////////////////////////////////////////////////////////////////////
template <typename T1>
void Fraccion::setNumerador(T1 newNumerador)
{
   numerador = newNumerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::getDenominador()
// Purpose:    Implementation of Fraccion::getDenominador()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Fraccion::getDenominador(void)
{
   return denominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::setDenominador(int newDenominador)
// Purpose:    Implementation of Fraccion::setDenominador()
// Parameters:
// - newDenominador
// Return:     void
////////////////////////////////////////////////////////////////////////
template <typename T2>
void Fraccion::setDenominador(T2 newDenominador)
{
   denominador = newDenominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::Fraccion()
// Purpose:    Implementation of Fraccion::Fraccion()
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::Fraccion()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::~Fraccion()
// Purpose:    Implementation of Fraccion::~Fraccion()
// Return:     
////////////////////////////////////////////////////////////////////////

Fraccion::~Fraccion()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Fraccion::calcular(Fraccion fraccion1, Fraccion fraccion2)
// Purpose:    Implementation of Fraccion::calcular()
// Parameters:
// - fraccion1
// - fraccion2
// Return:     Fraccion
////////////////////////////////////////////////////////////////////////


Fraccion Fraccion::calcular(Fraccion fraccion1, Fraccion fraccion2)
{
   Fraccion aux;
   int result;
   
   result = (fraccion1.getNumerador()*fraccion2.getDenominador())+(fraccion1.getDenominador()*fraccion2.getNumerador());
   
   aux.setNumerador(result);
   
   result = (fraccion1.getDenominador()*fraccion2.getDenominador() );
   
   aux.setDenominador(result);
   
   return aux;  
   
   
}
