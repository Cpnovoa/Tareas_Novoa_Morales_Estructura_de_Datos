#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		//UnitTest de la función calcular 
		TEST_METHOD(calcular)
		{
			//
			int numerador1 = 1, denominador1 = 2;
			int numerador2 = 3, denominador2 = 4;

			//
			int result, numerador, denominador;
			result = (numerador1 * denominador2) + (denominador1 * numerador2);
			numerador = result;
			result = denominador1 * denominador2;
			denominador = result;
			//
			int resultNumerador = 10, resultDenominador = 8;
			Assert::AreEqual(resultNumerador, numerador);
			Assert::AreEqual(resultDenominador, denominador);
		}
		TEST_METHOD(calcular2)
		{
			//
			int numerador1 = 2, denominador1 = 4;
			int numerador2 = 6, denominador2 = 8;

			//
			int result, numerador, denominador;
			result = (numerador1 * denominador2) + (denominador1 * numerador2);
			numerador = result;
			result = denominador1 * denominador2;
			denominador = result;
			//
			int resultNumerador = 40, resultDenominador = 32;
			Assert::AreEqual(resultNumerador, numerador);
			Assert::AreEqual(resultDenominador, denominador);
		}
		TEST_METHOD(calcular3)
		{
			//
			int numerador1 = 3, denominador1 = 6;
			int numerador2 = 9, denominador2 = 12;

			//
			int result, numerador, denominador;
			result = (numerador1 * denominador2) + (denominador1 * numerador2);
			numerador = result;
			result = denominador1 * denominador2;
			denominador = result;
			//
			int resultNumerador = 90, resultDenominador = 72;
			Assert::AreEqual(resultNumerador, numerador);
			Assert::AreEqual(resultDenominador, denominador);
		}
		TEST_METHOD(calcular4)
		{
			//
			int numerador1 = 12, denominador1 = 3;
			int numerador2 = 7, denominador2 = 8;

			//
			int result, numerador, denominador;
			result = (numerador1 * denominador2) + (denominador1 * numerador2);
			numerador = result;
			result = denominador1 * denominador2;
			denominador = result;
			//
			int resultNumerador = 117, resultDenominador = 24;
			Assert::AreEqual(resultNumerador, numerador);
			Assert::AreEqual(resultDenominador, denominador);
		}
		TEST_METHOD(calcular5)
		{
			//
			int numerador1 = 5, denominador1 = 4;
			int numerador2 = 9, denominador2 = 3;

			//
			int result, numerador, denominador;
			result = (numerador1 * denominador2) + (denominador1 * numerador2);
			numerador = result;
			result = denominador1 * denominador2;
			denominador = result;
			//
			int resultNumerador = 51, resultDenominador = 12;
			Assert::AreEqual(resultNumerador, numerador);
			Assert::AreEqual(resultDenominador, denominador);
		}
		TEST_METHOD(calcular6)
		{
			//
			int numerador1 = 14, denominador1 = 25;
			int numerador2 = 45, denominador2 = 12;

			//
			int result, numerador, denominador;
			result = (numerador1 * denominador2) + (denominador1 * numerador2);
			numerador = result;
			result = denominador1 * denominador2;
			denominador = result;
			//
			int resultNumerador = 1293, resultDenominador = 300;
			Assert::AreEqual(resultNumerador, numerador);
			Assert::AreEqual(resultDenominador, denominador);
		}
		TEST_METHOD(calcular7)
		{
			//
			int numerador1 = 23, denominador1 = 4;
			int numerador2 = 21, denominador2 = 5;

			//
			int result, numerador, denominador;
			result = (numerador1 * denominador2) + (denominador1 * numerador2);
			numerador = result;
			result = denominador1 * denominador2;
			denominador = result;
			//
			int resultNumerador = 199, resultDenominador = 20;
			Assert::AreEqual(resultNumerador, numerador);
			Assert::AreEqual(resultDenominador, denominador);
		}
		TEST_METHOD(calcular8)
		{
			//
			int numerador1 = 10, denominador1 = 20;
			int numerador2 = 30, denominador2 = 40;

			//
			int result, numerador, denominador;
			result = (numerador1 * denominador2) + (denominador1 * numerador2);
			numerador = result;
			result = denominador1 * denominador2;
			denominador = result;
			//
			int resultNumerador = 1000, resultDenominador = 800;
			Assert::AreEqual(resultNumerador, numerador);
			Assert::AreEqual(resultDenominador, denominador);
		}
		TEST_METHOD(calcular9)
		{
			//
			int numerador1 = 69, denominador1 = 54;
			int numerador2 = 74, denominador2 = 23;

			//
			int result, numerador, denominador;
			result = (numerador1 * denominador2) + (denominador1 * numerador2);
			numerador = result;
			result = denominador1 * denominador2;
			denominador = result;
			//
			int resultNumerador = 5583, resultDenominador = 1242;
			Assert::AreEqual(resultNumerador, numerador);
			Assert::AreEqual(resultDenominador, denominador);
		}
		TEST_METHOD(calcular10)
		{
			//
			int numerador1 = 1, denominador1 = 47;
			int numerador2 = 2, denominador2 = 69;

			//
			int result, numerador, denominador;
			result = (numerador1 * denominador2) + (denominador1 * numerador2);
			numerador = result;
			result = denominador1 * denominador2;
			denominador = result;
			//
			int resultNumerador = 163, resultDenominador = 3243;
			Assert::AreEqual(resultNumerador, numerador);
			Assert::AreEqual(resultDenominador, denominador);
		}

	};
}
