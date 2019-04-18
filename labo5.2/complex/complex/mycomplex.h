#pragma once

#ifndef MY_COMPLEX_H
#define MY_COMPLEX_H

#include <iostream>

class MyComplex {
private:
	double real, imag;

public:
	explicit MyComplex(double real = 0, double imag = 0); // Constructor
	MyComplex& operator+= (const MyComplex& rhs); // c1 += c2
	MyComplex& operator+= (double real);           // c += double
	MyComplex& operator++ ();                      // ++c
	const MyComplex operator++ (int dummy);         // c++
	bool operator== (const MyComplex& rhs) const;   // c1 == c2
	bool operator!= (const MyComplex& rhs) const;   // c1 != c2

	// friends
	friend std::ostream& operator<< (std::ostream& out, const MyComplex& c); // out << c
	friend std::istream& operator>> (std::istream& in, MyComplex& c);        // in >> c
	friend const MyComplex operator+ (const MyComplex& lhs, const MyComplex& rhs); // c1 + c2
	friend const MyComplex operator+ (double real, const MyComplex& rhs);  // double + c
	friend const MyComplex operator+ (const MyComplex& lhs, double real);  // c + double
};

#endif