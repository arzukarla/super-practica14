// labo6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
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

class Cat: public Animal {
private:
	string name;
	string race;

public:
	Cat(int, string, string);
	void eat();
};

class Dog : public Animal {
private:
	string name, race;
public:
	Dog(int, string, string);
	void eat();
};

//Constructor de la clase Animal
Animal::Animal(int _age) {
	age = _age;
}

void Animal::eat() {
	cout << "I eat ";
}

//COnstructor de la clase Humano
Cat::Cat(int _age, string _name, string _race) : Animal(_age) {
	name = _name;
}

void Cat::eat() {
	Animal::eat();
	cout << "in the table, sit in the chair" << endl;
}

//Constructor de la clase Perro
Dog::Dog(int _age, string _name, string _race) : Animal(_age) {
	name = _name;
	race = _race;
}

void Dog::eat() {
	Animal::eat();
	cout << "in the plate, in the ground" << endl;
}

int main() {

	Cat animal1(2, "Luis", "Russian blue");
	cout << "-Cat-" << endl;
	animal1.eat();
	cout << "\n";

	Dog dog1(4, "Boby", "German shepherd");
	cout << "-Dog-" << endl;
	dog1.eat();
	cout << "\n";

	system("pause");
	return 0;
}
