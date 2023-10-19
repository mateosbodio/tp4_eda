/*
18. Un número es primo si solo es divisible por la unidad y por si mismo. Defina una función que determina si un número es primo, debe recibir el número y retornar verdadero o falso.
- Realice un programa que, de 2 opciones, 1). Determinar si un número es primo 2). Calcular todos los números primos menores a un número ingresado por el usuario. El usuario debe poder realizar estas opciones todas las veces que desee.
*/
bool esPrimo(int num) {
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0)
            return false;
    }
    return true;
}
#include <iostream>
using namespace std;

bool esPrimo(int num) {
    // Código de la función esPrimo
}

void calcularPrimos(int num) {
    cout << "Los numeros primos menores a " << num << " son: ";
    for (int i = 2; i < num; i++) {
        if (esPrimo(i))
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int opcion, num;
    do {
        cout << "1. Determinar si un numero es primo" << endl;
        cout << "2. Calcular todos los numeros primos menores a un numero" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "Ingrese el numero: ";
                cin >> num;
                if (esPrimo(num))
                    cout << num << " es un numero primo." << endl;
                else
                    cout << num << " no es un numero primo." << endl;
                break;
            case 2:
                cout << "Ingrese el numero: ";
                cin >> num;
                calcularPrimos(num);
                break;
            case 0:
                cout << "Hasta luego!" << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
                break;
        }
    } while (opcion != 0);
    return 0;
}