

#include <iostream>
#include <stdlib.h>
#include "Pila.cpp"
#include "Cola.cpp"
#include "Lista.cpp"
#include "Gestor.cpp"

using namespace std;


Lista* lista = new Lista();
Cola* cola = new Cola();
Pila* pila = new Pila();

Gestor* gestor = new Gestor(cola,lista,pila);

void menu() {
    int opc = 0;
    do {
        cout << "\n Menu" << endl;
        cout << "(1) Ingresar un numero a una lista" << endl;
        cout << "(2) Ingresar un numero a una pila" << endl;
        cout << "(3) Ingresar un numero a una cola" << endl;
        cout << "(4) Desplegar lista ordenada" << endl;
        cout << "(5) Desplegar pila" << endl;
        cout << "(6) Desplegar cola" << endl;
        cout << "(7) Pasar de Lista a cola" << endl;
        cout << "(8) Pasar de Lista a pila" << endl;
        cout << "(9) Pasar de Pila a cola" << endl;
        cout << "(10) Pasar de Pila a lista" << endl;
        cout << "(11) Pasar de Cola a Pila" << endl;
        cout << "(12) Pasar de Cola a lista" << endl;
        cout << "(0) Salir del programa" << endl;
        cout << "_____________________________________________________________________" << endl;
        cout << "Opcion Seleccionada-> "; cin >> opc;
        cout << endl << endl;

        switch (opc) {
            case 1: {
                int num;
                cout << "Ingrese el numero agregar:" << endl;
                cin >> num;
                int resul=lista->agregar(num);
                if (resul == 1) {
                    cout << "Agregado correctamente." << endl;
                }
                else {
                    cout << "No se pudo agregar." << endl;
                }
                break;
            }
            case 2: {
                int num;
                cout << "Ingrese el numero agregar:" << endl;
                cin >> num;
                pila->push(num);
                cout << "Agregado correctamente." << endl;
                
                break;
            }
            case 3: {
                int num;
                cout << "Ingrese el numero agregar:" << endl;
                cin >> num;
                cola->encolar(num);
                cout << "Agregado correctamente." << endl;

                break;
            }
            case 4: {
                cout << "Desplegando lista ordenada:" << endl;
                lista->desplegarLista();
                break;
            }
            case 5: {
                cout << "Desplegando pila:" << endl;
                pila->show();
                break;
            }
            case 6: {
                cout << "Desplegando cola:" << endl;
                cola->desplegar();
                break;
            }
            case 7: {
                cout << "De lista a cola:" << endl;
                int num;
                cout << "Ingrese el numero a mover:" << endl;
                cin >> num;
                gestor->pasarDeListaACola(num);
                cout << "Agregado correctamente." << endl;

                break;
            }
            case 8: {
                cout << "De lista a pila:" << endl;
                int num;
                cout << "Ingrese el numero a mover:" << endl;
                cin >> num;
                gestor->pasarDeListaAPila(num);
                cout << "Agregado correctamente." << endl;

                break;
            }
            case 9: {
                cout << "De pila a cola:" << endl;

                gestor->pasarDePilaACola();
                cout << "Agregado correctamente." << endl;

                break;
            }
            case 10: {
                cout << "De pila a lista:" << endl;

                gestor->pasarDePilaALista();
                cout << "Agregado correctamente." << endl;

                break;
            }
            case 11: {
                cout << "De cola a pila:" << endl;

                gestor->pasarDeColaAPila();
                cout << "Agregado correctamente." << endl;

                break;
            }
            case 12: {
                cout << "De cola a lista:" << endl;

                gestor->pasarDeColaALista();
                cout << "Agregado correctamente." << endl;

                break;
            }
            default:{
                cout << "Opcion digitada no es valida. " << endl;
                break;
        }

        }
    } while (opc!=0);
}

int main()
{
    cout << "--------------------------Bienvenido--------------------------------\n" << endl;
    menu();
}

