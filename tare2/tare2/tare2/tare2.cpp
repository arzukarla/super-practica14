// tare2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
using namespace std;


	int compara_float(const void* a, const void* b); 

	float v[] = { 34.5, -12.3, 4.5, 9.1, -2.5, 18.0, 10., 5.5 };
	int main()
	{
		int j, n;
		int(*pf)(const void*, const void*); /* puntero a función */
		n = 8; /* número de elementos */
		cout << "number elements:" << n << endl;
		pf = compara_float;

			qsort((void*)v, n, sizeof(v[0]), pf); 
		
		for (j = 0; j < n; j++)
			printf("%.2f ", v[j]);
		puts("\n Pulsa cualquier tecla para continuar. ...");
		j = getchar();
		return 0;
	}
	int compara_float(const void *a, const void *b)
	{
		float *x, *y;
		x = (float*)a; y = (float*)b;
		return(*x - *y);
	}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
