// animal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<stdlib.h>
using namespace std;

class Animal {
private:
	int age;
public:
	Animal(int);
	void  eat();
};

class Cat : public Animal {
private:
	string name;
	string race;

public:
	Cat(int, string, string);
	void mostrarCat();
};

class Dog : public Animal {
private:
	string name, race;
public:
	Dog(int, string, string);
	void mostrarDog();
};

//Constructor de la clase Animal
Animal::Animal(int _age) {
	age = _age;
}

void Animal::eat() {
	cout << "I eat\n ";
	cout << "age: " << age << endl;
}

//COnstructor de la clase Cat
Cat::Cat(int _age, string _name, string _race) : Animal(_age) {
	name = _name;
	race = _race;
}

void Cat::mostrarCat() {
	  eat();
	cout << "in the plate, sit in the groung" << endl;
	cout << "Name: " << name << endl;
	cout << "race: " << race << endl;
	
}

//Constructor de la clase Perro
Dog::Dog(int _age, string _name, string _race) : Animal(_age) {
	name = _name;
	race = _race;
}

void Dog::mostrarDog() {
	 eat();
	cout << "in the plate, in the ground" << endl;
	cout << "Name: " << name << endl;
	cout << "race: " << race << endl;
	
}

int main() {

	Cat animal1(2, "Luis", "Russian blue");
	cout << "-Cat-" << endl;
	animal1.mostrarCat();
	cout << "\n";

	Dog dog1(4, "Boby", "German shepherd");
	cout << "-Dog-" << endl;
	dog1.mostrarDog();
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
