
#include "MyComplex.h"

// Constructor
MyComplex::MyComplex(double r, double i) : real(r), imag(i) { }

// Overloading += operator for c1 += c2
MyComplex& MyComplex::operator+= (const MyComplex& rhs) {
	real += rhs.real;
	imag += rhs.imag;
	return *this;
}

// Overloading += operator for c1 += double (of real)
MyComplex& MyComplex::operator+= (double value) {
	real += value;
	return *this;
}

// Overload prefix increment operator ++c (real part)
MyComplex& MyComplex::operator++ () {
	++real;   // increment real part only
	return *this;
}

// Overload postfix decrement operator c-- (imag part)
const MyComplex MyComplex::operator++ (int dummy) {
	MyComplex saved(*this);
	--imag;  // decrement real part only
	return saved;
}

// Overload comparison operator c1 == c2
bool MyComplex::operator== (const MyComplex& rhs) const {
	return (real == rhs.real && imag == rhs.imag);
}

// Overload comparison operator c1 != c2
bool MyComplex::operator!= (const MyComplex & rhs) const {
	return !(*this == rhs);
}

// Overload stream insertion operator out << c (friend)
std::ostream& operator<< (std::ostream & out, const MyComplex & c) {
	out << '(' << c.real << ',' << c.imag << ')';
	return out;
}

// Overload stream extraction operator in >> c (friend)
std::istream& operator>> (std::istream & in, MyComplex & c) {
	double inReal, inImag;
	char inChar;
	bool validInput = false;
	// Input shall be in the format "(real,imag)"
	in >> inChar;
	if (inChar == '(') {
		in >> inReal >> inChar;
		if (inChar == ',') {
			in >> inImag >> inChar;
			if (inChar == ')') {
				c = MyComplex(inReal, inImag);
				validInput = true;
			}
		}
	}
	if (!validInput) in.setstate(std::ios_base::failbit);
	return in;
}

// Overloading + operator for c1 + c2
const MyComplex operator+ (const MyComplex & lhs, const MyComplex & rhs) {
	MyComplex result(lhs);
	result += rhs;  // uses overload +=
	return result;
	// OR return MyComplex(lhs.real + rhs.real, lhs.imag + rhs.imag);
}

// Overloading + operator for c + double
const MyComplex operator+ (const MyComplex & lhs, double value) {
	MyComplex result(lhs);
	result += value;  // uses overload +=
	return result;
}

// Overloading + operator for double + c
const MyComplex operator+ (double value, const MyComplex & rhs) {
	return rhs + value;   // swap and use above function
}