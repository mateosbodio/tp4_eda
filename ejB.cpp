/*
B. Paso por referencia de un puntero: Crea una función que reciba un puntero a un entero y modifique el valor al que apunta.
*/

#include <iostream>

void modifyValue(int* ptr) {
    // Verificamos si el puntero no es nulo
    if (ptr != nullptr) {
        // Modificamos el valor al que apunta el puntero
        *ptr = 42;
    }
}

int main() {
    // Creamos un puntero a un entero
    int* ptr = new int(10);

    // Imprimimos el valor al que apunta el puntero antes de modificarlo
    std::cout << "Antes de modificar: " << *ptr << std::endl;

    // Llamamos a la función para modificar el valor al que apunta el puntero
    modifyValue(ptr);

    // Imprimimos el valor al que apunta el puntero después de modificarlo
    std::cout << "Después de modificar: " << *ptr << std::endl;

    // Eliminamos la memoria dinámica asignada
    delete ptr;

    return 0;
}