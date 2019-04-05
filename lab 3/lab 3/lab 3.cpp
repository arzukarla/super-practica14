// lab 3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Child{
private:
	string name;
	string last_name;
	int age;

public:
	void setName(string n) {name = n;}
	void setLast_name(string l) { last_name = l; }
	void setAge(int a) { age = a; }

	string getName() { return name; }
	string getLast_name() { return last_name; }
	int getAge() { return age;}


};

int main()
{
	
	Child Date;
	Date.setName("Jose");
	Date.setLast_name("Arzu");
	Date.setAge(5);
	cout << Date.getName()<<endl;
	cout << Date.getLast_name() << endl;
	cout << Date.getAge() << endl;
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
