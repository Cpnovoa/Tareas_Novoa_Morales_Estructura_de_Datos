#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctype.h>
#include <string>
#include "Operaciones.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestMultiplicacionMatrices
{
	TEST_CLASS(UnitTestMultiplicacionMatrices)
	{

	public:

		
		TEST_METHOD(TestProceso1)
		{
			double radian = 30;
			int i = 10;
			double result;

			double seno(T radian, int i)
			{
				if (3.1416 < radian) {
					while (3.1416 < radian) {
						radian -= 3.1416;
					}
				}
				else if (radian < 0) {
					while (radian < 0) {
						radian += 3.1416;
					}
				}

				if (i == 0) return radian;
				else {
					return (potencia(-1, i)) * (potencia(radian, 2 * i + 1) /
						factorial(2 * i + 1)) + seno(radian, i - 1);
				}
			}
			
			result = seno(radian,i);
			Assert::AreEqual( result, -0.9880316241);
		}

		TEST_METHOD(TestProceso2)
		{
			double radian = 15;
			int i = 10;
			double result;

			double seno(T radian, int i)
			{
				if (3.1416 < radian) {
					while (3.1416 < radian) {
						radian -= 3.1416;
					}
				}
				else if (radian < 0) {
					while (radian < 0) {
						radian += 3.1416;
					}
				}

				if (i == 0) return radian;
				else {
					return (potencia(-1, i)) * (potencia(radian, 2 * i + 1) /
						factorial(2 * i + 1)) + seno(radian, i - 1);
				}
			}

			result = seno(radian, i);
			Assert::AreEqual(result, -0.6502878402);
		}

		TEST_METHOD(TestProceso1)
		{
			double radian = 10;
			int i = 10;
			double result;

			double seno(T radian, int i)
			{
				if (3.1416 < radian) {
					while (3.1416 < radian) {
						radian -= 3.1416;
					}
				}
				else if (radian < 0) {
					while (radian < 0) {
						radian += 3.1416;
					}
				}

				if (i == 0) return radian;
				else {
					return (potencia(-1, i)) * (potencia(radian, 2 * i + 1) /
						factorial(2 * i + 1)) + seno(radian, i - 1);
				}
			}

			result = seno(radian, i);
			Assert::AreEqual(result, -0.5440211109);
		}
		TEST_METHOD(TestProceso4)
		{
			double radian = 30;
			int i = 10;
			double result;
			template <typename T>
			double Serie_Taylor::coseno(T radian, int i)
			{
				if (3.1416 < radian) {
					while (3.1416 < radian) {
						radian -= 3.1416;
					}
				}
				else if (radian < 0) {
					while (radian < 0) {
						radian += 3.1416;
					}
				}

				if (i == 0) return 1;
				else {
					return (potencia(-1, i)) * (potencia(radian, 2 * i) /
						factorial(2 * i)) + coseno(radian, i - 1);
				}
			}

			result = coseno(radian, i);
			Assert::AreEqual(result, 0.1542514499);
		}

		TEST_METHOD(TestProceso5)
		{
			double radian = 15;
			int i = 10;
			double result;
			template <typename T>
			double Serie_Taylor::coseno(T radian, int i)
			{
				if (3.1416 < radian) {
					while (3.1416 < radian) {
						radian -= 3.1416;
					}
				}
				else if (radian < 0) {
					while (radian < 0) {
						radian += 3.1416;
					}
				}

				if (i == 0) return 1;
				else {
					return (potencia(-1, i)) * (potencia(radian, 2 * i) /
						factorial(2 * i)) + coseno(radian, i - 1);
				}
			}

			result = coseno(radian, i);
			Assert::AreEqual(result, -0.7596879129);
		}

		TEST_METHOD(TestProceso6)
		{
			double radian = 10;
			int i = 10;
			double result;
			template <typename T>
			double Serie_Taylor::coseno(T radian, int i)
			{
				if (3.1416 < radian) {
					while (3.1416 < radian) {
						radian -= 3.1416;
					}
				}
				else if (radian < 0) {
					while (radian < 0) {
						radian += 3.1416;
					}
				}

				if (i == 0) return 1;
				else {
					return (potencia(-1, i)) * (potencia(radian, 2 * i) /
						factorial(2 * i)) + coseno(radian, i - 1);
				}
			}

			result = coseno(radian, i);
			Assert::AreEqual(result, -0.7596879129);
		}

		TEST_METHOD(TestProceso7)
		{
			double radian = 30;
			int i = 10;
			double result;

			template <typename T>
			double Serie_Taylor::tangente(T radian, int i)
			{
				double sen, cosen;
				sen = seno(radian, i);
				cosen = coseno(radian, i);
				if (cosen == 0.00) {
					cout << "La tangente no existe" << endl;
				}
				else {
					return sen / cosen;
				}
			}

			result = tangente(radian, i);
			Assert::AreEqual(result, 0.1542514499);
		}
		TEST_METHOD(TestProceso8)
		{
			double radian = 15;
			int i = 10;
			double result;

			template <typename T>
			double Serie_Taylor::tangente(T radian, int i)
			{
				double sen, cosen;
				sen = seno(radian, i);
				cosen = coseno(radian, i);
				if (cosen == 0.00) {
					cout << "La tangente no existe" << endl;
				}
				else {
					return sen / cosen;
				}
			}

			result = tangente(radian, i);
			Assert::AreEqual(result, -0.8559934009);
		}

		TEST_METHOD(TestProceso9)
		{
			double radian = 10;
			int i = 10;
			double result;

			template <typename T>
			double Serie_Taylor::tangente(T radian, int i)
			{
				double sen, cosen;
				sen = seno(radian, i);
				cosen = coseno(radian, i);
				if (cosen == 0.00) {
					cout << "La tangente no existe" << endl;
				}
				else {
					return sen / cosen;
				}
			}

			result = tangente(radian, i);
			Assert::AreEqual(result, 0.6483608275);
		}
		TEST_METHOD(TestProceso10)
		{
			double radian = 35;
			int i = 10;
			double result;

			template <typename T>
			double Serie_Taylor::tangente(T radian, int i)
			{
				double sen, cosen;
				sen = seno(radian, i);
				cosen = coseno(radian, i);
				if (cosen == 0.00) {
					cout << "La tangente no existe" << endl;
				}
				else {
					return sen / cosen;
				}
			}

			result = tangente(radian, i);
			Assert::AreEqual(result, 0.4738147204);
		}
	};
}
