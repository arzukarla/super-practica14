#pragma once

#ifndef WASHEVEN_H
#define WASHEVEN_H
#include <iostream>
#include "washeven.cpp"
#include "washeven.h"

using namespace std;
enum events_t { arrival, departure, end_of_simulation };

class washeven
{
private:
	events_t type;
	double time;
	unsigned int customer_id;


public:
	//constructors
	washeven() {}

	washeven(events_t type_t, double time_t, unsigned int id)
	{
		type = type_t;
		time = time_t;
		customer_id = id;
		// added for debugging
		cout << "new event: ";
		switch (type_t)
		{
		case arrival:
			cout << "arrival";
			break;
		case departure:
			cout << "departure";
			break;
		case end_of_simulation:
			cout << "end_of_simulation";
			break;
		}
		cout << " at " << time_t << " with customer " << id << endl;
	}
	// MODIFICATION MEMBER FUNCTIONS
	void set_type(events_t t) { type = t; }
	void set_time(double t) { time = t; }
	void set_customerid(unsigned int id) { customer_id = id; }
	// CONSTANT MEMBER FUNCTIONS
	events_t get_type() const { return type; }
	double get_time() const { return time; }
	unsigned int get_customerid() const { return customer_id; }
	void print_info() const;

};
// NON-MEMBER FUNCTION
// Define a function comparing the time of occurence
// purpose: to sort the event list in chronological order


#endif



// <Put your name and date here>
// FILE: washevent.h
// CLASS PROVIDED: washevent
// A washevent has the following features:
// type: the event type, should be one of the following
// { arrival, departure, end_of_simulation }
// time: a real value showing the time of occurrence




