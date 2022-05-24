#include <iostream>
#include <stdlib.h>
using namespace std;

class Nodo {
protected:
	int dato;
	Nodo* sgte;

public:
	Nodo(int _dato) {
		this->dato = _dato;
		this->sgte = NULL;
	}

	int getDato() {
		return this->dato;
	}

	Nodo* getSgte() {
		return this->sgte;
	}

	void setDato(int _dato) {
		this->dato = _dato;
	}

	void setSgte(Nodo* _sgte) {
		this->sgte = _sgte;
	}
};