// title.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>


using namespace std;


class Tile {
public:
	string brand;
	float size_h, size_w;
	double price;


	Tile(string, float, float, double);
	~Tile();//Destructor


	void mostrarBrand();
	void mostrarSize_h();
	void mostrarSize_w();
	void mostrarPrice();
};
//constructor
Tile::Tile(string _Brand, float _Size_h, float _Size_w, double _Price) {
	brand = _Brand;
	size_h = _Size_h;
	size_w = _Size_w;
	price = _Price;
}


//Desctructor
Tile::~Tile() {


}
void Tile::mostrarBrand() {
	cout << "Brand:" << "BUW" << endl;


}
void Tile::mostrarSize_h() {
	cout << "size_h:" << 8.5 << endl;
}
void Tile::mostrarSize_w() {
	cout << "size_w:" << 15.4 << endl;
}
void Tile::mostrarPrice() {
	cout << "price:" << 5000.00 << endl;
}


int main()
{


	Tile Date("BUW", 8.5, 15.5, 5000.00);
	Date.mostrarBrand();
	Date.mostrarSize_h();
	Date.mostrarSize_w();
	Date.mostrarPrice();
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
