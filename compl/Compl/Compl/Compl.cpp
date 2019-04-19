// Compl.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>

using namespace std;

class Complex {

private:
	double real, imag;

public:
     
	Complex(double,double); //constructor

		~Complex();//Destructor

		Complex(){
		real = imag = 0;
	}

		Complex() {
			real = imag = 0;
		}

		Complex(double r) {
			real = r;
			imag = 0;
		}

		Complex(double r, double i) {
			real = r;
			imag = i;
		}

		Complex(Complex& obj) {
			real = obj.real;
			imag = obj.imag;
		}

		Complex add(Complex c) {
			Complex Add;
			Add.real = real + c.real;
			Add.imag = imag + c.imag;
			return;
		}

		Complex sub(Complex c) {
			Complex Sub;
			Sub.real = real - c.real;
			Sub.imag = imag - c.imag;
			return ;
		}

		Complex mult(Complex c) {
			Complex Mult;
			Mult.real = real * c.real - imag * c.imag;
			Mult.imag = real * c.imag - c.real * imag;
			return ;
		}

		Complex div(Complex c) {
			Complex Div;
			Div.real = (real * c.real + imag * c.imag) / (c.real * c.real + c.imag * c.imag);
			Div.imag = (imag * c.real + real * c.imag) / (c.real * c.real + c.imag * c.imag);
			return ;
		}
		void print() {
			cout << real << "+" << imag << "i" << endl << endl;
		}

		double getReal() const {
			return real;
		}

		double getImag() const {
			return imag;
		}

		void setReal(double re) {
			real = re;

		}

		void setImag(double im) {
			imag = im;
		}


};
//constructor
Complex::Complex(double, double)
{
	real = real;
	imag = imag;
	
}
//Destructor
Complex::~Complex() {
}

int main()
{
	double real1, imag1, real2, imag2;

	cout << "Enter the Real  part of First Number: ";
	cin >> real1;
	cout << "Enter the imaginary  part of First Number: ";
	cin >> imag1;
	Complex obj1(real1, imag1);
	obj1.print();

	cout << "Enter the Real part of Second Number: ";
	cin >> real2;
	cout << "Enter the Imaginary part of second number: ";
	cin >> imag2;
	Complex obj2(real2, imag2);
	obj2.print();

	Complex c;
	c = obj1.add(obj2);
	cout << "Addition is : (" << c.getReal() << ")+(" << c.getImag() << ")i" << endl;
	c = obj1.sub(obj2);
	cout << endl << "Subtraction is : (" << c.getReal() << ")+(" << c.getImag() << ")i" << endl;

	c = obj1.mult(obj2);
	cout << endl << "Multiplication is : (" << c.getReal() << ")+(" << c.getImag() << ")i" << endl;

	c = obj1.div(obj2);
	cout << endl << "Division result  is : (" << c.getReal() << ")+(" << c.getImag() << ")i" << endl;
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
