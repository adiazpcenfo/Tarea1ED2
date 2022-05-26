//
// Created by Allan Diaz on 25/5/22.
//

#include "Pila.cpp"
#include "Cola.cpp"
#include "Lista.cpp"
#pragma once

class Gestor {

    Cola* cola;
    Lista* lista;
    Pila* pila;

public:
    Gestor(Cola* cola, Lista* lista, Pila* pila) {

        this->cola = cola;
        this->lista = lista;
        this->pila = pila;
    }

    void pasarDeListaACola(int x){
        if(!lista->esVacia() && lista->dirNodo(x) != nullptr){
            cola->encolar(x);
        }
    }


};


