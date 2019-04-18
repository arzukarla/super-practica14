// Student.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<stdlib.h>

using namespace std;
class Student {
private: //Atributos
	string name;
	int age;
public: //Metodos
	Student(string, int); //Constructor Persona
	void mostrarStudent();
};

class Boss : public Student {
private: //Atributos
	float salary;
public: //Metodos
	Boss(string, int, float); //Constructor Empleado
	void mostrarBoss();
};




//Constructor de la clase Persona(Clase Padre)
Student::Student(string _name, int _age) {
	name = _name;
	age = _age;
}

void Student::mostrarStudent() {
	cout << "Name: " << name << endl;
	cout << "Edad: " << age << endl;
}

//Constructor de la clase Empleado (Clase Hija)
Boss::Boss(string _name, int _age, float _salary) : Student(_name, _age) {
	salary = _salary;
}

void Boss::mostrarBoss() {
	mostrarStudent();
	cout << "Salary: " << salary << endl;
}


int main() {
	Boss empleado1("Juan", 35, 1300);
	cout << "-Boss-" << endl;
	empleado1.mostrarBoss();
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
