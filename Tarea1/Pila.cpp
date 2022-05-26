#include <iostream>
#include <stdlib.h>
#include "Nodo.cpp"
#pragma once
using namespace std;

class Pila {
protected:
	Nodo* pTope;
	int largo;

public:
	Pila() {
		setpTope(NULL);
		setLargo(0);
	}

	~Pila() {}

	void setLargo(int _largo) {
		this->largo = _largo;
	}

	int getLargo() {
		return this->largo;
	}

	void setpTope(Nodo* _pTope) {
		this->pTope = _pTope;
	}

	Nodo* getpTope() {
		return this->pTope;
	}

	// Agregar un elemento a la pila
	void push(int _info) {
		Nodo* nuevo = new Nodo(_info);

		nuevo->setSgte(pTope);
		setpTope(nuevo);

		setLargo(getLargo() + 1);
	}

	// Eliminar un elemento de la pila
	int pop() {
		int info = 0;

		if (empty()) {
			info = NULL;
		}
		else {

			info = getpTope()->getDato();

			Nodo* aux = getpTope();
			setpTope(aux->getSgte());

			delete aux;
			setLargo(getLargo() - 1);

		}
		return info;
	}

	// Devuelve el dato en el tope de la pila
	int top() {

		if (empty()) {
			return NULL;
		}
		else {
			return pTope->getDato();
		}
	}

	int size() {
		return this->largo;
	}

	void show() {
		if (empty()) {
			cout << "La pila esta vacia" << endl;
		}
		else {
			Nodo* aux = pTope;
			while (aux != NULL) {
				cout << aux->getDato() << endl;
				aux = aux->getSgte();
			}
		}
	}

	bool empty() {
		return getpTope() == NULL;
	}


};
