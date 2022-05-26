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

    void pasarDeListaAPila(int x){
        if(!lista->esVacia() && lista->dirNodo(x) != nullptr){
            pila->push(x);
        }
    }

    void pasarDePilaACola(){
        if(!pila->empty()){
            cola->encolar(pila->pop());
        }
    }

    void pasarDePilaALista(){
        if(!pila->empty()){
           lista->agregar(pila->pop());
        }
    }

    void pasarDeColaAPila(){
        if(!cola->esVacia()){
            pila->push(cola->desencolar());
        }
    }
    void pasarDeColaALista(){
        if(!cola->esVacia()){
           lista->agregar(cola->desencolar());
        }
    }
};


