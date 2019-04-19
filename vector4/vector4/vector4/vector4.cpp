// vector4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <cmath> 
#include <iostream> 
using namespace std;

class Vector {
private:
	int x, y, z;


public:
	Vector(int, int, int);//constructor

	~Vector();//Destructor

	Vector(int x, int y, int z)
	{

		this->x = x;
		this->y = y;
		this->z = z;
	}
	Vector operator+(Vector v); // ADD 2 Vectors 
	Vector operator-(Vector v); // Subtraction 
	int operator^(Vector v); // Dot Product 
	Vector operator*(Vector v); // Cross Product 
	float magnitude()
	{
		return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	}
	friend ostream& operator<<(ostream & out, const Vector & v);
	// To output the Vector 
};
//constructor
Vector::Vector(int, int, int)
{
	x = x;
	y = y;
	z = z;
}
//Destructor
Vector::~Vector() {
}
// Addition of vectors 
Vector Vector::operator+(Vector v)
{
	int x1, y1, z1;
	x1 = x + v.x;
	y1 = y + v.y;
	z1 = z + v.z;
	return Vector(x1, y1, z1);
}

// Subtraction of vectors 
Vector Vector::operator-(Vector v)
{
	int x1, y1, z1;
	x1 = x - v.x;
	y1 = y - v.y;
	z1 = z - v.z;
	return Vector(x1, y1, z1);
}


// Dot product of vectors 
int Vector::operator^(Vector v)
{
	int x1, y1, z1;
	x1 = x * v.x;
	y1 = y * v.y;
	z1 = z * v.z;
	return (x1 + y1 + z1);
}

// Cross product of vectors 
Vector Vector::operator*(Vector v)
{
	int x1, y1, z1;
	x1 = y * v.z - z * v.y;
	y1 = z * v.x - x * v.z;
	z1 = x * v.y - y * v.x;
	return Vector(x1, y1, z1);
}

// Display Vector 
ostream& operator<<(ostream & out, const Vector & v)
{
	out << v.x << "i ";
	if (v.y >= 0)
		out << "+ ";
	out << v.y << "j ";
	if (v.z >= 0)
		out << "+ ";
	out << v.z << "k" << endl;
	return out;
}

// Driver program 
int main()
{
	// Let us Take the vector quantites : 
	// V1 = 3i + 4j + 2k 
	// V2 = 6i + 3j + 9k 
	Vector V1(3, 4, 2), V2(6, 3, 9);

	cout << "V1 = " << V1;
	cout << "V2 = " << V2;

	cout << "V1 + V2 = " << (V1 + V2);
	cout << "Dot Product is : " << (V1 ^ V2);
	cout << "Cross Product is : " << (V1 * V2);

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
