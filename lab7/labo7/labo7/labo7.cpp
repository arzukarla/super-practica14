// labo7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Person {
private: //Atributos
	string name;
	int age;
public: //Metodos
	Person(string, int); //Constructor Persona
	virtual void mostrarPersona();
};

class Boss : public Person {
private: 
	float salary;
public: 
	Boss(string, int, float); //Constructor Empleado
  void mostrarBoss();
};

class Student : public Person {
private: 
	float notaFinal;
public:
	Student(string, int, float);
	void mostrarEstudiante();
};

//Constructor de la clase Persona(Clase Padre)
Person::Person(string _name, int _age) {
	name = _name;
	age = _age;
	
}

void Person::mostrarPersona() {
	cout << "Name: " << name << endl;
	cout << "age: " << age << endl;
	
}

//Constructor de la clase Empleado (Clase Hija)
Boss::Boss(string _name, int _age, float _salary) : Person( _name, _age){
	salary = _salary;
	
}

void Boss::mostrarBoss() {
	mostrarPersona();
	cout << "Salary: " << salary << endl; 
	
}

//Constructor de la clase Estudiante
Student::Student(string _name, int _age, float _notaFinal) :Person(_name, _age) {
	notaFinal = _notaFinal;
}


void Student::mostrarEstudiante() {
	mostrarPersona();
	cout << "Nota Final: " << notaFinal << endl; 
}





int main() {

	Boss empleado1("Juan", 35, 3000);
	cout << "-Boss-" << endl;
	empleado1.mostrarBoss();
	cout << "\n";

	Student estudiante1("Maria", 21, 16.7);
	cout << "-Student-" << endl;
	estudiante1.mostrarEstudiante();
	cout << "\n";

	system("pause");
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

