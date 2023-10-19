/*
10. Realice un programa que contenga las siguientes funciones o procedimientos según sea:
• cargaMatriz: que carga una matriz de 4 por 4 con números reales ingresados por el usuario
• muestraMatriz: nos muestra en pantalla la matriz de 4 por 4 recibida por parámetro
• intercambioDiagonal: recibe 2 matrices por parámetro e intercambia los valores de las diagonales de ambas.
Escriba un programa que llame a las funciones en el siguiente orden: carga (para las 2 matrices), muestra (para las 2 matrices), intercambia, muestra (para las 2 matrices).
*/
#include <iostream>
using namespace std;

// Procedimiento para cargar la matriz
void cargaMatriz(float matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Ingrese el elemento en la posicion (" << i << "," << j << "): ";
            cin >> matriz[i][j];
        }
    }
}

// Procedimiento para mostrar la matriz
void muestraMatriz(float matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Procedimiento para intercambiar las diagonales de las matrices
void intercambioDiagonal(float matriz1[4][4], float matriz2[4][4]) {
    for (int i = 0; i < 4; i++) {
        swap(matriz1[i][i], matriz2[i][i]);
    }
}

int main() {
    float matriz1[4][4], matriz2[4][4];

    cout << "Matriz 1:" << endl;
    cargaMatriz(matriz1);
    muestraMatriz(matriz1);

    cout << "Matriz 2:" << endl;
    cargaMatriz(matriz2);
    muestraMatriz(matriz2);

    intercambioDiagonal(matriz1, matriz2);

    cout << "Matriz 1 (despues del intercambio):" << endl;
    muestraMatriz(matriz1);

    cout << "Matriz 2 (despues del intercambio):" << endl;
    muestraMatriz(matriz2);

    return 0;
}