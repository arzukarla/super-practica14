// complex.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iomanip>
#include "MyComplex.h"

int main() {
	std::cout << std::fixed << std::setprecision(2);

	MyComplex c1(3.1, 4.2);
	std::cout << c1 << std::endl;  // (3.10,4.20)
	MyComplex c2(3.1);
	std::cout << c2 << std::endl;  // (3.10,0.00)

	MyComplex c3 = c1 + c2;
	std::cout << c3 << std::endl;  // (6.20,4.20)
	c3 = c1 + 2.1;
	std::cout << c3 << std::endl;  // (5.20,4.20)
	c3 = 2.2 + c1;
	std::cout << c3 << std::endl;  // (5.30,4.20)

	c3 += c1;
	std::cout << c3 << std::endl;  // (8.40,8.40)
	c3 += 2.3;
	std::cout << c3 << std::endl;  // (10.70,8.40)

	std::cout << ++c3 << std::endl; // (11.70,8.40)
	std::cout << c3++ << std::endl; // (11.70,8.40)
	std::cout << c3 << std::endl; // (12.70,8.40)

 // c1+c2 = c3;  // error: c1+c2 returns a const
 // c1++++;      // error: c1++ returns a const

 // MyComplex c4 = 5.5;  // error: implicit conversion disabled
	MyComplex c4 = (MyComplex)5.5;  // explicit type casting allowed
	std::cout << c4 << std::endl; // (5.50,0.00)

	MyComplex c5;
	std::cout << "Enter a complex number in (real,imag): ";
	std::cin >> c5;
	if (std::cin.good()) {  // if no error
		std::cout << c5 << std::endl;
	}
	else {
		std::cerr << "Invalid input" << std::endl;
	}
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
