/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                      *
******************************************************************/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class GetNumberData {

public:
	string read(string);

public:
	bool validate(string);

};

string GetNumberData::read(string order) {

	string data;

	do {
		cout << order;
		getline(cin, data);
		if (!validate(data)) {
			cout << "Datos ingresados incorrectos, intente de nuevo" << endl;
		}
	} while (!validate(data));

	return data;
}

/**
	@param type e para enteros, type f para flotantes
*/
bool GetNumberData::validate(string data) {

	int contp = 0;

	try {
		if (data == "") throw 1;

		for (int i = 0; i < data.length(); i++)
		{
			if (!isdigit(data[i]) && data[i] != '.') throw 1;
			if (isalpha(data[i])) throw 1;
			if (!isalpha(data[i]) && (!isdigit(data[i]) && data[i] != '.')) throw 1;
			if (data[i] == '.' ) contp++;
			if ((contp > 1)) throw 1;
		}
	}
	catch (int e)
	{
		return false;
	}
	return true;
}
