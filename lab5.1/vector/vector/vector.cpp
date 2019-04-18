// vector.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

class Vector
{
	int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
	int n, d;
public:
	Vector(int n, int d = 1) : n(n / gcd(n, d)), d(d / gcd(n, d)) { }
	int num() const { return n; }
	int den() const { return d; }
	Vector& operator*=(const Vector& rhs)
	{
		int new_n = n * rhs.n / gcd(n * rhs.n, d * rhs.d);
		d = d * rhs.d / gcd(n * rhs.n, d * rhs.d);
		n = new_n;
		return *this;
	}
};
std::ostream& operator<<(std::ostream& out, const Vector& f)
{
	return out << f.num() << '/' << f.den();
}
bool operator==(const Vector& lhs, const Vector& rhs)
{
	return lhs.num() == rhs.num() && lhs.den() == rhs.den();
}
bool operator!=(const Vector& lhs, const Vector& rhs)
{
	return !(lhs == rhs);
}
Vector operator*(Vector lhs, const Vector & rhs)
{
	return lhs *= rhs;
}

int main()
{
	Vector f1(3, 8), f2(1, 2), f3(10, 2);
	std::cout << f1 << " * " << f2 << " = " << f1 * f2 << '\n'
		<< f2 << " * " << f3 << " = " << f2 * f3 << '\n'
		<< 2 << " * " << f1 << " = " << 2 * f1 << '\n';
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
