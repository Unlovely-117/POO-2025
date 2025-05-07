#include <iostream>
#include <string>
#include "Baloncesto.h"
#include "Futbol.h"


using namespace std;

#include "Natacion.h"

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
            baloncesto.jugar(); // Método que debe estar implementado en Baloncesto.h y Baloncesto.cpp
            break;
        }
        case 2: {
            Futbol futbol;
            futbol.jugar(); // Método que debe estar implementado en Futbol.h y Futbol.cpp
            break;
        }
        case 3: {
            Natacion natacion;
            natacion.nadar(); // Método que debe estar implementado en Natacion.h y Natacion.cpp
            break;
        }
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

    cout << "Hello, World!" << endl;
    return 0;
}