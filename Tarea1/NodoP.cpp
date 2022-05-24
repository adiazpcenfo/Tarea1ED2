#include <iostream>
#include <stdlib.h>
using namespace std;

class NodoP{
protected:
	int dato;
	NodoP* sgte;

public:
	NodoP(int _dato) {
		this->dato = _dato;
		this->sgte = NULL;
	}

	int getDato() {
		return this->dato;
	}

	NodoP* getSgte() {
		return this->sgte;
	}

	void setDato(int _dato) {
		this->dato = _dato;
	}

	void setSgte(NodoP* _sgte) {
		this->sgte = _sgte;
	}
};