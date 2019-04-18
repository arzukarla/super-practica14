// tile.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Tile {
public:
	string brand;
	float size_h, size_w;
	double price;


	void setBrand(string b) { brand = b; }
	void setSize_h(float h) { size_h = h; }
	void setSize_w(float w) { size_w = w; }
	void setPrice(double p) { price = p; }

	string getBrand() { return brand; }
	float getSize_h() { return size_h; }
	float getSize_w() { return size_w; }
	double getPrice() { return price; }


};

int main()
{

	Tile Date;
	Date.setBrand("BUW");
	Date.setSize_h(8.5);
	Date.setSize_w(15.4);
	Date.setPrice(5000.00);
	cout << Date.getBrand() << endl;
	cout << Date.getSize_h() << endl;
	cout << Date.getSize_w() << endl;
	cout << Date.getPrice() << endl;
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
