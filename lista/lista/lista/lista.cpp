// lista.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <list>


using namespace std;

class nodo {
public:
	nodo(int v, nodo* sig = NULL)
	{
		valor = v;
		siguiente = sig;
	}

private:
	int valor;
	nodo* siguiente;

	friend class complex;
};

typedef nodo* pnodo;

class complex {
public:
	complex() { primero = actual = NULL; }
	~complex();

	void Insertar(int v);
	void Borrar(int v);
	bool ListaVacia() { return primero == NULL; }
	void Mostrar();
	void Siguiente();
	void Primero();
	void Ultimo();
	bool Actual() { return actual != NULL; }
	int ValorActual() { return actual->valor; }

private:
	pnodo primero;
	pnodo actual;
};

complex::~complex()
{
	pnodo aux;

	while (primero) {
		aux = primero;
		primero = primero->siguiente;
		delete aux;
	}
	actual = NULL;
}

void complex::Insertar(int v)
{
	pnodo anterior;

	// Si la lista está vacía
	if (ListaVacia() || primero->valor > v) {
		// Asignamos a lista un nievo nodo de valor v y
		// cuyo siguiente elemento es la lista actual                    
		primero = new nodo(v, primero);
	}
	else {
		// Buscar el nodo de valor menor a v 
		anterior = primero;
		// Avanzamos hasta el último elemento o hasta que el siguiente tenga 
		// un valor mayor que v 
		while (anterior->siguiente && anterior->siguiente->valor <= v)
			anterior = anterior->siguiente;
		// Creamos un nuevo nodo después del nodo anterior, y cuyo siguiente
		// es el siguiente del anterior
		anterior->siguiente = new nodo(v, anterior->siguiente);
	}
}

void complex::Borrar(int v)
{
	pnodo anterior, nodo;

	nodo = primero;
	anterior = NULL;
	while (nodo && nodo->valor < v) {
		anterior = nodo;
		nodo = nodo->siguiente;
	}
	if (!nodo || nodo->valor != v) return;
	else { // Borrar el nodo 
		if (!anterior) // Primer elemento 
			primero = nodo->siguiente;
		else  // un elemento cualquiera
			anterior->siguiente = nodo->siguiente;
		delete nodo;
	}
}

void complex::Mostrar()
{
	nodo* aux;

	aux = primero;
	while (aux) {
		cout << aux->valor << "-> ";
		aux = aux->siguiente;
	}
	cout << endl;
}

void complex::Siguiente()
{
	if (actual) actual = actual->siguiente;
}

void complex::Primero()
{
	actual = primero;
}

void complex::Ultimo()
{
	actual = primero;
	if (!ListaVacia())
		while (actual->siguiente) Siguiente();
}

int main()
{
	complex Lista;

	Lista.Insertar(20);
	Lista.Insertar(10);
	Lista.Insertar(40);
	Lista.Insertar(30);

	Lista.Mostrar();

	cout << "Lista de elementos:" << endl;
	Lista.Primero();
	while (Lista.Actual()) {
		cout << Lista.ValorActual() << endl;
		Lista.Siguiente();
	}
	Lista.Primero();
	cout << "Primero: " << Lista.ValorActual() << endl;

	Lista.Ultimo();
	cout << "Ultimo: " << Lista.ValorActual() << endl;

	Lista.Borrar(10);
	Lista.Borrar(15);
	Lista.Borrar(45);
	Lista.Borrar(30);
	Lista.Borrar(40);

	Lista.Mostrar();

	cin.get();
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
