/***********************************************************************
 * Module:  Verify_number.cpp
 * Author:  USUARIO
 * Modified: miércoles, 27 de mayo de 2020 15:07:22
 * Purpose: Declaration of the class Verify_number
 ***********************************************************************/
#define _GLIBCXX_USE_CXX11_ABI 0

#include "Verify_number.h"

#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       is_int_number(string string_1);
// Purpose:    Implementation of is_int_number(string string_1);
// Parameters:
// - string_1
// Return:     bool
////////////////////////////////////////////////////////////////////////
bool is_int_number(string string_1) {
	for (char aux: string_1) {
		if (!isdigit(aux)) {
			return false;
			break;
		}
	}
	return true;
}

////////////////////////////////////////////////////////////////////////
// Name:       check_float_number(string string_1);
// Purpose:    Implementation of check_float_number(string string_1);
// Parameters:
// - string_1
// Return:     bool
////////////////////////////////////////////////////////////////////////
bool is_float_number(string string_1) {
	for (char aux : string_1) {
		if (!isdigit(aux) && aux != '.') {
			return false;
			break;
		}
	}
	return true;
}
