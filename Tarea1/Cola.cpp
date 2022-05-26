
#include <iostream>

#include "NodoC.cpp"
#pragma once

using namespace std;

class Cola {
protected:
	NodoC* pFrente;
	NodoC* pFinal;
	int largoC;

public:
	NodoC* getPFrente()
	{
		return this->pFrente;
	}

	NodoC* getPFinal()
	{
		return this->pFinal;
	}

	int getLargo()
	{
		return this->largoC;
	}

	void setPFrente(NodoC* _dato)
	{
		this->pFrente = _dato;
	}

	void setPFinal(NodoC* _dato)
	{
		this->pFinal = _dato;
	}

	void setlargo(int _dato)
	{
		this->largoC = _dato;
	}

	Cola()
	{
		this->pFrente = NULL;
		this->pFinal = NULL;
		this->largoC = 0;
	}

	bool esVacia()
	{
		return this->largoC == 0;
	}

	int largo()
	{
		return this->largoC;
	}

	int desencolar()
	{
		int dato = 0;
		if (!esVacia()) {
			NodoC* aux = this->pFrente;
			pFrente = pFrente->getSgte();

			dato = aux->getDato();

			delete aux;
			setlargo(getLargo() - 1);
			if (this->largoC == 0) {
				pFinal = NULL;
			}
		}

		return dato;
	}

	void encolar(int _dato)
	{
		NodoC* nuevo = new NodoC(_dato);
		if (esVacia()) {
			setPFrente(nuevo);
			setPFinal(nuevo);
		}
		else {
			getPFinal()->setSgte(nuevo);
		}

		setPFinal(nuevo);
		setlargo(getLargo() + 1);
	}

	int frente()
	{
		int dato = 0;
		if (!esVacia()) {
			dato = pFrente->getDato();
		}
		return dato;
	}

	int _final()
	{
		int dato = 0;
		if (!esVacia()) {
			dato = pFinal->getDato();
		}
		return dato;
	}

	void desplegar()
	{
		NodoC* aux = getPFrente();
		while (aux != NULL) {
			cout << aux->getDato() << "-";
			aux = aux->getSgte();
		}
		cout << "FIN" << endl;
	}

};

