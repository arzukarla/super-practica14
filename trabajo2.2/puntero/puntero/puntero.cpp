// puntero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <cmath>
#include <iostream>
using namespace std;

class pointer {


private:
	int add, subtract, multiply;
	int a, b;
public:

	void add(int a, int b)
	{
		cout<< "Addition is %d\n", a + b;
	}
	void subtract(int a, int b)
	{
		cout<<"Subtraction is %d\n", a - b;
	}
	void multiply(int a, int b)
	{
		cout<<"Multiplication is %d\n", a * b;
	}
};


int main()
{
	// fun_ptr_arr is an array of function pointers 
	void (*fun_ptr_arr[])(int, int) = { add, subtract, multiply };
	unsigned int ch, a = 15, b = 10;
	cin >> ch;
	cout<<"Enter Choice: 0 for add, 1 for subtract and 2 "
		"for multiply\n";
	

	if (ch > 2) return 0;

	(*fun_ptr_arr[ch])(a, b);

	return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
