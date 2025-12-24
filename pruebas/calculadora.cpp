#include <iostream>
#include <string>
using namespace std;

// Variables Globales
double x, y;
int opcion;

// --- Subrutinas  ---
double suma(double a, double b) {
    return a + b;
}

double resta(double a, double b) {
    return a - b;
}

double division(double a, double b) {
    return a / b;
}

double multiplicacion(double a, double b) {
    return a * b;
}

void seleccion() {
    switch (opcion) {
        case 1:
            cout << "Resultado de la SUMA: " << suma(x, y) << endl;
            break;
        case 2:
            cout << "Resultado de la RESTA: " << resta(x, y) << endl;
            break;
        case 3:
            if (y != 0) {
                cout << "Resultado de la DIVISION: " << division(x, y) << endl;
            } else {
                cout << "Error: No se puede dividir entre cero." << endl;
            }
            break;
        case 4:
            cout << "Resultado de la MULTIPLICACION: " << multiplicacion(x, y) << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
    }
}

int selec_operacion() {
while (true){
    cout << "--- MENU CALCULADORA ---" << endl;
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Division\n";
    cout << "4. Multiplicacion\n";
    cout <<"Elija una opcion de las anteriores \npresentadas,solo escribe el número que \nidentifica a cada operación: ";
    cin >> opcion;
    return opcion;
    }
}


void los_terminos() {
    cout << "Ingrese el primer numero: ";
    cin >> x;
    cout << "Ingrese el segundo numero: ";
    cin >> y;
}

char hola_2(){
cout <<" ∅" << endl;
cout << "/|\\" << endl;
cout << "/ \\" << endl;
return 0;  }

// --- Código principal ---
int main() {
    selec_operacion();
    // Solo pedimos los números si la opción es válida (1 a 4)
    if (opcion >= 1 && opcion <= 4) {
        cout << "\n";
        los_terminos();
        seleccion();
    } else {
        cout << "Opcion no reconocida. Saliendo del programa." << endl;
        hola_2();
    }
    
    return 0;
}
    
