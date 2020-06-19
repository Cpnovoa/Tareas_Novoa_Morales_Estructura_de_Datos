#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <conio.h>
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		int** crearMatriz(int tam)
		{
			int** matrizAux, j;
			matrizAux = (int**)malloc(tam * sizeof(int*));
			for (j = 0; j < tam; j++)
			{
				*(matrizAux + j) = (int*)malloc(tam * sizeof(int));
			}
			return matrizAux;
		}

		void copiarMatriz(int** matriz2, int** matriz1, int tam)
		{
			for (int i = 0; i < tam; i++)
			{
				for (int j = 0; j < tam; j++)
				{
					*(*(matriz1 + i) + j) = *(*(matriz2 + i) + j);
				}
			}
		}

		void encerar(int** matriz, int tam)
		{
			int i, j;
			for (i = 0; i < tam; i++)
			{
				for (j = 0; j < tam; j++)
				{
					*(*(matriz + i) + j) = 0;
				}
			}
		}

		void potenciaMatriz(int** matriz, int** matrizResult, int tam, int num)
		{
			int i, j, h, k;
			int** matrizAux; int** matrizAux2;

			matrizAux = crearMatriz(tam);
			encerar(matrizAux, tam);
			matrizAux2 = crearMatriz(tam);
			encerar(matrizAux2, tam);

			for (k = 0; k < num - 1; k++)
			{
				for (i = 0; i < tam; i++)
				{
					for (j = 0; j < tam; j++)
					{
						for (h = 0; h < tam; h++)
						{
							if (k == 0)
							{
								*(*(matrizAux + i) + j) += *(*(matriz + i) + h) * *(*(matriz + h) + j);
							}
							else
							{
								*(*(matrizAux + j) + i) += *(*(matriz + h) + i) * *(*(matrizAux2 + j) + h);
							}
						}
					}
				}
				copiarMatriz(matrizAux, matrizAux2, tam);
				encerar(matrizAux, tam);
			}
			if (num == 1)
			{
				copiarMatriz(matriz, matrizResult, tam);
			}
			else
			{
				copiarMatriz(matrizAux2, matrizResult, tam);
			}

		}
		
		TEST_METHOD(PotenciaMatriz1)
		{
			//
			int tam = 3;
			int** matriz, ** matrizResult;
			int num = 3, resultado, resultEsperado; // num es el exponente

			matriz = crearMatriz(tam);
			matrizResult = crearMatriz(tam);
			encerar(matriz, tam);
			encerar(matrizResult, tam);

			*(*(matriz + 0) + 0) = 1;
			*(*(matriz + 0) + 1) = 2;
			*(*(matriz + 0) + 2) = 3;
			*(*(matriz + 1) + 0) = 4;
			*(*(matriz + 1) + 1) = 5;
			*(*(matriz + 1) + 2) = 6;
			*(*(matriz + 2) + 0) = 7;
			*(*(matriz + 2) + 1) = 8;
			*(*(matriz + 2) + 2) = 9;

			//

			potenciaMatriz(matriz, matrizResult, tam, num);

			//
			resultado = *(*(matrizResult + 0) + 0);
			resultEsperado = 468;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 1);
			resultEsperado = 576;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 2);
			resultEsperado = 684;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 0);
			resultEsperado = 1062;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 1);
			resultEsperado = 1305;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 2);
			resultEsperado = 1548;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 0);
			resultEsperado = 1656;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 1);
			resultEsperado = 2034;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 2);
			resultEsperado = 2412;
			Assert::AreEqual(resultEsperado, resultado);
		}

		TEST_METHOD(PotenciaMatriz2)
		{
			//
			int tam = 3;
			int** matriz, ** matrizResult;
			int num = 3, resultado, resultEsperado; // num es el exponente

			matriz = crearMatriz(tam);
			matrizResult = crearMatriz(tam);
			encerar(matriz, tam);
			encerar(matrizResult, tam);

			*(*(matriz + 0) + 0) = 3;
			*(*(matriz + 0) + 1) = 2;
			*(*(matriz + 0) + 2) = 1;
			*(*(matriz + 1) + 0) = 6;
			*(*(matriz + 1) + 1) = 5;
			*(*(matriz + 1) + 2) = 4;
			*(*(matriz + 2) + 0) = 9;
			*(*(matriz + 2) + 1) = 8;
			*(*(matriz + 2) + 2) = 7;

			//

			potenciaMatriz(matriz, matrizResult, tam, num);

			//
			resultado = *(*(matrizResult + 0) + 0);
			resultEsperado = 396;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 1);
			resultEsperado = 324;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 2);
			resultEsperado = 252;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 0);
			resultEsperado = 1152;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 1);
			resultEsperado = 945;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 2);
			resultEsperado = 738;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 0);
			resultEsperado = 1908;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 1);
			resultEsperado = 1566;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 2);
			resultEsperado = 1224;
			Assert::AreEqual(resultEsperado, resultado);
		}

		TEST_METHOD(PotenciaMatriz3)
		{
			//
			int tam = 3;
			int** matriz, ** matrizResult;
			int num = 2, resultado, resultEsperado; // num es el exponente

			matriz = crearMatriz(tam);
			matrizResult = crearMatriz(tam);
			encerar(matriz, tam);
			encerar(matrizResult, tam);

			*(*(matriz + 0) + 0) = 1;
			*(*(matriz + 0) + 1) = 2;
			*(*(matriz + 0) + 2) = 3;
			*(*(matriz + 1) + 0) = 4;
			*(*(matriz + 1) + 1) = 5;
			*(*(matriz + 1) + 2) = 6;
			*(*(matriz + 2) + 0) = 7;
			*(*(matriz + 2) + 1) = 8;
			*(*(matriz + 2) + 2) = 9;

			//

			potenciaMatriz(matriz, matrizResult, tam, num);

			//
			resultado = *(*(matrizResult + 0) + 0);
			resultEsperado = 30;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 1);
			resultEsperado = 36;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 2);
			resultEsperado = 42;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 0);
			resultEsperado = 66;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 1);
			resultEsperado = 81;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 2);
			resultEsperado = 96;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 0);
			resultEsperado = 102;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 1);
			resultEsperado = 126;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 2);
			resultEsperado = 150;
			Assert::AreEqual(resultEsperado, resultado);
		}

		TEST_METHOD(PotenciaMatriz4)
		{
			//
			int tam = 3;
			int** matriz, ** matrizResult;
			int num = 4, resultado, resultEsperado; // num es el exponente

			matriz = crearMatriz(tam);
			matrizResult = crearMatriz(tam);
			encerar(matriz, tam);
			encerar(matrizResult, tam);

			*(*(matriz + 0) + 0) = 1;
			*(*(matriz + 0) + 1) = 2;
			*(*(matriz + 0) + 2) = 3;
			*(*(matriz + 1) + 0) = 4;
			*(*(matriz + 1) + 1) = 5;
			*(*(matriz + 1) + 2) = 6;
			*(*(matriz + 2) + 0) = 7;
			*(*(matriz + 2) + 1) = 8;
			*(*(matriz + 2) + 2) = 9;

			//

			potenciaMatriz(matriz, matrizResult, tam, num);

			//
			resultado = *(*(matrizResult + 0) + 0);
			resultEsperado = 7560;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 1);
			resultEsperado = 9288;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 2);
			resultEsperado = 11016;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 0);
			resultEsperado = 17118;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 1);
			resultEsperado = 21033;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 2);
			resultEsperado = 24948;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 0);
			resultEsperado = 26676;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 1);
			resultEsperado = 32778;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 2);
			resultEsperado = 38880;
			Assert::AreEqual(resultEsperado, resultado);
		}

		TEST_METHOD(PotenciaMatriz5)
		{
			//
			int tam = 3;
			int** matriz, ** matrizResult;
			int num = 2, resultado, resultEsperado; // num es el exponente

			matriz = crearMatriz(tam);
			matrizResult = crearMatriz(tam);
			encerar(matriz, tam);
			encerar(matrizResult, tam);

			*(*(matriz + 0) + 0) = 3;
			*(*(matriz + 0) + 1) = 2;
			*(*(matriz + 0) + 2) = 1;
			*(*(matriz + 1) + 0) = 6;
			*(*(matriz + 1) + 1) = 5;
			*(*(matriz + 1) + 2) = 4;
			*(*(matriz + 2) + 0) = 9;
			*(*(matriz + 2) + 1) = 8;
			*(*(matriz + 2) + 2) = 7;

			//

			potenciaMatriz(matriz, matrizResult, tam, num);

			//
			resultado = *(*(matrizResult + 0) + 0);
			resultEsperado = 30;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 1);
			resultEsperado = 24;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 2);
			resultEsperado = 18;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 0);
			resultEsperado = 84;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 1);
			resultEsperado = 69;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 2);
			resultEsperado = 54;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 0);
			resultEsperado = 138;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 1);
			resultEsperado = 114;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 2);
			resultEsperado = 90;
			Assert::AreEqual(resultEsperado, resultado);
		}

		TEST_METHOD(PotenciaMatriz6)
		{
			//
			int tam = 3;
			int** matriz, ** matrizResult;
			int num = 4, resultado, resultEsperado; // num es el exponente

			matriz = crearMatriz(tam);
			matrizResult = crearMatriz(tam);
			encerar(matriz, tam);
			encerar(matrizResult, tam);

			*(*(matriz + 0) + 0) = 3;
			*(*(matriz + 0) + 1) = 2;
			*(*(matriz + 0) + 2) = 1;
			*(*(matriz + 1) + 0) = 6;
			*(*(matriz + 1) + 1) = 5;
			*(*(matriz + 1) + 2) = 4;
			*(*(matriz + 2) + 0) = 9;
			*(*(matriz + 2) + 1) = 8;
			*(*(matriz + 2) + 2) = 7;

			//

			potenciaMatriz(matriz, matrizResult, tam, num);

			//
			resultado = *(*(matrizResult + 0) + 0);
			resultEsperado = 5400;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 1);
			resultEsperado = 4428;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 2);
			resultEsperado = 3456;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 0);
			resultEsperado = 15768;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 1);
			resultEsperado = 12933;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 2);
			resultEsperado = 10098;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 0);
			resultEsperado = 26136;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 1);
			resultEsperado = 21438;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 2);
			resultEsperado = 16740;
			Assert::AreEqual(resultEsperado, resultado);
		}

		TEST_METHOD(PotenciaMatriz7)
		{
			//
			int tam = 3;
			int** matriz, ** matrizResult;
			int num = 4, resultado, resultEsperado; // num es el exponente

			matriz = crearMatriz(tam);
			matrizResult = crearMatriz(tam);
			encerar(matriz, tam);
			encerar(matrizResult, tam);

			*(*(matriz + 0) + 0) = 3;
			*(*(matriz + 0) + 1) = 2;
			*(*(matriz + 0) + 2) = 1;
			*(*(matriz + 1) + 0) = 6;
			*(*(matriz + 1) + 1) = 5;
			*(*(matriz + 1) + 2) = 4;
			*(*(matriz + 2) + 0) = 9;
			*(*(matriz + 2) + 1) = 8;
			*(*(matriz + 2) + 2) = 7;

			//

			potenciaMatriz(matriz, matrizResult, tam, num);

			//
			resultado = *(*(matrizResult + 0) + 0);
			resultEsperado = 5400;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 1);
			resultEsperado = 4428;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 2);
			resultEsperado = 3456;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 0);
			resultEsperado = 15768;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 1);
			resultEsperado = 12933;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 2);
			resultEsperado = 10098;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 0);
			resultEsperado = 26136;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 1);
			resultEsperado = 21438;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 2);
			resultEsperado = 16740;
			Assert::AreEqual(resultEsperado, resultado);
		}

		TEST_METHOD(PotenciaMatriz8)
		{
			//
			int tam = 3;
			int** matriz, ** matrizResult;
			int num = 2, resultado, resultEsperado; // num es el exponente

			matriz = crearMatriz(tam);
			matrizResult = crearMatriz(tam);
			encerar(matriz, tam);
			encerar(matrizResult, tam);

			*(*(matriz + 0) + 0) = 4;
			*(*(matriz + 0) + 1) = 2;
			*(*(matriz + 0) + 2) = 9;
			*(*(matriz + 1) + 0) = 1;
			*(*(matriz + 1) + 1) = 3;
			*(*(matriz + 1) + 2) = 2;
			*(*(matriz + 2) + 0) = 3;
			*(*(matriz + 2) + 1) = 7;
			*(*(matriz + 2) + 2) = 5;

			//

			potenciaMatriz(matriz, matrizResult, tam, num);

			//
			resultado = *(*(matrizResult + 0) + 0);
			resultEsperado = 45;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 1);
			resultEsperado = 77;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 2);
			resultEsperado = 85;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 0);
			resultEsperado = 13;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 1);
			resultEsperado = 25;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 2);
			resultEsperado = 25;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 0);
			resultEsperado = 34;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 1);
			resultEsperado = 62;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 2);
			resultEsperado = 66;
			Assert::AreEqual(resultEsperado, resultado);
		}

		TEST_METHOD(PotenciaMatriz9)
		{
			//
			int tam = 3;
			int** matriz, ** matrizResult;
			int num = 3, resultado, resultEsperado; // num es el exponente

			matriz = crearMatriz(tam);
			matrizResult = crearMatriz(tam);
			encerar(matriz, tam);
			encerar(matrizResult, tam);

			*(*(matriz + 0) + 0) = 4;
			*(*(matriz + 0) + 1) = 2;
			*(*(matriz + 0) + 2) = 9;
			*(*(matriz + 1) + 0) = 1;
			*(*(matriz + 1) + 1) = 3;
			*(*(matriz + 1) + 2) = 2;
			*(*(matriz + 2) + 0) = 3;
			*(*(matriz + 2) + 1) = 7;
			*(*(matriz + 2) + 2) = 5;

			//

			potenciaMatriz(matriz, matrizResult, tam, num);

			//
			resultado = *(*(matrizResult + 0) + 0);
			resultEsperado = 512;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 1);
			resultEsperado = 916;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 2);
			resultEsperado = 984;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 0);
			resultEsperado = 152;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 1);
			resultEsperado = 276;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 2);
			resultEsperado = 292;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 0);
			resultEsperado = 396;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 1);
			resultEsperado = 716;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 2);
			resultEsperado = 760;
			Assert::AreEqual(resultEsperado, resultado);
		}

		TEST_METHOD(PotenciaMatriz10)
		{
			//
			int tam = 4;
			int** matriz, ** matrizResult;
			int num = 3, resultado, resultEsperado; // num es el exponente

			matriz = crearMatriz(tam);
			matrizResult = crearMatriz(tam);
			encerar(matriz, tam);
			encerar(matrizResult, tam);

			*(*(matriz + 0) + 0) = 4;
			*(*(matriz + 0) + 1) = 2;
			*(*(matriz + 0) + 2) = 9;
			*(*(matriz + 0) + 3) = 7;
			*(*(matriz + 1) + 0) = 1;
			*(*(matriz + 1) + 1) = 3;
			*(*(matriz + 1) + 2) = 2;
			*(*(matriz + 1) + 3) = 5;
			*(*(matriz + 2) + 0) = 3;
			*(*(matriz + 2) + 1) = 7;
			*(*(matriz + 2) + 2) = 5;
			*(*(matriz + 2) + 3) = 1;
			*(*(matriz + 3) + 0) = 9;
			*(*(matriz + 3) + 1) = 3;
			*(*(matriz + 3) + 2) = 4;
			*(*(matriz + 3) + 3) = 2;

			//

			potenciaMatriz(matriz, matrizResult, tam, num);

			//
			resultado = *(*(matrizResult + 0) + 0);
			resultEsperado = 1418;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 1);
			resultEsperado = 1484;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 2);
			resultEsperado = 1977;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 0) + 3);
			resultEsperado = 1481;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 0);
			resultEsperado = 713;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 1);
			resultEsperado = 653;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 2);
			resultEsperado = 963;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 1) + 3);
			resultEsperado = 719;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 0);
			resultEsperado = 1014;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 1);
			resultEsperado = 960;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 2);
			resultEsperado = 1119;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 2) + 3);
			resultEsperado = 822;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 3) + 0);
			resultEsperado = 1456;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 3) + 1);
			resultEsperado = 1384;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 3) + 2);
			resultEsperado = 1662;
			Assert::AreEqual(resultEsperado, resultado);

			resultado = *(*(matrizResult + 3) + 3);
			resultEsperado = 1075;
			Assert::AreEqual(resultEsperado, resultado);
		}
	};
}
