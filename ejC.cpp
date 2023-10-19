/*
C. Hacer una función que reciba un puntero y compruebe si el número es par o impar, y señalar la posición de memoria donde se está guardando el número.
*/#include <iostream>

void esParImpar(int* ptr) {
    // Comprobar si el número es par o impar
    if (*ptr % 2 == 0) {
        std::cout << "El número " << *ptr << " es par.\n";
    } else {
        std::cout << "El número " << *ptr << " es impar.\n";
    }

    // Señalar la posición de memoria donde se está guardando el número
    std::cout << "La dirección de memoria del número es: " << ptr << std::endl;
}

int main() {
    int num = 15;
    int* ptr = &num;

    esParImpar(ptr);

    return 0;
}