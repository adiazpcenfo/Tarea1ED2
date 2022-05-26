#include <iostream>
#include <stdlib.h>
#pragma once
using namespace std;

class NodoC {
protected:
	int dato;
	NodoC* sgte;

public:
	NodoC(int _dato) {
		this->dato = _dato;
		this->sgte = NULL;
	}

	int getDato() {
		return this->dato;
	}

	NodoC* getSgte() {
		return this->sgte;
	}

	void setDato(int _dato) {
		this->dato = _dato;
	}

	void setSgte(NodoC* _sgte) {
		this->sgte = _sgte;
	}
};