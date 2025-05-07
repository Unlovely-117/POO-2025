#include <iostream>
#include <string>
#include "Baloncesto.h"
#include "Futbol.h"
#include "Natacion.h"

using namespace std;

void mostrarMenu() {
    cout << "===== Menu =====" << endl;
    cout << "1. Baloncesto" << endl;
    cout << "2. Futbol" << endl;
    cout << "3. Natacion" << endl;
    cout << "4. Salir" << endl;
    cout << "Elige una opcion: ";
}

void ejecutarOpcion(int opcion) {
    switch (opcion) {
        case 1: {
            Baloncesto baloncesto;
            baloncesto.jugar();
            break;
        }
        case 2: {
            Futbol futbol;
            futbol.jugar();
            break;
        }
        case 3: {
            Natacion natacion;
            natacion.nadar();
            break;
        }
        case 4:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion no valida. Intenta de nuevo." << endl;
    }
}

int main() {
    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;
        ejecutarOpcion(opcion);
    } while (opcion != 4);
    
    return 0;
}