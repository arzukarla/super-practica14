// lab8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

using namespace std;

void fillvector(vector<Student>&);
void printvector(const vector<Student>&);

int main()
{
	vector<Student>MyClass;
	fillvector(MyClass);
    printvector(MyClass);

	return 0;
}
void fillvector(vector<Student>& newMyClass) {
	string name;
	char grade;
	int group;
	cout << "how many students are in your class?";
	int classSize;
	cin >> classSize;
	for (int i = 0; i < classSize; i++) {
		cout << "Enter student name:";
		cin >> name;
		cout << "Enter student Grade:";
		cin >> grade;
		cout << "Enter student Group:";
		cin >> group;

		Student newStudent(name, grade, group);
		newMyClass.push_back(newStudent);
		cout << endl;
	}
}
void printvector(const vector<Student>&newMyClass) {
	unsigned int Size= newMyClass.size();
	for (unsigned int i = 0; i < newMyClass.size(); i++) {

		cout << "Student Name:" << newMyClass[i].getName() << endl;
		cout << "Student Grade:" << newMyClass[i].getGrade() << endl;
		cout << "Student Group:" << newMyClass[i].getGroup() << endl;
		cout << endl;
	}
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
