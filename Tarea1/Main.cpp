

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
        cout << "(7) De Lista a cola" << endl;
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

