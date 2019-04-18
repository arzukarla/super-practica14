// lavado de auto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib>
#include "washeven.cpp"
#include <time.h>
#include <queue>
#include <list>
#include "washeven.h"
#define RAND double(rand()) / RAND_MAX

using namespace std;

bool read_debug_option();

int main()
{
	// average time interval between two consecutive arrivals
	double ave_interarrival_time;
	// average service time for each customer
	double ave_service_time;
	// total simulation time
	double total_simulation_time;
	// debug options
	bool debug_opt1, debug_opt2;
	//----------------------------------------------------------------------
	//get user inputs
	cout << "Input the average time interval of two consecutive intervals: ";
	cin >> ave_interarrival_time;
	cout << "Input the average service time: ";
	cin >> ave_service_time;
	cout << "Input the simulation time: ";
	cin >> total_simulation_time;
	// The following can be comment out during debugging
	// total simulation time should be at least 10,000 * ave_interarrival_time
	if (total_simulation_time < 10000 * ave_interarrival_time)
	{
		cout << "Error: total simulation time should be greater than " << ave_interarrival_time * 10000 << endl;
		return 1;
	}
	cout << "Debugging option:" << "\n";
	cout << "- Print items in queue whenever there is a change in queue? (y/n): ";
	debug_opt1 = read_debug_option();
	cout << "- Print events when there is an arrival or departure? (y/n): ";
	debug_opt2 = read_debug_option();
	//----------------------------------------------------------------
	// create a queue of customers coming to the carwash
	queue <customer*> line;
	//create a list of events
	list <washeven*> event_list;
	//initialization function for randon number generators
	srand(time(NULL));
	// generate the first arrival, push into the event list
 // TODO: add your code here ...
	// generate an "end_of_simulation" event, push into the event list
 // TODO: add your code here ...
	washeven* next_event;
	do
	{
		// retrieve the next event from the event list
		next_event = event_list.front();
		event_list.pop_front();
		switch (next_event->get_type())
		{
		case arrival: // TODO: add your code below ...
		// create a new customer
		// if the line is empty, update departure time
		// create a departure event and push into the event list
					   // push the customer into the customer line
		// create a new arrival event and push into the event list
					   // sort the event list in chronological order
			event_list.sort(comp_time);
			break;
		case departure: // TODO: add your code below ...
		// pop the front customer from the line
		// if the line is not empty, update the departure time of the next customer
					   // create a new departure event and push into the event list
					   // sort the event list in chronological order
			event_list.sort(comp_time);
			break;
		case end_of_simulation: // TODO: add your code below ...
		// print statistics
			break;
		default:
			cout << "Error: incorrect event type." << endl;
		}
	} while (!event_list.empty());
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

bool read_debug_option()
{
	return false;
}
bool cdecl comp_time(washeven* first, washeven* second)
{
	if (first->get_time() < second->get_time())
		return true;

	return false;
}
