/*
A. Intercambio de valores: Crea una función que reciba dos punteros a enteros y los intercambie.
*/
#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    std::cout << "Antes del intercambio: " << std::endl;
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;

    swap(&num1, &num2);

    std::cout << "Después del intercambio: " << std::endl;
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;

    return 0;
}