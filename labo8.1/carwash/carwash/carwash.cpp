// carwash.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <fstream>
#include <ostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Node
{
private:
	int item;
	Node* next;
public:
	Node();
	Node(const int& anItem);
	Node(const int& anItem, Node* nextNodePtr);
	void setItem(const int& anItem);
	void setNext(Node* nextNodePtr);
	int getItem();
	Node* getNext();
};
class LinkedQueue
{
private:
	Node* backPtr;
	Node* frontPtr;
public:
	bool isEmpty();
	bool enqueue(int& newEntry);
	bool dequeue();
	int peekFront() const;
	LinkedQueue();
	~LinkedQueue();
	LinkedQueue(const LinkedQueue& aQueue);
};
int main()
{
	srand(1);
	int timeForWash;
	int minute;
	int timeEnteredQueue;
	int carsWashed;
	int totalQueueMin;
	int timeLeftOnCar;
	int probOfArrival;
	int carsInQueue = 0;

	LinkedQueue carQueue;

	cout << "Enter time to wash one car:" << endl;
	cin >> timeForWash;
	cout << endl;
	cout << "Enter probability of arrival per minute" << endl;
	cin >> probOfArrival;

	carsWashed = 0;
	totalQueueMin = 0;
	timeLeftOnCar = 0;
	for (minute = 1; minute <= 20; ++minute)
	{
		if (rand() % 100 <= probOfArrival)
		{
			carQueue.enqueue(minute);
			carsInQueue++;
			cout << "Queued" << endl;
		}

		if ((timeLeftOnCar == 0) && (!carQueue.isEmpty()))
		{
			timeEnteredQueue = carQueue.peekFront();
			carQueue.dequeue();
			totalQueueMin = totalQueueMin + (minute - timeEnteredQueue);
			++carsWashed;
			carsInQueue--;
			timeLeftOnCar = timeForWash;
			cout << "Finish" << endl;
		}
		if (timeLeftOnCar = !0)
		{
			timeLeftOnCar -= 1;
			cout << "Washing" << endl;
		}
		if ((timeLeftOnCar == 0) && (carQueue.isEmpty()))
		{
			cout << "Waiting" << endl;
		}
	}
	cout << carsWashed << endl;
	cout << totalQueueMin << endl;
	cout << carsInQueue << endl;
	system("pause");
	return(0);
};
//Implementation
Node::Node() : next(nullptr)
{
} // default
Node::Node(const int& anItem) : item(anItem), next(nullptr)
{
}

Node::Node(const int& anItem, Node * nextNodePtr) : item(anItem), next(nextNodePtr)
{
}

void Node::setItem(const int& anItem)
{
	item = anItem;
}

void Node::setNext(Node * nextNodePtr)
{
	next = nextNodePtr;
}

int Node::getItem()
{
	return item;
}

Node* Node::getNext()
{
	return next;
}

bool LinkedQueue::enqueue(int& newEntry)
{
	Node* newNodePtr = new Node(newEntry);
	//Insert the new node 
	if (isEmpty())
		frontPtr = newNodePtr; // The queue was empty 
	else
		backPtr->setNext(newNodePtr); // The queue was not empty 
	backPtr = newNodePtr; // New node is at back 
	return true;
} // end enqueue
bool LinkedQueue::dequeue()
{
	bool result = false;
	if (!isEmpty())
	{
		// Queue is not empty; remove front 
		Node* nodeToDeletePtr = frontPtr;
		if (frontPtr == backPtr)
		{ // Special case: one node in queue 
			frontPtr = nullptr;
			backPtr = nullptr;
		}
		else
			frontPtr = frontPtr->getNext();
		// Return deleted node to system 
		nodeToDeletePtr->setNext(nullptr);
		delete nodeToDeletePtr;
		nodeToDeletePtr = nullptr;
		result = true;
	} // end if 
	return result;
} // end dequeue
bool LinkedQueue::isEmpty()
{
	return (frontPtr == nullptr);
}
int LinkedQueue::peekFront() const
{
	return frontPtr->getItem();
}
LinkedQueue::LinkedQueue()
{
	frontPtr = nullptr;
	backPtr = nullptr;
}
LinkedQueue::LinkedQueue(const LinkedQueue & aQueue) :
	frontPtr(aQueue.frontPtr)
{
} // end copy constructor 
LinkedQueue::~LinkedQueue()
{
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
