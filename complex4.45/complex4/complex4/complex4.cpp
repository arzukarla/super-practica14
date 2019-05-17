// complex4.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

class complex
{
	float a, b; //a - real part, b - imaginary part
public:
	void attribution(float = 0, float = 0);
	void read();
	float& retre();
	float& retim();
	complex(float, float);//contructor
	~complex();//destructor
	complex() {}
	complex(complex&);
	void display(char*);
	float module();

	
	complex sum1(complex); 


	void sum2(complex, complex*);

	
	void sum3(complex, complex&);

	//Product of two complex numbers
	complex product(complex);
};

void complex::attribution(float x, float y)
{
	a = x; b = y;
}

void complex::read()
{
	cout << "\part real: ";
	cin >> a;
	cout << "\part imaginary: ";
	cin >> b;
}

complex::~complex() { //desctructor

}
float& complex::retre()
{
	return a;
}
float& complex::retim()
{
	return b;
}

complex::complex(float x, float y)// constructor
{
	a = x; b = y;
}

complex::complex(complex& z)// constructor
{
	a = z.a;
	b = z.b;
}

void complex::display(char* s)
{
	cout << "Complex number " << s << " is: " << a;
	cout.setf(ios::showpos);
	cout << b << "*i\n";
	cout.unsetf(ios::showpos);
}

float complex::module()
{
	return sqrt(pow(a, 2) + pow(b, 2));
}
/*will be made summation between no. complex represented by object
Current, who will call the function, and no. complex transmitted through
object with the name "z" in line parameters*/

complex complex::sum1(complex z)
{
	complex r;
	r.a = a + z.a;
	r.b = b + z.b;
	return r;
}

void complex::sum2(complex z, complex * r)
{
	r->a = a + z.a;
	r->b = b + z.b;
}

void complex::sum3(complex z, complex & r)
{
	r.a = a + z.a;
	r.b = b + z.b;
}

complex complex::product(complex z)
{
	complex r;
	r.a = a * z.a - b * z.b;
	r.b = a * z.b + b * z.a;
	return r;
}

int main()
{
	
	complex z1; /*call of the initialization constructor without parameters and defined body*/

	int a, b; /*not to be confused: a and b here are not those of
class, because that is protected can not access them from
outside the class*/

	cout << "Attribution read the real and imaginary values.\n";
	cout << "\tpart real: ";
	cin >> a;
	cout << "\tpart imaginary: ";
	cin >> b;
	z1.attribution(a, b);

	//2.We will enter data into a complex number by reading its
	complex z2;
	cout << "Read a complex number.\n";
	z2.read();

	//3.Real part directly entered values ??respectively imaginary
	complex z3;
	cout << "Entered directly on the real and imaginary, date.\n";
	cout << "\tpart real: ";
	cin >> z3.retre();
	int c;
	cout << "\tpart imaginary: ";
	cin >> c;
	z3.retim() = c; /*This transfer is possible because
function returns a reference */


	cout << "We entered dates directly through a constructor initialization.\n";
	complex z4(3, -2); /*values ??can be given directly, or read previously*/

}


