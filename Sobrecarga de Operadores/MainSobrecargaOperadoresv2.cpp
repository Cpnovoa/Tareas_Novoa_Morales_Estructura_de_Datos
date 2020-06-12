/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos									  *
* Author:  Ricardo Morales, Christian Novoa		                  *
* NRC: 6396                                                       *
******************************************************************/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
class Pareja {

private:
    int a, b;

public:
    // constructor base
    Pareja() : a(0), b(0) {}

    // constructor parametrizado
    Pareja(const int a,const int b) {
	this->a = a;
	this->b = b;
    }

    // constructor de copia
    Pareja(const Pareja&);

    // operadores miembros
    Pareja& operator + (const Pareja &p);
    Pareja& operator - (const Pareja &p);
    Pareja& operator * (const Pareja &p);
    Pareja& operator / (const Pareja &p);
    Pareja& operator = (const Pareja &p);
    Pareja& operator += (const Pareja &p);
    Pareja& operator ++();
    Pareja& operator --();
    bool    operator ==(const Pareja &p) const;
    bool    operator !=(const Pareja &p) const;
    bool    operator >=(const Pareja &p) const;
    bool    operator <=(const Pareja &p) const;
    bool    operator < (const Pareja &p) const;
    bool    operator > (const Pareja &p) const;

    // operadores no miembros
    friend ostream& operator << (ostream &o,const Pareja &p);
    friend istream& operator >> (istream &o, Pareja &p);
};

// implementacion de los operadores para la clase Pareja
//....................................
Pareja::Pareja(const Pareja &p)
{
    *this=p;
}
//....................................
Pareja& Pareja::operator + (const Pareja &p)
{
    this->a += p.a;
    this->b += p.b;
    return *this;
}
//....................................
Pareja& Pareja::operator - (const Pareja &p)
{
    this->a -= p.a;
    this->b -= p.b;
    return *this;
}
//....................................
Pareja& Pareja::operator * (const Pareja &p)
{
    this->a *= p.a;
    this->b *= p.b;
    return *this;
}
//....................................
Pareja& Pareja::operator / (const Pareja &p)
{
    if (p.a != 0) this->a /= p.a;
    if (p.b != 0) this->b /= p.b;
    return *this;
}
//....................................
Pareja& Pareja::operator = (const Pareja &p)
{
    if(this!=&p){ //Comprueba que no se esté intentanod igualar un objeto a sí mismo
        if (p.a != 0) this->a = p.a;
        if (p.b != 0) this->b = p.b;
    }
    return *this;
}

//....................................
Pareja& Pareja::operator ++ ()
{
    this->a ++;
    this->b ++;
    return *this;
}

//....................................
Pareja& Pareja::operator += (const Pareja &p)
{
    this->a += p.a;
    this->b += p.b;
    return *this;
}

//....................................
Pareja& Pareja::operator -- ()
{
    this->a --;
    this->b --;
    return *this;
}

//....................................
bool Pareja::operator < (const Pareja &p) const
{
    return (this->a < p.a) && (this->b < p.b);
}

//....................................
bool Pareja::operator > (const Pareja &p) const
{
    return (this->a > p.a) && (this->b > p.b);
}

//....................................
bool Pareja::operator == (const Pareja &p) const
{
    return this->a == p.a && this->b == p.b;
}

bool Pareja::operator != (const Pareja &p) const
{
    return this->a != p.a && this->b != p.b;
}

bool Pareja::operator <= (const Pareja &p) const
{
    return this->a <= p.a && this->b <= p.b;
}

bool Pareja::operator >= (const Pareja &p) const
{
    return this->a >= p.a && this->b >= p.b;
}

// implemetaci¢n de operadores no miembros
ostream& operator << (ostream &o,const Pareja &p)
{
    o << "(" << p.a << ", " << p.b << ")";
    return o;
}

istream& operator >> (istream &i, Pareja &p)
{
    cout << "Introducir valores para ( a, b) :";
    i >> p.a >> p.b;
    i.ignore();
    return i;
}
int main(int argc, char** argv) {
    Pareja A(150,  75);
    Pareja B(100, 15);
    Pareja C;
	cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    cout << "........................." << endl;
    C = A + B;
    cout << "A = " << A << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl;
	C = A - B;
    cout << "A = " << A << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl;
 	C = A * B;
    cout << "A = " << A << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl;   
 	C = A / B;
    cout << "A = " << A << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl;   
    C = A / B;
    cout << "A = " << A << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl;
    ++C;
    cout << "C = " << C << endl;
    cout << "A == B " << ( (A==B)?"  True \n": "  False  \n");
    cout << "........................." << endl;
    C = A = B = ++C;
    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl; 
    C = A = B = --C;
    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl;
    ++A;
    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    cout << "C = " << C << endl;
    cout << "A < B " << ( (A<B)?"  True \n": "  False  \n");
    cout << "........................." << endl;
    ++A;
    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    cout << "C = " << C << endl;
    cout << "A > B " << ( (A>B)?"  True \n": "  False  \n");
    cout << "........................." << endl;
    cout << "C = " << C << endl;
    cout << "A != B " << ( (A!=B)?"  True \n": "  False  \n");
    cout << "........................." << endl;
    ++B;
    cout << "C = " << C << endl;
    cout << "A <= B " << ( (A<=B)?"  True \n": "  False  \n");
    cout << "........................." << endl;
    //
    cout << "C = " << C << endl;
    cout << "A >= B " << ( (A>=B)?"  True \n": "  False  \n");
    cout << "........................." << endl;
    //	
    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    A+=B;
    cout << "A+=B = " << A << endl;
    cout << "........................." << endl;
	return 0;
}
