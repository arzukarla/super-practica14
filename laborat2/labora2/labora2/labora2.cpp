// labora2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "pch.h"
#include<iostream>
#include<conio.h>
using namespace std;

struct Alumno {
	char nombre[30];
	int edad;
	float promedio;
}alumno[3], *puntero_alumno = alumno;

void pedirDatos();
void comprobarMejorPromedio(Alumno *);

int main() {
	pedirDatos();
	comprobarMejorPromedio(puntero_alumno);


	return 0;
}

void pedirDatos() {
	for (int i = 0; i < 3; i++) {
		fflush(stdin); //Clean buffer to continue typing data
		cout << "Digite su nombre: ";
		cin.getline((puntero_alumno + i)->nombre, 30, '\n');
		cout << "Digite su edad: ";
		cin >> (puntero_alumno + i)->edad;
		cout << "Digite su promedio: ";
		cin >> (puntero_alumno + i)->promedio;
		cout << "\n";
	}
}

void comprobarMejorPromedio(Alumno *puntero_alumno) {
	float mayor = 0.0;
	int pos = 0;

	for (int i = 0; i < 3; i++) {
		if ((puntero_alumno + i)->promedio > mayor) {
			mayor = (puntero_alumno + i)->promedio;//we get the highest average
			pos = i;// we keep the position of the highest average
		}
	}

	//We print the data of the student with the best average
	cout << "\nAlumno con el mejor promedio: " << endl;
	cout << "Nombre: " << (puntero_alumno + pos)->nombre << endl;
	cout << "Edad: " << (puntero_alumno + pos)->edad << endl;
	cout << "Promedio: " << (puntero_alumno + pos)->promedio << endl;
}



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
