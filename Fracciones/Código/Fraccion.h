/***********************************************************************
 * Module:  Fraccion.h
 * Author:  Ricardo Morales, Christian Novoa
 * Modified: jueves, 18 de junio de 2020 22:15:24
 * Purpose: Declaration of the class Fraccion
 ***********************************************************************/

#if !defined(__Fraccion_Fraccion_h)
#define __Fraccion_Fraccion_h

class Fraccion
{
public:
	
   int getNumerador(void);
   
   template <typename T1>
   void setNumerador(T1 newNumerador);
   int getDenominador(void);
   
   template <typename T2>
   void setDenominador(T2 newDenominador);
   
   Fraccion();
   ~Fraccion();
   
   Fraccion calcular(Fraccion fraccion1, Fraccion fraccion2);

protected:
private:
   int numerador;
   int denominador;


};

#endif
