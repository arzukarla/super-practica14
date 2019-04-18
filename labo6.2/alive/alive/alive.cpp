// alive.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<stdlib.h>

using namespace std;

class Alive {
private:
	int age;
public:
	Alive(int);
	void  eat();
};

class Bird : public Alive {
private:
	string race;

public:
	Bird(int,  string);
	void mostrarBird();
};

class Fish : public Alive {
private:
	string race;
public:
	Fish(int,  string);
	void mostrarFish();
};

class Animal : public Alive {
private:
	string  race;
public:
	Animal(int, string);
	void mostrarAnimal();
};
//Constructor de la clase Animal
Alive::Alive(int _age) {
	age = _age;
}

void Alive::eat() {
	cout << "Survive\n" ;
	cout << "age: " << age << endl;
}

//COnstructor de la clase Humano
Bird::Bird(int _age, string _race) : Alive(_age) {
	race = _race;
}

void Bird::mostrarBird() {
	Alive::eat();
	cout << "yo vuelo en el cielo" << endl;
	cout << "race: " << race << endl;
}

//Constructor de la clase Perro
Fish::Fish(int _age, string _race) : Alive(_age) {
	race = _race;
}

void Fish::mostrarFish() {
	Alive::eat();
	cout << "yo nado en el mar" << endl;
	cout << "race: " << race << endl;
	
}

Animal::Animal(int _age, string _race) : Alive(_age) {
	race = _race;
}

void Animal::mostrarAnimal() {
	Alive::eat();
	cout << "yo como y duermo" << endl;
	cout << "race: " << race << endl;
	
}
int main() {

	Bird animal1(2,  "Dove");
	cout << "-Bird-" << endl;
	animal1.mostrarBird();
	cout << "\n";

	Fish pescado1(4, "Swordfish");
	cout << "-Fish-" << endl;
	pescado1.mostrarFish();
	cout << "\n";

	Animal animal2(2, "Kinkong");
	cout << "-Animal-" << endl;
	animal2.mostrarAnimal();
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
