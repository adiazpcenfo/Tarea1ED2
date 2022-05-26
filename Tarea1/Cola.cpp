
#include <iostream>

#include "Nodo.cpp"
#pragma once

using namespace std;

class Cola {
protected:
	Nodo* pFrente;
	Nodo* pFinal;
	int largoC;

public:
	Nodo* getPFrente()
	{
		return this->pFrente;
	}

	Nodo* getPFinal()
	{
		return this->pFinal;
	}

	int getLargo()
	{
		return this->largoC;
	}

	void setPFrente(Nodo* _dato)
	{
		this->pFrente = _dato;
	}

	void setPFinal(Nodo* _dato)
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
			Nodo* aux = this->pFrente;
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
		Nodo* nuevo = new Nodo(_dato);
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
		Nodo* aux = getPFrente();
		while (aux != NULL) {
			cout << aux->getDato() << "-";
			aux = aux->getSgte();
		}
		cout << "FIN" << endl;
	}

};

